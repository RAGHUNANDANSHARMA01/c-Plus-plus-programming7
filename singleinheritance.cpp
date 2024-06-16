#include<iostream>
using namespace std;
class get
{
    public:
    int a,b;
    void getA()
    {
        cout<<"enter the 1st number:";
        cin>>a;
    }
    void getB()
    {
        cout<<"enter the 2nd number:";
        cin>>b;
    }
};
class sumsq:public get
{
    public:
    int s;
    void sum()
    {
        s=a+b;
    }
    int sq()
    {
        sum();
        return s*s;
    }
};
int main()
{
    sumsq obj;
    obj.getA();
    obj.getB();
    cout<<"square of the sum 2 number="<<obj.sq();
    return 0;
}