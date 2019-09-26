#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,x1,x2,d,e,f;
	cout<<"Enter Cofficient a,b and c :";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
		x1 = (-b + sqrt(d))/2*a;
		x2 = (-b - sqrt(d))/2*a;
		cout<<"Root are Real and Different"<<endl;
		cout<<"x1= "<<x1<<endl;
		cout<<"x2= "<<x2<<endl;
	}
	else if(d==0)
	{
		cout<<"Root are Real and Same "<<endl;
		x1=(-b+sqrt(d))/2*a;
		cout<<"x1 = x2 = "<<x1<<endl;
	}
	else
	{
		e=-b/2*a;
		f=sqrt(-d)/2*a;
		cout<<"Root are Complex and Diffrent "<<endl;
		cout<<"x1 = "<<e<<"+"<<f<<"i"<<endl;
		cout<<"x2 = "<<e<<"-"<<f<<"i"<<endl;
	}
	return 0;
}
