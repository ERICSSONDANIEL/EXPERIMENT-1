#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
double x, y; 
cout << "input the mass : " <<endl;
cin >> x ;
cout << x << " grams"<< endl;
cout << "input the density " << endl;
cin >> y;
cout << y << " grams per cubic centimeter"<< endl;
cout << "volume = "<< x/4*y << " cubic centimeter" << endl;

getch();
return 0;
}
