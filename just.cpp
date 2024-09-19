#include <iostream>
using namespace std;
#include <stdio.h>

class rectangle
{
	private:
		int a,b,c,d;
	public:
		void putdata()
		{
			cout<<"enter the sides of the rectangle =";
			cin>>a>>b;
			cout<<"\n enter the sides of the 2nd recatangle=";
			cin>>c>>d;
		}
		void area()
		{
			cout<<"\n area of 1st="<<a*b;
			cout<<"\n area of 2nd ="<<c*d;
		}
	
};
int main()
{
	rectangle aa;
	aa.putdata();
	aa.area();
	return 0;
}

