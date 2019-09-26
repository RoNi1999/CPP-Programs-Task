#include<iostream>
using namespace std;

int main()
{
    int origNum,num,rem,sum=0;
    cout<<"Enter a Positive Integer : ";
    cin>>origNum;
    num = origNum;
    while (num!=0)
    {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if (sum == origNum)
    {
        cout<<origNum<<" is an Armstrong Number.";
    }
    else
    {
        cout<<origNum<<" is not an Armstrong Number.";
    }
    return 0;
}