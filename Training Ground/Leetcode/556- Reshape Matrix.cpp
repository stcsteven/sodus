class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int now_row = nums.size();
        int now_col = nums[0].size();
        if((now_row*now_col)!=(r*c)) return nums;
        int x_now=0,y_now=0;
        vector<vector<int>> ans;
        while(r>0){
            int counter_col = c;
            vector<int> col_ans;
            while(counter_col>0){
                col_ans.push_back(nums[x_now][y_now]); 
                y_now+=1;
                if(y_now>=now_col){
                    x_now+=1;
                    y_now=0;
                }
                counter_col-=1;
            }
            ans.push_back(col_ans);
            r-=1;
        }
        return ans;
    }
};