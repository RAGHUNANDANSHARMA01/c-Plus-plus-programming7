#include<iostream>
using namespace std;
const int max=3
void main()
{
	int var[max]={100,200,300};
	int*ptr;
	ptr=var;
	for(i=0;i<max;i++)
	{
		cout<<"address";
		cout<<ptr;
		cout<<"value 1";
		cout<<*ptr;
		ptr++;
	}
	getch();

}

#include<iostream>
using namespace std;
const int max=3
void main()
{
	int var[max]={100,200,300}
	int *ptr;
	ptr=&var[max-1];
	fot(int i=max;i>0;i--)
	cout<<"address";
	cout<<ptr;
	cout<<"value 1";
	cout<<*ptr;
	ptr--;
}
getch();
}
