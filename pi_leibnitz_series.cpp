// obtaining the value of PI using leibnitz's series

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n; // variable to store number of iterations (n)
	double pi=0;  // variable to store the approximate value of pi

	cout<<"Enter the number of iterations (n) : ";
	cin>>n;

	// calcualtion of the approximate value of pi 

	for(int i=1;i<=n;i++)
	{
		pi+=pow(-1,i+1)*(4.0/(2*i-1));
	}
	
	cout<<"The approximate value of PI using leibnitz's series is : "<<pi<<endl;
	return 0;
}