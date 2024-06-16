#include<iostream>
using namespace std;
class calculation
{
    int x,y,plus,subtract,multi;
    float divi;
    public:
    void getvalue();
    void addition();
    void subtraction();
    void multiplication();
    void division();
};
inline void calculation:: getvalue()
{
    cout<<"enter first value:";
    cin>>x;
    cout<<"enter second value:";
    cin>>y;
}
inline void calculation::addition()
{
    plus=x+y;
    cout<<"addition of two number:"<<x+y<<"\n";
}
inline void calculation:: subtraction()
{
    subtract=x-y;
    cout<<"difference two number:"<<x-y<<"\n";
}
inline void calculation :: multiplication()
{
multi=x*y;
cout<<"product of two number:"<<x*y<<"\n";
}
inline void calculation::division()
{
    divi=x/y;
    cout<<"division of two number:"<<x/y<<"\n";
}
int main()
{
    cout<<"program inline function\n";calculation m;
    m.getvalue();
    m.addition();
    m.subtraction();
    m.multiplication();
    m.division();
    return 0;
}