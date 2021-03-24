int Solution::mice(vector<int> &nums1, vector<int> &nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int ans=INT_MIN;
    for(int i=0;i<nums1.size();i++){
        ans=max(ans,abs(nums1[i]-nums2[i]));
    }
    return ans;
}
