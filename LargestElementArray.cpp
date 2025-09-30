#include<bits/stdc++.h>
using namespace std;

// By using the Built in Functions 


int LargestElement(int arr[], int n){
	sort(arr,arr+n);
	
	return arr[n-1];
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<LargestElement(arr,n);
	return 0;
	
}
