class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        map<int,int> m;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int length=rectangles[i][0];
            int width=rectangles[i][1];
            m[min(length,width)]++;
            ans=max(ans,min(length,width));
        }
        return m[ans];
    }
};
