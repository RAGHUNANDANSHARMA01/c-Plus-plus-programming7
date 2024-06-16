#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"the value of x:"<<x<<endl;
	cout<<"the value of y:"<<y<<endl;
}
int main()
{
	int x=200,y=300;
	swap(x,y);
	return 0;
}
