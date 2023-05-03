#include <iostream>
using namespace std;
class zui{
	public:
		zui(int x,int y)
		{
		a=x;
		b=y;	
		}
		int zuida(int x,int y)
		{
			int c=0;
			while(y>0)
			{
		    c=x%y;
			x=y;
			y=c;
			}	
			return x;
		}
		int zuixiao(int x,int y)
		{
			int m=0;
			if(zuida(x,y)==1)
			{
				m=x*y;
				return m;
			}
			else
			{
				m=x*y;
				m=m/zuida(x,y);
				return m;
			}
		}
		void Print()
		{
			cout<<zuida(a,b)<<endl;
			cout<<zuixiao(a,b);
		}
	private:
	int a,b;		
};
int main()
{
	int a,b;
	cin>>a>>b;
	zui d(a,b);
	d.Print();
	return 0;
}
