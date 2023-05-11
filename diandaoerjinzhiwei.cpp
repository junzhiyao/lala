#include<iostream>
using namespace std;
class er{
	public:
		er(){}
		void Print(char a[],int n)
		{
			b=n;
			for(int i=b-1;i>=0;i--)
			{
				cout<<a[i];
			}
		}
	private:
		int b=0;
};
int main()
{
	char a[32];
	int b=32;
	for(int i=0;i<32;i++)
	{
		cin>>a[i];
	}
	er d;
	d.Print(a,b);
	return 0;
}
