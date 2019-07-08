#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int w, x, y ,z;
	cout << "Ticket Price" << endl;
	cout << "Premium = 250"<< endl;
	cout << "Sideline = 100"<< endl; 
	cout << "box = 50 " << endl; 
	cout << "general abdmission = 25" << endl; 
	
	cout << " Ticket sold " << endl;
	cout << " Premium " ; cin >> w;
	cout << " Sideline ";cin >>x;
	cout << " box " ; cin>> y;
	cout << " general abdmission" ; cin>> z;
	
	
	
	cout << " Premium" << "250" <<"        "<< w << 250*w<<".00" ;
	cout << " Sideline" << "100" <<"        "<< x << 100*x<<".00" ;
	cout << " box" << "50" <<"        "<< y << 50*y<<".00" ;
	cout << " general admission" << "25" <<"        "<< z << 25*z<<".00" ;
getch();
return 0;
}
