#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	int x=44,y=22;
	swap(&x,&y);
	cout<<"the value of x:"<<x<<endl;
	cout<<"the value of y:"<<y<<endl;
	return 0;
}
