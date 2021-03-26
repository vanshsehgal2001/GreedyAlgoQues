#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class knapsack{
	public:
		int weight;
		int price;
};

bool comp(knapsack a,knapsack b){
	double f1= (a.price*1.0)/a.weight;
	double f2= (b.price*1.0)/b.weight;

	return f1>f2;
}

int main(){

	int maxWeight;
	cin>>maxWeight;
	int n;
	cin>>n;
	vector<knapsack> arr;
	for(int i=0;i<n;i++){
		int weight,price;
		cin>>weight>>price;
		arr.push_back({weight,price});
	}

	sort(arr.begin(),arr.end(),comp);

	int weight=0;
	double profit=0;

	for(int i=0;i<n;i++){
		int w = weight + arr[i].weight;
		if(w<=maxWeight){
			weight+=arr[i].weight;
			profit+=arr[i].price;
		}
		else{
			profit+= (((maxWeight-weight)*1.0)/arr[i].weight)*arr[i].price;
			break;
		}
	}
	cout<<profit<<endl;

	return 0;
}
