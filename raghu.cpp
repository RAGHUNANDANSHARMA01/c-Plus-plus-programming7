#include<iostream>
using namespace std;
template <class T>
class calculator
{
	private:
		T num1,num2;
	public:
		calculator(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
			void displayresult()
			{
				cout<<"number:"<<num1<<"and"<<num2<<"."<<endl;
				cout<<num1<<"+"<<num2<<"="<<add()<<endl;
				cout<<num1<<"-"<<num2<<"="<<sub()<<endl;
				cout<<num1<<"*"<<num2<<"="<<mul()<<endl;
				cout<<num1<<"/"<<num2<<"="<<div()<<endl;
			}
			T add()
			{
				return num1+num2;
			}
			T sub()
			{
				return num1-num2;
			}
			T mul()
			{
				return num1*num2;
			}
			T div()
			{
				return num1/num2;
			}
			};
			int main()
			{
				calculator<int>intcalc(2,1);
				calculator<float>floatcalc(2.4,1.2);
				cout<<"int result:"<<endl;
				intcalc.displayresult();
				cout<<endl;
				cout<<"float result:"<<endl;
				floatcalc.displayresult();
			return 0;
}
