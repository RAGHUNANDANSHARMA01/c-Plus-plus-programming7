#include<iostream>
using namespace std;
int main()
{
    int rev,digit=0,num,n;
    cout<<"enter the positive number";
    cin>>num;
    n=num;
    do
    {
    digit=number%10;
    rev=(rev*10)+digit;
    } while (num!=0);
    cout<<"the reverse number is" <<rev<<endl;
    if(num==rev)
    cout<<"the number is palindrome";
    else
    cout<<"the number is palindrome";
    return 0;
}