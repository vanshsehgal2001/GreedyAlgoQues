class Solution {
public:
    int totalMoney(int n) {
        
        //BRUTE FORCE(O(N))
        
        int step=1;
        int ans=0;
        while(n>0){
            for(int i=0; i<7 && n-- > 0 ;i++){
                ans+=(step+i);
            }
            step++;
        }
        return ans;
        
        //O(1)
        
        // int extra = n%7, weeks = n/7;
        // return 28 * weeks + 7 * (weeks)*(weeks-1)/2 + weeks*extra + (extra)*(extra+1)/2;
    }
};
