#include<iostream>
using namespace std;
class chengji{
	public:
	chengji(int m)
	{
		n=m;
	}
	void Print()
	{
	if(n>=90)
	{
		cout<<"A";
	}	
	 else if(n>=80 && n<90)
	{
		cout<<"B";
	}
	else if(n>=70 && n<80)
	{
		cout<<"C";
	}
	else if(n>=60 && n<70)
	{
		cout<<"D";
	}
	else
	{
		cout<<"E";
	}
	}
	private:
		int n;
};
int main()
{
	int n;
	cin>>n;
	chengji d(n);
	d.Print();
	return 0;
}
