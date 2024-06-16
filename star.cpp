#include<iostream>
using namespace std;
int main()
{
    int row,j,i,k=1;
    cout<<"enter the number of row:";
    cin>>row;
    for(i=1;i<=row;++i)
    {
        for(j=1;j<=i;++j)
        cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}