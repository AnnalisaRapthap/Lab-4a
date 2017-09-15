#include <iostream>
#include <cmath>
using namespace std;


int armstrong(int num1, int num2)
{ 
  int tnum,sum,rem;
  int i=num1;
  while(i<=num2)
  {
  tnum=i;
  sum=0;
     while(tnum != 0)
     {
        rem = tnum % 10;
        sum = sum+(rem*rem*rem);
        tnum /= 10;
     }
    if(sum == i)
    cout<<"\n"<<i<< " is an Armstrong number.";
    i++;
   }
   return 0;
}


int main()
{
  int num1=0,num2=0;
  cout<<"\nEnter the lower and upper limit: ";
  cin>>num1;
  cin>>num2;
  int a=armstrong(num1,num2);
  return a;
}
