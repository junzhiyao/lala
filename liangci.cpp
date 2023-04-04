#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				 int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int b[10]={0};
	for(i=1;i<n;i++)
	{
		if(a[i]==0)
		{
			b[0]++;
		}
		if(a[i]==1)
		{
			b[1]++;
		}
		if(a[i]==2)
		{
			b[2]++;
		}
		if(a[i]==3)
		{
			b[3]++;
		}
		if(a[i]==4)
		{
			b[4]++;
		}
		if(a[i]==5)
		{
			b[5]++;
		}
		if(a[i]==6)
		{
		b[6]++;
		}
		if(a[i]==7)
		{
		b[7]++;
		}
		if(a[i]==8)
		{
		b[8]++;
		}
		if(a[i]==9)
		{
		b[9]++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(b[i]==2)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
