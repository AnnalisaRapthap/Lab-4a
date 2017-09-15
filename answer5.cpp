#include<iostream>
using namespace std;
void checkprime(int a)
{
	int i,c=0;
	//prime number
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(i==2)
	cout << "The number is a prime number" << endl;
	else
	cout << "The number is not a prime number" << endl;
}
#include<iostream>
using namespace std;
void checkArm(int a)
{
	int i,rem,sum=0;
	i=a;
	while(i!=0)
	{
		rem=i%10;
		sum=sum+(rem*rem*rem);
		i=i/10;
	}
	if(sum==a)
	cout << "The number is an armstrong number" << endl;
	else
	cout << "The number is not an armstrong number" << endl;
	
}
#include<iostream>
using namespace std;
void checkperfect(int a)
{
	int i,sum=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
		sum=sum+i;
		}
	}
	if(sum==a)
	cout << "The number is a perfect number";
	else
	cout << "The number is not a perfect number";
	
}

#include<iostream>
using namespace std;

int main()
{
	int i;
	cout << "Enter the number:" << endl;
	cin >> i;
	checkprime(i);
	checkArm(i);
	checkperfect(i);
	
}
