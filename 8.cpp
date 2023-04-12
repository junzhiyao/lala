#include <iostream>
using namespace std;
class ba{
	public:
		ba()
		{
		}
		void bian(int x)
		{
		int i=0;
		while(x!=0)
		{
            p1[i]=x%8;
			x/=8;
			y=i+1;
			i++;
		}	
		}
		void Print()
		{	
		for(int i=y;i>=0;i--)
		{
			cout<<p1[i];
		}	
		}
	private:
	    int x,y=0;
		int p1[10]={0};
};
int main()
{
   int n;
    cin>>n;
    ba d1;
    d1.bian(n);
    d1.Print();
	return 0;
}
