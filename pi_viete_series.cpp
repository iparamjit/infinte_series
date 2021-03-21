// obtaining the value of PI using viete's series

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n; // variable to store number of iterations (n)
	double value,product=1;
	double pi;  // variable to store the approximate value of pi

	cout<<"Enter the number of iterations (n) : ";
	cin>>n;

	// calcualtion of the approximate value of pi 

	for(int i=1;i<=n;i++)
	{
		value=0;
		for(int j=1;j<=i;j++)
		{
			value=2+sqrt(value);
		}
		value=sqrt(value)/(2);
		product*=value;
	}

	pi=2/(product);

	cout<<"The approximate value of PI using viete's series is : "<<pi<<endl;
	return 0;
}