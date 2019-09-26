#include<iostream>
using namespace std;

int main()
{
    int r,c,a[100][100], b[100][100], sum[100][100],i,j;
    cout<<"Enter Numbers of rows(between 1 and 100):  ";
    cin>>r;

    cout<<"Enter Numbers of columns(between 1 and 100):  ";
    cin>>c;

    cout<<endl<<"Enter Element of 1st Matrix : "<<endl;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
        cout<<"Enter Element a"<<i+1<<j+1<<": ";
        cin>>a[i][j];
        }

    cout<<endl<<"Enter Element of 2nd Matrix : "<<endl;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
        cout<<"Enter Element b "<<i+1<<j+1<<": ";
        cin>>b[i][j];
        }

    for ( i = 0; i < r; i++)
        for (j = 0; j < c; j++)
                  sum[i][j]= a[i][j]+b[i][j];

    cout<<endl<<"Sum of Two Matrix is : "<<endl;

    for ( i = 0; i < r; i++)
        for ( j = 0; j < c; j++)
        {
            cout<<sum[i][j]<<" ";
            if (j == c-1)
                cout<<endl;
        }

    return 0;
}