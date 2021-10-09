class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int> s;int c=0;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
        if(nums[i]!=0)
            s.push_back(nums[i]);
         else
             c++;
     }
    while(c--)
    {
        s.push_back(0);
    }
        nums = s;
    }
};
