#include<iostream>
using namespace std;
class jijie{
	public:
		jijie(int m)
		{
			n=m;
		}
		void Print()
		{
			if(n==1)
			{
				cout<<"Spring";
			}
			if(n==2)
			{
				cout<<"Summer";
			}
			if(n==3)
			{
				cout<<"Fall";
			}
			if(n==4)
			{
				cout<<"Winter";
			}
		}
		private:
			int n;
			
};
int main()
{
	int n;
	cin>>n;
	jijie d(n);
	d.Print();
	return 0;
}
