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
			cout<<"num1"<<"+"<<num2<<"="<<add()<<endl;
			cout<<"num1"<<"-"<<num2<<"="<<sub()<<endl;
			cout<<"num1"<<"*"<<num2<<"="<<mult()<<endl;
			cout<<"num1"<<"/"<<num2<<"="<<divi()<<endl;
			}
			T add()
			{
				return num1+num2;
			}
			T sub()
			{
				return num1-num2;
			}
			T mult()
			{
				return num1*num2;
			}
			T divi()
			{
				return num1/num2;
			};
			int main()
			{
				calculator<int>intcalc(2,1);
				calculator<float>floatcalc(2.2,5.4);
				cout<<"int result:"<<endl;
				intcalc.displayresult();
				cout<<endl;
				cout<<"floatresult:"<<endl;
				floatcalc.displayresult();
				return 0;
}
