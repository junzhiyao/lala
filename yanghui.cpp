#include <iostream>
using namespace std;

class yanghui{ 
public:
	 yanghui(){}
	int Getnum(int m)
	{
		num=m;
		return num;
	}
	int GetN(int n)
	{
		N=n;
		return N;
	}
	void Print()
	{
    while (N--)
    {
        for(i=0;i<num;i++)
        {
            a[i][0]=1;
             a[i][i]=1;
        }
        for(i=2;i<num;i++)
        {
            for(j=1;j<i;j++)
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
        for(i=0;i<num;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
        }
    }
	}
    private:
    	int a[15][15];
    	int i,j;
    	int num;
    	int N;
    };
    int main()
    {
    	int N,m;
    	cin>>N>>m;
    	yanghui d1;
    	d1.GetN(N);
    	d1.Getnum(m);
    	d1.Print();
		return 0;
	}
