class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int n=s.size();
        int lcount,rcount;
        lcount=rcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                lcount++;
            }
            else{
                rcount++;
            }
            if(lcount!=0 && rcount!=0 && lcount==rcount){
                ans++;
                lcount=rcount=0;
                continue;
            }
        }
        return ans;
    }
};
