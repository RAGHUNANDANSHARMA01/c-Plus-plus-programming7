#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{7,0,5},{0,9,8},{7,4,5}};
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}