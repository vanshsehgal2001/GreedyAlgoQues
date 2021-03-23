int Solution::solve(vector<vector<int> > &A){
    int n=A.size();
    sort(A.begin(),A.end());
        
        priority_queue<int, vector<int>, greater<int>> heap;
        int rooms = 0;
        heap.push(A[0][1]);
        rooms++;
        for (int i = 1; i < n; i++) {
            if (A[i][0] < heap.top()) {
                rooms++;
            } else {
                heap.pop();
            }
            heap.push(A[i][1]);
        }
        return rooms;
}
