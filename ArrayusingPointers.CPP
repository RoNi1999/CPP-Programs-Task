#include<iostream>
using namespace std;
 int main()
 {
     int data[5];
     cout<<"Enter Element : ";

     for (int i = 0; i < 5; i++)
     {
        cin>>data[i];
     }
     cout<<"YOu Rntered : ";
     for (int i = 0; i < 5; i++)
     {
        cout<<endl<<*(data + i);
     }

     return 0;
 }