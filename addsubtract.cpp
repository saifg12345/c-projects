#include <iostream>
#include <cmath>
using namespace std;

int a;
int b;

int add (int a, int b) {
	return a + b;
}
int subtract (int a, int b) {
	return a - b;
}

int main () {
int y;
int z;

cout << "Enter a number ";
cin >> y;
cout << "Enter another number ";
cin >> z;
cout << "The sum of those two numbers are " << add(y, z) << "." << endl;
cout << "If you subtract those two numbers, you get " << subtract (y, z) << "." << endl;


	return 0;
}
