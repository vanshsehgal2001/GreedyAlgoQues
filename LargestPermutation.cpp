vector<int> Solution::solve(vector<int> &nums, int count) {
    unordered_map<int,int> map;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]=i;
    }
    for(int i=0;i<nums.size() && count>0;i++){
        if(nums[i]!=(nums.size()-i)){
            count--;
            map[nums[i]]=map[nums.size()-i];
            swap(nums[map[nums.size()-i]],nums[i]);
        }
    }
    return nums;
}
