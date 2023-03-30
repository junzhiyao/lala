#include <iostream>
using namespace std;
int main()
{
            int k;
			cin>>k;
			int a,b,c;
			a=k%10;
			b=k/10;
			c=b;
			b=b%10;
			c/=10;
	    int he=a+b;
	    he=he+c;
	    cout<<he<<endl;
	return 0;
}
