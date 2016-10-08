#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y, x1, y1;
	cin >> x >> y >> x1 >> y1;
	if ( ( x - x1 == 0 && y - y1 == 1) || ( x - x1 == 1 && y - y1 == 0 ) || ( x - x1 == 1 && y - y1 == 1) ) 
	{
	    cout << "yes";
	}	
	else 
	{
	    cout << "no";
	}

return 0;

}
