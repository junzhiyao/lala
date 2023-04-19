#include <iostream>
using namespace std;
#include <stdio.h>
class shijian{
	public:
		shijian(){}
		void jisuan(int b)
		{
			bjt=b;
		if(bjt/100>=24||bjt%100>=60)
		{
					cout<<"error"<<endl;
		}
			int a,c;
			a=bjt/100-8;
			if(a>=0)
			{
				utc=bjt%100+a*100;
			}
			else
			{
				c=24-(8-bjt/100);
				utc=c*100+bjt%100;
			}
			cout<<utc;	
		}
	private:
		int bjt;
		int utc;
		
};
int main()
{
	int b;
	cin>>b;
	shijian d;
	d.jisuan(b);
	return 0;
}

