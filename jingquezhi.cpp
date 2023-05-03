#include <iostream>
using namespace std;
class jingquezhi{
	public:
		jingquezhi()
		{
		}
		void jisuan(int x,int y)
		{
			a=x;
			b=y;
			int i=0;
			int e[200]={0};
			while(a!=0&& i<200)
			{
			c=a*10;
			e[i]=c/b;
			i++;
			a=c%b;	
			}
			cout<<"0"<<".";
			for(int j=0;j<200;j++)
			{
				cout<<e[j];
			}	
		}
	private:
	    int a,b;
		int c=0;
};
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	jingquezhi d;
	d.jisuan(a,b);
	return 0;
}
