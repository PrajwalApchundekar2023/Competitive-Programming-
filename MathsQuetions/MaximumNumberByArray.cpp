#include<iostream.h>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

/*

Given an array, the task is to find the maximum and the minimum 
element of the array using the minimum number of comparisons.

Test Cases -
 
2 Test case and Corner test case is not availbale 


Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
        Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
         Maximum element is: 35



*/


// Algorithm 1 -- Which can be follow for the Sorting Function and self built in function 



int Max_Min_Number(int arr[], int n ){

	sort(arr,arr+n);
	cout<<"Minimum Element :"<<arr[0]<<endl;
	cout<<"Maximum element :"<<arr[n-1]<<endl;
}

int main(){
	int arr[]= {3, 5, 4, 1, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	Max_Min_Number(arr,n);

	return 0;

}


// Algorithm 2 -- Without Sorting function 
/*

Create 2 functions 

	1 - SetMax Value (INTMAX)
	
		--> Itrate the loop for find the MAX value 

				int min = INTMAX

				for (int i = 0; i < N ; i++)
				{
						if( arr[i] < min ){
							min = arr[i];
							braek;
						}
				}

		return min;
	
	
	2 - SetMin value (INTMIN)





*/































