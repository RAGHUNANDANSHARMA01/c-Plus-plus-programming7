#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
    }