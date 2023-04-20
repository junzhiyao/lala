#include<iostream>
using namespace std;
class age{
	public:
		age(int m)
		{
			n=m;
		}
		void Print()
		{
			if(n>=1 && n<=10)
			{
				cout<<"Children";
			}
			else if(n>=11 && n<=20)
			{
				cout<<"Teenagers";
			}
			else if(n>=21 && n<=40)
			{
				cout<<"Youth";
			}
			else if(n>=41 && n<=50)
			{
				cout<<"Middle-aged";
			}
			else if(n>=51 && n<=80)
			{
				cout<<"Eiderly";
			}
			else
			{
				cout<<"Old man";
			}
		}
		private:
			int n;
};
int main()
{
	int n;
	cin>>n;
	age d(n);
	d.Print();
	return 0;
}
