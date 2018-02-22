#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int dk= 1;
	double k = 0;
	int n; 
	double tmp;
	cout<<"The Big Ass Number Test"<<endl<<endl;
	cout<<"Enter a the range: ";
	cin>>n;

	if(n <= 99999999)
	{
		cout<<"w: 0.";
		for(int i = 1; i < n; i++)
		{
			cout<<i;
		}
		cout<<endl<<endl;
		cout<<setprecision(n);
		cout<<"calculated: ";

		for(int i = 1; i < n; i++)
		{
			if(i >= 1 and i <= 9)
				dk = 1;
			if(i >=10 and i <=99)
				dk = 2;
			if(i >= 100 and i <= 999)
				dk = 3;
			if(i >=1000 and i <= 9999)
				dk = 4;
			if(i >= 10000 and i <= 99999)
				dk = 5;
			if(i >= 100000 and i <= 999999)
				dk = 6;
			if(i >= 1000000 and i <= 9999999)
				dk = 7;
			if(i >= 10000000 and i <= 99999999)
				dk = 8;
			
			tmp = pow(10, i + dk - 1);
			tmp = 1/ tmp;
			k = (i * tmp) + k;
		}

		cout<<k<<endl<<endl;
	}

	else
	{
		cout<<"range to0 big"<<endl;
	}
	return 0;
}