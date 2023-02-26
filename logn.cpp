class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,m;
        while(i<=j){
        if(i==j){
            if(nums[i]==target) return i;
            else return -1;
        }
        else{
            m=(i+j)/2;
            if(nums[m]==target) return m;
            else{
                if(nums[m]>target) j=m-1;
                else i=m+1;
            }
            
        }
        }
        return -1;

    }
};