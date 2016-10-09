#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int c[3],i,x,y;
	for(i=0;i<3;i++)
	{
		cin>>x>>y;
		c[i]=abs(x-y);
	}
	cout<<endl<<c[0]<<c[1]<<c[2];
	return 0;
}
