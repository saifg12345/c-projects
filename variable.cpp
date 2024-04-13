#include <iostream>
using namespace std;

int main()
{
int myInt = 7;
double myDouble = 8.5;
int sum = (int) myDouble + myInt;
cout << sum << endl;

int userInt;
cout << "Type a number:";
cin >> userInt;
int product = myInt * (int) userInt;
cout << product << endl;
	return 0;
}

