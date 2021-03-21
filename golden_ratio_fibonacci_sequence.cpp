// obtaining the approximate value of golden ratio 
// by using the Fibonacci sequence

#include<iostream>
using namespace std;

int main()
{
	int n; // variable to store number of iterations (n)

	cout<<"Enter the number of iterations (n) : ";
	cin>>n;

	double first_term=1;
	double second_term=1;
	double third_term;
	double fibonacci[n];

	fibonacci[0]=first_term;
	fibonacci[1]=second_term;

	double golden_ratio;

	// obtaining the terms of fibonacci series

	for(int i=3;i<=n;i++)
	{
		third_term=first_term+second_term;
		first_term=second_term;
		second_term=third_term;
		fibonacci[i-1]=third_term;
	}

	golden_ratio=(double)fibonacci[n-1]/fibonacci[n-2];

	cout<<"The approximate value of GOLDEN RATIO is : "<<golden_ratio<<endl;
	return 0;
}