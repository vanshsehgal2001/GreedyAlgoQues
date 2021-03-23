int Solution::seats(string s) {
    int n=s.size();
    vector<int> pos;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            pos.push_back(i);
        }
    }
    int size=pos.size();
    if(size==0){
        return 0;
    }
    int mid = size/2;
    int centerPos=pos[mid];
    int ans=0;
    for(int i=0;i<size;i++){
        int start=pos[i];
        int end=centerPos-mid+i;
        ans= (ans + abs(start-end))%10000003;
    }
    return ans%10000003;
}
