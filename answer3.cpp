int maximum(int a,int b)
{
	int max;
	if(a>b)
	max=a;
	else if(b>a)
	max=b;
	return max;
}
int minimum(int a, int b)
{
	int min;
	if(a<b)
	min=a;
	else if(b<a)
	min=b;
	return min;
}

#include<iostream>
using namespace std;

int main()
{
	int i,j,big,small;
	cout << "Enter two numbers:" << endl;
	cin >> i;
	cin >> j;
	big=maximum(i,j);
	small=minimum(i,j);
	cout << "The Maximum=" << big << endl << "The Minimum=" << small;
}
