int cube(int a)
{
	int c;
	c=a*a*a;
	return c;
}
#include<iostream>
using namespace std;

int main()
{
	int num, z;
	cout << "Enter a number ";
	cin >> num;
	z=cube(num);
	cout << z;
}
