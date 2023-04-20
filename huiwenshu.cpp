#include <iostream>
using namespace std;
class huiwen{
	public:
		huiwen(){}
		void jisuan(int y,int z)
		{
			m=y;
			k=z;
		   for(num=m+1;num>m;num++)
		  {
			int i=num,j=0;
			while(i>0)
			{
			j=j*10+i%10;
			i/=10;	
			}
			if(j==num)
						
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
		private:
			int m,k;
			int p[10];
			int num=0;
			int a=0;
		
}; 
int main()
{
	int N,m,k;
	cin>>N;
	for(int i=0;i<N;i++)
	{
	huiwen d1;
	cin>>m>>k;
	d1.jisuan(m,k);
	}
	return 0;
}
