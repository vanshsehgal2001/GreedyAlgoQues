#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool comp(vector<int> a,vector<int> b){
	return a[1]<b[1];
}

int main(){

	int n;
	cin>>n;
	vector<vector<int>> timeSlot;
	for(int i=0;i<n;i++){
		int start,end;
		cin>>start>>end;
		timeSlot.push_back({start,end});
	}
	sort(timeSlot.begin(),timeSlot.end(),comp);

	int count=1;
	int j=0;
	vector<int> ans;
	ans.push_back(0);
	for(int i=1;i<n;i++){
		if(timeSlot[j][1]<=timeSlot[i][0]){
			count++;
			j=i;
			ans.push_back(i);	
		}
	}

	cout<<"Number of Activities - "<<count<<endl;
	cout<<"Activities Indices are - "<<" ";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

	return 0;
}
