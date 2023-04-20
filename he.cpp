#include<iostream>
using namespace std;
class he{
	public:
		he(int m)
		{
			n=m;
		}
		void Print()
		{
			a=n%10;
			b=n/10;
			c=b;
			b=b%10;
			c/=10;
			h=a+b;
			h+=c;
			cout<<h;	
		}
		private:
			int a,b,c;
			int n;
			int h;
};
int main()
{
	int n;
	cin>>n;
	he d(n);
	d.Print();
	return 0;
}
