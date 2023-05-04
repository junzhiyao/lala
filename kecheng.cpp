#include <iostream>
using namespace std;
class keng{
	public:
		keng(int x,int y)
		{
			n=x;
			k=y;
		}
		void Get()
		{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		j=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>=0)
			{
				j++;
			}
		}
		if(j>k)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		}
	private:
		int n;
		int k;
		int j=0;
		
};
int main()
{
	int n,k;
	cin>>n>>k;
    keng d(n,k);
    d.Get();
	return 0;
}
