#include <iostream>
#include <cmath>
using namespace std;

int x;
void cube () {
	cout << "The number cubed is " << pow(x, 3) << ".";
}

int main() 
{
cout << "Please give me a number: ";
cin >> x;
cube(); 
	return 0;
}
