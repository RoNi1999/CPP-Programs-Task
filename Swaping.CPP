#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter Two Number = ";
	cin>>a>>b;
	cout<<"Before Swapping "<<endl;
	cout<<"a = "<<a<<",b = "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swapping"<<endl;
	cout<<"a = "<<a<<",b = "<<b<<endl;
	return 0;
}
