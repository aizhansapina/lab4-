#include <iostream>
using namespace std;
int main ()
{
	double a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	x=c-a;
	y=d-b;
	if(a<c && b<d && a-c!=0 && b-d!=0){	
	cout<<x<<" "<<y<<endl;}
	else{
	cout<<"no changes"<<endl;}
return 0;
}

