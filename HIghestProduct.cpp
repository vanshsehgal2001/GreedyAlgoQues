#include<bits/stdc++.h>
int Solution::maxp3(vector<int> &nums) {
    int n=nums.size();
    if(n<=2){
        int ans=1;
        for(int i=0;i<n;i++){
            ans=ans*nums[i];
        }
        return ans;
    }
    sort(nums.begin(),nums.end());
    int ans1=nums[n-1]*nums[n-2]*nums[n-3];
    int ans2=nums[0]*nums[1]*nums[n-1];
    return max(ans1,ans2);
}
