#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int number;
	cout<<"enter the number:";
	cin>>number;
	do
	{
		sum+=number;
		cout<<"enter the number:";
		cin>>number;
	}
	while(number>=0);
	cout<<"the sum is:"<<sum<<endl;
	return 0;
}
