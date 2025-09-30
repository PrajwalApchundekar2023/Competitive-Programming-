// Algorithm 2 -- Without Sorting function 

// 	Maximum and minimum of an array 


/*

Create 2 functions 

	1 - SetMax Value (INTMIN)
	
		--> Itrate the loop for find the MAX value 

				int max = INTMIN

				for (int i = 0; i < N ; i++)
				{
						if( arr[i] > max ){
							max = arr[i];
						}
				}

		return max;
	

	2 - SetMin value (INTMAX)

		--> Itrate loop for the find MIN value 

				int min = INTMAX

				for (int i = 0; i< N ; i++){
				
					if(arr[i] < min){
							min = arr[i];
					}

				}
			return min

*/


#include <iostream.h>
#include <algorithm.h>
#include <limits.h>

using namespace std;

int MaxNumberArray(int arr[], int N){
	
	int max = INTMIN;

				for (int i = 0; i < N ; i++)
				{
						if( arr[i] > max ){
							max = arr[i];
						}
				}

		return max;

}

int MinNumberArray(int arr[], int N){


}


int main()
{
	
	int arr[]={23,2,12,21,22,54,65,3,3,4,5,66};
	int N= sizeof(arr)/sizeof(arr[0]);

	cout<<"The Maximmum value of array is :"<<MaxNumberArray(arr,N)<<endl;
	cout<<"The Minimum Value of array is :"<<MinNumberArray(arr,N)<<endl;

	return 0;
}




























