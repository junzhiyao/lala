#include <iostream>
using namespace std;
class yuan{
	public:
		yuan(){}
		double Getr(double R)
		{
			r=R;
			return r;
		}
		double diameter()
		{
			return 2*r;
		}
		double circumference()
		{
			return 2*n*r;
		}
		double area()
		{
			return n*r*r;
		}
		void Print()
		{
			cout<<"the diameter is:"<<2*r<<endl;
			cout<<"the circumference is:"<<2*n*r<<endl;
			cout<<"the area is:"<<n*r*r<<endl;
		}
	private:
		double r;
		double n=3.14;
			
};
int main()
{
	double r;
	cin>>r;
	yuan d;
	d.Getr(r);
	d.Print();
	return 0;
}
