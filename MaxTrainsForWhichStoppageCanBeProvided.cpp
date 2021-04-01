#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<climits>
#include<set>
using namespace std;

int m=5;
int n=2;

int countMaxStops(int arr[][3]){
	vector<pair<int,int>> vec[n];
	for(int i=0;i<m;i++){
		vec[arr[i][2]-1].push_back(make_pair(arr[i][1],arr[i][0]));
	}
	for(int i=0;i<n;i++){
		sort(vec[i].begin(),vec[i].end());
	}
	int count = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i].size() == 0)
            continue;
        int x = 0;
        count++;
        for (int j = 1; j < vec[i].size(); j++) {
            if (vec[i][j].second >=
                             vec[i][x].first) {
                x = j;
                count++;
            }
        }
    }
    return count;
}

int main(){
	int arr[m][3]={ 1000, 1030, 1,
                    1010, 1020, 1,
                    1025, 1040, 1,
                    1130, 1145, 2,
                    1130, 1140, 2 
                };
    cout<<countMaxStops(arr);
}	
