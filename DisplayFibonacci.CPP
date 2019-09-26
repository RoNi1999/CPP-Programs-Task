#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nt=0;
    cout<<"Enter the Number Of trems : ";
    cin>>n;
    cout<<"Fibonacci Series : ";

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (i == 1)
        {
            /* code */
            cout<<" "<<t1;
            continue;
        }
        if(i ==2)
        {
            cout<<t2<<" ";
            continue;
        }
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;

        cout<<nt<<" ";
        
    }
    return 0;
}