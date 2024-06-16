#include<iostream>
using namespace std;
int main()
{
    int i,j,row,cols;
    cout<<"enter the number or row and cols:";
    cin>>row>>cols;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=cols;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    }