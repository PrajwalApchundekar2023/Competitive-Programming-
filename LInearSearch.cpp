#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[],int n,int k){
	for(int i=0;i<=n;i++){
		if(arr[i]==k){
				cout<<i;	
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={23,2,3,14,55};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k;
	cin>>k;
	LinearSearch(arr,n,k);
	
	return 0;
}