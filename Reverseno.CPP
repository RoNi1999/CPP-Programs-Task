#include<iostream>
using namespace std;

int main()
{
    int n,rn=0,reminder;
    cout<<"Enter an Integer : ";
    cin>>n;
    while (n!=0)
    {
        reminder = n%10;
        rn=rn*10+reminder;
        n/=10;
    }
    cout<<"Reverse Number = "<<rn;
    return 0;    
}