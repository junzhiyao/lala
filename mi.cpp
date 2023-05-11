#include <iostream>
using namespace std;
class mi{
	public:
		mi(){}
		void Print(int x,int y)
		{
			a=x;
			b=y;
			for(int i=1;i<=b;i++)
			{
			num=num*a;	
			}
			cout<<num;
		}
	private:
	    int a,b;
		int num=1;	
};
int main()
{
	int a,b;
	cin>>a>>b;
	mi d;
	d.Print(a,b);
	return 0;
}
