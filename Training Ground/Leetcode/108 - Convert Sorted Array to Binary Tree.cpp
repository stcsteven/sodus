/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void rotateLeft(TreeNode* now){
        TreeNode* temp = now;
        now = now->right;
        now->left = temp;
        return;
    }
    
    void rotateRight(TreeNode* now){
        TreeNode* temp = now;
        now = now->left;
        now->right = temp;
        return;
    }
    
    int findHeight(TreeNode* now){
        if(now==NULL) return 0;
        int left_height = findHeight(now->left);
        int right_height = findHeight(now->right);
        return max(left_height, right_height)+1;
    }
    
    void balance(TreeNode* now){
        int height_now = findHeight(now);
        if(height_now==-2){
            if(findHeight(now->right)==1) rotateLeft(now);
            rotateRight(now);   
        } else if(height_now==2){
            if(findHeight(now->left)==-1) rotateRight(now);
            rotateLeft(now);
        }
        return;
    }
        
    TreeNode* insertNode(int value, TreeNode* now){
        if(now==NULL) return new TreeNode(value);
        cout << now->val << endl;
        int node_value = now->val;
        if(value>node_value) {
            cout <<"GO RIGHT" << endl;
            now->right = insertNode(value,now->right);
            cout <<"Height of \t: "<< findHeight(now) << endl;
            // cout << endl;
        }
        // balance(now);
        return now;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root;
        for(int i=0;i<nums.size();i++)
            root = insertNode(nums[i],root);
        return root;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string treeNodeToString(TreeNode* root) {
    if (root == nullptr) {
      return "[]";
    }

    string output = "";
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node == nullptr) {
          output += "null, ";
          continue;
        }

        output += to_string(node->val) + ", ";
        q.push(node->left);
        q.push(node->right);
    }
    return "[" + output.substr(0, output.length() - 2) + "]";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        
        TreeNode* ret = Solution().sortedArrayToBST(nums);

        string out = treeNodeToString(ret);
        cout << out << endl;
    }
    return 0;
}