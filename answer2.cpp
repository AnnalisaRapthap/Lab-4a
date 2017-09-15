int diameter(int r)
{
	int d;
	d=2*r;
	return d;
}
int circumference(int r)
{
	int c;
	c=2*3.14*r;
	return c;
}
int area(int r)
{
	int a;
	a=3.14*r*r;
	return a;
}
#include<iostream>
using namespace std;

int main()
{
	int radius, dia,cir,ar;
	cout << "Enter the radius of the circle ";
	cin >> radius;
	dia=diameter(radius);
	cir=circumference(radius);
	ar=area(radius);
	cout << "Diameter=" << dia << endl << "circumference=" << cir << endl << "Area=" << ar << endl;
}
