#include<iostream>
class animal 
{
	public:
		void main()
		{
			cout<<"eating";
		}
	};
	class dog:public animal
	{
		public:
			void eat()
			{
				cout<<"eating bread";
			}
		};
		void main()
		{
			dog g;
			g.eat();
}
