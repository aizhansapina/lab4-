#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,D,x1,x2,x;
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	x=-b/(2*a);
	if(D>0){
	cout<<"x1="<<x1<<" "<<"x2="<<x2<<endl;}
	else if(D=0){
	cout<<"x="<<x<<endl;}
	else if(D<0){
	cout<<"no roots"<<endl;}
return 0;
}

