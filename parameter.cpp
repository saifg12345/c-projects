#include <iostream>
#include <cmath>
using namespace std;

int sum;
void add (int a, int b) {
	sum = a + b;
	cout << sum << endl;
}

void power (float base, float exponent) {
	cout << pow(base, exponent) << endl;

}


void print_x() {
	extern int x;
	cout << x << endl;
}

int main()
{

add(4,5);
power(2.0, 3.0);
print_x();

	return 0;
}

int x = 7;
