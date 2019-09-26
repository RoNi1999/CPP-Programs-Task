#include<iostream>
using namespace std;
int add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
int divide(int a, int b);
main()
{
	int a=0,b=0,choice=0;
	cout<<"Pick an Option : \n1. Add\n2. Subtract\n3. Multiply\4. Divide\n5. Quit\nYour Choice : ";
	cin>>choice;
	cout<<"\nEnter the Two Numbers : \n";
	cin>>a>>b;
	switch(choice)
	{
		case 1:cout<<"The Addition is : "<<add(a,b);
				break;
		case 2:cout<<"The Subtraction is : "<<Subtract(a,b);
				break;
		case 3:cout<<"The Multiplication is : "<<Multiply(a,b);
				break;
		case 4:cout<<"The Division is : "<<divide(a,b);	
				break;
		case 5: exit(0);
				break;
		default : cout <<"Invalid choice";
	}
}
int add(int a, int b)
{
	return(a+b);
}
int Subtract(int a, int b)
{
	return(a-b);
}
int Multiply(int a, int b)
{
	return(a*b);
}
int divide(int a, int b)
{
	return(a/b);
}
