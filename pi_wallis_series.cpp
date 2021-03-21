// obtaining the value of PI using wallis's series

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n; // variable to store number of iterations (n)
	double pi=1;  // variable to store the approximate value of pi

	cout<<"Enter the number of iterations (n) : ";
	cin>>n;

	// calcualtion of the approximate value of pi 

	for(int i=2;i<=(2*n);i=i+2)
	{
		pi*=pow(i,2)/((i-1)*(i+1));
	}
	
	pi=2*(pi);

	cout<<"The approximate value of PI using wallis's series is : "<<pi<<endl;
	return 0;
}