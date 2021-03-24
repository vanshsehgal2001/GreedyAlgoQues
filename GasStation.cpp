int Solution::canCompleteCircuit(const vector<int> &nums1, const vector<int> &nums2) {
    int fuelOverall=0;
    int isSuff=0;
    int index=0;
    for(int i=0;i<nums1.size();i++){
        fuelOverall=fuelOverall + (nums1[i] - nums2[i]);
        isSuff = isSuff + (nums1[i]-nums2[i]);
        if(isSuff < 0){
            isSuff=0;
            index=i+1;
        }
    }
    return fuelOverall >=0? index%nums1.size() : -1;
}
