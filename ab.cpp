#include <iostream>
using namespace std;
class ba{
	public:
		ba()
		{
		}
		int Getb(int b)
		{
			j=b;
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
			cout<<p1[i];
		}	
		}
	private:
		int j;
	    int x,y=0;
		int p1[100]={0};
};
int main()
{
   int a,b;
    cin>>a>>b;
    ba d1;
    d1.Getb(b);
    d1.bian(a);
    d1.Print();
	return 0;
}
