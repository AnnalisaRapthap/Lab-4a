#include<iostream>
using namespace std;
void checkprime(int a,int b)
{
	int i,j,c=0;
	//prime number
	for(i=a;i<=b;i++)
	{   
		c=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		c++;
	            }
	if(c==2)
	cout << i << endl;
	
	}
	
}
#include<iostream>
using namespace std;

int main()
{
	int m,n,c;
	cout << "Enter the lower and upper intervals:" << endl;
	cin >> m;
	cin >> n;
	checkprime(m,n);
              	
}
