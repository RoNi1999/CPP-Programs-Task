#include<iostream>
using namespace std;

void enterData(int firstMatrix[][10],int secondMatrix[][10],int rowFirst,int columnFirst,int rowSecond,int columnSecond);
void multiplyMatrices(int firstMatrix[][10],int secondMatrix[][10],int multResult[][10],int rowFirst,int columnFirst,int rowSecond,int columnSecond);
void display(int mult[][10],int rowFirst,int columnSecond);

int main()
{
    int firstMatrix[10][10],secondMatrix[10][10],mult[10][10],rowFirst,columnFirst,rowSecond,columnSecond,i,j,k;

    cout<<"Enter Rows and Columns for 1st Matrix : ";
    cin>>rowFirst>>columnFirst;

    cout<<"Enter Rows and Coloums for 2nd Matrix : ";
    cin>>rowSecond>>columnSecond;

    while (columnFirst != rowSecond)
    {
        cout<<"Enter! Column of 1st Matrix not equal to Row of 2nd."<<endl;
        cout<<"Enter Rows and Column for 1st Matrix : ";
        cin>>rowFirst>>columnFirst;
        cout<<"Enter Rows and Coloumns for 2nd Matrix : ";
        cin>>rowSecond>>columnSecond;
    }

    enterData(firstMatrix,secondMatrix,rowFirst,columnFirst,rowSecond,columnSecond);

    multiplyMatrices(firstMatrix,secondMatrix,mult,rowFirst,columnFirst,rowSecond,columnSecond);

    display(mult,rowFirst,columnSecond);

    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10],int rowFirst,int columnFirst, int rowSecond, int columnSecond)
{
    int i,j;
    cout<<endl<<"Enter Element of Matrix 1 : "<<endl;
    for ( i = 0; i < rowFirst; i++)
    {
        for ( j = 0; j < columnFirst; j++)
        {
            cout<<"Enter Element a "<<i+1<<j+1<<": ";
            cin>>firstMatrix[i][j];
        }
    }

    cout<<endl<<"Enter Element of Matrix 2 : "<<endl;
    for ( i = 0; i < rowSecond; i++)
    {
        for (j = 0; j < columnSecond; j++)
        {
            cout<<"Enter Element b "<<i+1<<j+1<<": ";
            cin>>secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[][10],int secondMatrix[][10],int mult[][10],int rowFirst,int columnFirst,int rowSecond,int columnSecond)
{
    int i,j,k;

    for ( i = 0; i < rowFirst; i++)
    {
        for (j = 0;j < columnSecond;j++)
        {
            mult[i][j] = 0;
        }
    }

    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < columnSecond; j++)
        {
            for (k = 0; k < columnFirst; k++)
            {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10],int rowFirst,int columnSecond)
{
    int i,j;

    cout<<"Output Matrix : "<<endl;
    for (i = 0; i < rowFirst; i++)
    {
        for (j = 0; j < columnSecond; j++)
        {
            cout<<mult[i][j]<<" ";
            if (j == columnSecond-1)
                cout<<endl<<endl;
        }
    }
}