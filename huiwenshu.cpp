#include <iostream>
using namespace std;
class huiwen{
	public:
		huiwen(){}
		int GetN(int n)
		{
			N=n;
			return N;
		}
		int Getm(int x)
		{
			m=x;
			return m;
		}
		int Getk(int y)
		{
			k=y;
			return k;
		}
		void jisuan(int x,int y,int z)
		{
			N=x;
			m=y;
			k=z;
		for(int l=0;l<N;l++)
			{
		   for(num=m+1;num>m;num++)
		  {
			int i=num,j=0;
			while(num>0)
			{
			j=j*10+num%10;
			num/=10;	
			}
			num=i;	
			if(j==i)
			{
				p[a]=j;
				a++;
			}	
			if(a==k)
			{
				break;
			}
		}
		for(int i=0;i<k;i++)
		{
			cout<<p[i]<<" ";
		}
		}	
		}
		private:
			int N,m,k;
			int p[10];
			int num=0;
			int a=0;
		
}; 
int main()
{
	int N,m,k;
	cin>>N>>m>>k;
	huiwen d1;
	d1.GetN(N);
	d1.Getm(m);
	d1.Getk(k);
	d1.jisuan(N,m,k);
	return 0;
}
