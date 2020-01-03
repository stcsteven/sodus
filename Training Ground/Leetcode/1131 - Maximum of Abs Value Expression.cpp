class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        //maximum i minimum j
        int ans = INT_MIN;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr1.size();j++)
                ans = max(ans, abs(arr1[i]-arr1[j])+abs(i-j)+abs(arr2[i]-arr2[j]));
        }
        return ans;
    }
};