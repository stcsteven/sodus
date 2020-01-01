class Solution {
public:
    /*
        Solusinya adalah implementasi LowerBound + UpperBound pakai BinarySearch 
        BinarySearch has O(logN) complexity since the counter is done by using division with 2
        
        Important Question => kenapa rangenya dari 0 sampe nums.size() bukan sampe nums.size()-1
        Nb. http://www.cplusplus.com/reference/algorithm/lower_bound/

        Consider the following example -> array = [1,2]; target = 2
        By implementing the range from 0 to array.size(), the mid value will be 1 instead of 0 (when u use array.size()-1) 

        Category: Searching, Binary Search 
    */

    int lowerBound(vector<int>& nums, int target){
        int start = 0, ans=-1;
        int end = nums.size(); 
        while(start<end){
            int mid = start + ((end-start)>>1);
            if(nums[mid]==target) ans = mid;
            if(nums[mid]<target) start = mid+1;
            else end = mid;
        }
        return ans;
    }
    
    int upperBound(vector<int>& nums, int target){
        int start = 0, ans=-1;
        int end = nums.size(); 
        while(start<end){
            int mid = start + ((end-start)>>1);
            if(nums[mid]==target) ans = mid;
            if(nums[mid]<=target) start = mid+1;
            else end = mid;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(lowerBound(nums, target));
        ans.push_back(upperBound(nums, target));
        return ans;
    }
};