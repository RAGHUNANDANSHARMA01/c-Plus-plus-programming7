#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n,s;
    cout<<"enter the n number:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}