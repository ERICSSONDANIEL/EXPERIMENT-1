#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
double w, x, y, z;
cout << " netBalance " << endl;
cin >> w;
cout << "payment " << endl;
cin >> x;
cout << " Number of days in  the billing cycle" <<endl;
cin >> y;
cout << " Number of days payment is made before billing cycle" << endl;
cin >> z;

cout << "averageDaily Balance" << (w*y-x*z) /y << endl;
cout << "interest" << ( (w*y-x*z) /y) * 0.0097 << endl;

getch();
return 0;
}
