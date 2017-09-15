int check(int a)
{
	int r;
	if(a%2==0)
	r=0;
	else if(a%2!=0)
	r=1;
	return r;
}

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout << "Enter the number:" << endl;
	cin >> i;
	j=check(i);
	if(j==0)
	cout << "The number is even";
	else if(j==1)
	cout << "The number is odd";
	
}
