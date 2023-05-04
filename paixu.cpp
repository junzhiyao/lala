#include <iostream>
using namespace std;
class paixu{
	public:
		paixu()
		{
		
		}
		void sort(int num[],int n)
		{
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=1;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(num[j]>num[j+1])
				{
					int t=num[j];
					num[j]=num[j+1];
					num[j+1]=t;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<num[i];
		}	
		}
	private:
		int n;
		
};
int main()
{
	int n;
	cin>>n;
	int num[100];
	paixu d;
	d.sort(num,n);
	return 0;
}
