class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> myMap;
        int len = nums.size();
        for(int i=0; i<len; i++){
            myMap[nums[i]]=i;
        }
        for(int i=0; i<len; i++){
            int temp = target-nums[i];
            if((myMap.count(temp) > 0) && (myMap[temp]!=i))
                return {i, myMap[temp]};   
        }
        return {};
    }
};
