#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,row;
    cout<<"enter the number of row:";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
            cout<<k++<<" ";
            cout<<"\n";
    }
    return 0;
}
