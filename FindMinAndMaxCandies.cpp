#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<climits>
#include<set>
using namespace std;

int maxCandies(vector<int> arr,int n,int k){
	int ans=0;
	int j=0;
	for(int i=n-1;i>=j;i--){
		ans+=arr[i];
		j+=k;
	}
	return ans;
}

int minCandies(vector<int> arr,int n,int k){
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=arr[i];
		n=n-k;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sort(arr.begin(),arr.end());
	cout<<minCandies(arr,n,k)<<endl;
	cout<<maxCandies(arr,n,k);
}	
