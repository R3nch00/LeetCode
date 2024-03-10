class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target){
        unordered_map<int,int> numToIndex;
      for(int i{};i<nums.size();++i){
            int complement=target-nums[i];
             if(numToIndex.count(complement)){ return{numToIndex[complement],i}; }
            numToIndex[nums[i]] = i;
    }
   throw runtime_error("No valid solution exists.");
  }
};
