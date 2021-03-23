int Solution::candy(vector<int> &nums) {
    int n=nums.size();
    vector<int> ans(n,1);
    int i=0;
    int res=0;
    while(i<n){
        if(i==0){
            if(nums[i]>nums[i+1]){
                ans[i]=ans[i+1]+1;
            }
        }
        else if(i==n-1){
            if(nums[i]>nums[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
        else{
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                ans[i] = max(ans[i+1],ans[i-1])+1;
            }
            else if(nums[i]>nums[i-1]){
                ans[i]=ans[i-1]+1;
            }
            else if(nums[i]>nums[i+1]){
                ans[i]=ans[i+1]+1;
            }
        }
        i++;
    }
    i=n-1;
    while(i>=0){
        if(i==0){
            if(nums[i]>nums[i+1]){
                ans[i]=ans[i+1]+1;
            }
        }
        else if(i==n-1){
            if(nums[i]>nums[i-1]){
                ans[i]=ans[i-1]+1;
            }
        }
        else{
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                ans[i] = max(ans[i+1],ans[i-1])+1;
            }
            else if(nums[i]>nums[i-1]){
                ans[i]=ans[i-1]+1;
            }
            else if(nums[i]>nums[i+1]){
                ans[i]=ans[i+1]+1;
            }
        }
        i--;
    }
    for(int i=0;i<ans.size();i++){
        res+=ans[i];
    }
    return res;
}
