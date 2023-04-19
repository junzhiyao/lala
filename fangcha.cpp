#include <numeric>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
double VectorVar(const vector<double> &A)
{
	double sum = accumulate(begin(A),end(A), 0.00);
	 double mean =  sum / A.size();
	double variance  = 0.00;
    for (uint16_t i = 0 ; i < A.size() ; i++)
    {
        variance = variance + pow(A[i]-mean,2);
    }
    variance = variance/A.size();
    return variance;
}
   
int main()
{
 
    vector<double> A = {0,0,0,0,0,0};
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
		for (int j=0;j<6;j++)
		{
			cin>>A[j];
		}
		double sum = accumulate(begin(A),end(A), 0.00);
		 double mean =  sum / A.size();
		 std::cout<<mean<<" ";
		cout<<VectorVar(A)<<endl;
	}
    
}
