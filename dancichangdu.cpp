#include <iostream>
#include <string.h>
using namespace std;
class danci{
	public:
		danci(){}
		void Print(char arr[],int n)
		{
			a=n;
			j=0;
			 k=0;
			for(int i=0;i<a;i++)
			{
			if(arr[i]!=' '||arr[i]!='.')
			{
				j++;
			}
		    if(arr[i]==' '||arr[i]=='.')
			{
				b[k]=j-1;
				k++;
				j=0;
			}
			}
		for(int i=0;i<k;i++)
		{
			cout<<b[i]<<" ";
		}
		}
	private:
		int a,j;
		int k;
		int b[10];
};
int main()
{
	char arr[100];
	gets(arr);
	int a=strlen(arr);
	danci d;
	d.Print(arr,a);
	return 0;
}
