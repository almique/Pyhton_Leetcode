
/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.


@author almique

*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        for(int i=0;i<nums.size();i++)
        {
         for(int j=i+1;j<nums.size();j++)
         {
         if(nums[j]==target-nums[i])
         {
             return{i,j};
         }
         
         }
        }
    }
};
