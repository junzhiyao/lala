#include <iostream>
using namespace std;
class ba{
	public:
		ba()
		{
		}
		int Gety(int m)
		{
			j=m;
			return j;
		}
		void bian(int x)
		{
		int i=0;
		while(x!=0)
		{
			
           p1[i]=x%j;
			x/=j;
			y=i+1;
			i++;
		}	
		}
		void Print()
		{	
		for(int i=y;i>=0;i--)
		{
			if(p1[i]==0)
			{
				p2[i]='0';
			}
			if(p1[i]==1)
			{
				p2[i]='1';
			}
			if(p1[i]==2)
			{
				p2[i]='2';
			}
			if(p1[i]==3)
			{
				p2[i]='3';
			}
			if(p1[i]==4)
			{
				p2[i]='4';
			}
			if(p1[i]==5)
			{
				p2[i]='5';
			}
			if(p1[i]==6)
			{
				p2[i]='6';
			}
			if(p1[i]==7)
			{
				p2[i]='7';
			}
			if(p1[i]==8)
			{
				p2[i]='8';
			}
			if(p1[i]==9)
			{
				p2[i]='9';
			}
			if(p1[i]==10)
			{
				p2[i]='A';
			}
			if(p1[i]==11)
			{
				p2[i]='B';
			}
	    	if(p1[i]==12)
	        {
			    p2[i]='C';
			}
			if(p1[i]==13)
			{
				p2[i]='D';
			}
			if(p1[i]==14)
			{
				p2[i]='E';
			}
			if(p1[i]==15)
			{
				p2[i]='F';
			}							
		}
		for(int i=y;i>=0;i--)
		{
			cout<<p2[i];
		}	
		}
	private:
		int j;
	    int x,y=0;
		int  p1[10]={0};
		char p2[10]={'0'};
};
int main()
{
   int n,m;
    cin>>n;
    cin>>m;
    ba d1;
    d1.Gety(m);
    d1.bian(n);
    d1.Print();
	return 0;
}
