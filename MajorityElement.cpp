int Solution::majorityElement(const vector<int> &A) {
        unordered_map<int,int> map;
        for(auto x : A){
            map[x]++;
        }
        int n=A.size();
        int ans;
        for(auto it : map){
            if(it.second > n/2){
                ans=it.first;
                break;
            }
        }
        return ans;
}
