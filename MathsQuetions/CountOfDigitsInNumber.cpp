
// Count digits in a number

// Problem Statement: Given an integer N, return the number of digits in N.

/*

Test Cases :

  Input:
  N = 12345
               
  Output:5

  Input:
  N = 12345
               
  Output:5
            
Brute Force Approach : 

1 - Initialize count is 0 
2 - check loop until number is 0 
	while(N > 0)
3 - then increment count by one 
4 - and devide the number by /10 becuase to reduce one digit rvery loop 
5 - return count

*/

#include <iostream>

using namespace std;

int CountDigit(int N){

	int count = 0;

	while( N > 0 ){

		count = count +1;

		N = N / 10 ;
	}
	return count;
}

int main()
{
	
	int N = 12345;

	cout<<"The Digits Of Number: "<<CountDigit(N);
	return 0;

}



