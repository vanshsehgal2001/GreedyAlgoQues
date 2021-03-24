bool comp(const vector<int>&a,const vector<int>&b){
    return a[1]<b[1];
}

int Solution::solve(vector<vector<int> > &nums) {
    sort(nums.begin(),nums.end(),comp);
    int j=0;
    int ans=1;
    for(int i=1;i<nums.size();i++){
        if(nums[j][1]<nums[i][0]){
            ans++;
            j=i;
        }
    }
    return ans;
}
