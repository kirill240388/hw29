#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double proizv, proizv1, proizv2, proizv3, proizv4;
	proizv1 = 1;
	proizv2 = 1;
	proizv3 = 1;
	for (int i = 1;i <= n;i++)
	{
		if (i % 2 != 0)
		{
			proizv1 *= i;
		}
		if (i % 2 == 0)
		{
			proizv2 *= i;
		}
		proizv = proizv1 / proizv2;
		if (i <= n / 2)
		{
			proizv3 *= i;
		}
		
		
		proizv4 = proizv1 / proizv3;
		
	}
	cout << proizv << endl;//117 a)
	cout << proizv4 << endl;// 117 á)
}