#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<climits>
#include<set>
using namespace std;

int splitNIntoMaxCompNums(int n){
	if(n<4){
		return -1;
	}
	int num = n%4;
	if(num==0){
		return n/4;
	}
	if(num==1){
		if(n<9){
			return -1;
		}
		return (n-9)/4 + 1;
	}
	if(num==2){
		return (n-6)/4 +1;
	}
	if(num==3){
		if(n<15){
			return -1;
		}
		return (n-15)/4 + 1;
	}

}

int main(){
	int n;
	cin>>n;
	cout<<splitNIntoMaxCompNums(n);
}	
