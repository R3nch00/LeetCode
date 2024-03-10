class Solution{
public:
    vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
        unordered_set<int> set_nums1(nums1.begin(), nums1.end());
        unordered_set<int> set_nums2(nums2.begin(), nums2.end());
        vector<int> result;
      for(int num : set_nums1){
            if(set_nums2.count(num)){ result.push_back(num); }
        }
   return result;
  }
};
