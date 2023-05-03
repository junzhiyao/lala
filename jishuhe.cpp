#include <iostream>
#include <stdio.h>
using namespace std;
class jishuhe{
	public:
		jishuhe(int b[],int m)
		{
			n=m;
		for(int i=0;i<m;i++)
		{
			a[i]=b[i];
		}	
		}
		int even(int x)
		{
			if(x%2!=0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	    void Print()
	    {
		for(int j=0;j<n;j++)
		{
			if(a[j]>=0)
			{
			if(even(a[j])==0)
			{
				c=c+a[j];
			}
			}
		}
		cout<<c;	
		}
	private:
		int a[15];
		int n=0;
		int c=0;
};
int main()
{
	int a[15];
	int i=0;
	int m=0;
	for(i=0;i<15;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			m++;
		}
		else
		{
			break;
		}
	}
	jishuhe d(a,m);
	d.Print();
	return 0;
}
