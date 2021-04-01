#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<climits>
#include<set>
using namespace std;

int solve(vector<int> arr1,vector<int> arr2,vector<int> arr3,int n1,int n2,int n3){
	int sum1,sum2,sum3;
	sum1=sum2=sum3=0;
	for(int i=0;i<n1;i++){
		sum1+=arr1[i];
	}
	for(int i=0;i<n2;i++){
		sum2+=arr2[i];
	}
	for(int i=0;i<n3;i++){
		sum3+=arr3[i];
	}
	int ind1,ind2,ind3;
	ind1=ind2=ind3=0;
	while(true){
		if(ind1 == n1 || ind2==n2 || ind3==n3){
			return 0;
		}
		if(sum1 == sum2 && sum2==sum3){
			return sum1;
		}
		if(sum1>=sum2 && sum1>=sum3){
			sum1-=arr1[ind1];
			ind1++;
		}
		else if(sum2>=sum1 && sum2>=sum3){
			sum2-=arr2[ind2];
			ind2++;
		}
		else if(sum3>=sum2 && sum3>=sum1){
			sum3-=arr3[ind3];
			ind3++;
		}
	}
}

int main(){
	int n1;
	cin>>n1;
	vector<int> arr1(n1);
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cin>>n2;
	vector<int> arr2(n2);
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	int n3;
	cin>>n3;
	vector<int> arr3(n3);
	for(int i=0;i<n3;i++){
		cin>>arr3[i];
	}
	cout<<solve(arr1,arr2,arr3,n1,n2,n3);
}	
