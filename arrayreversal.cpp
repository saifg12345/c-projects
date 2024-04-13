#include <iostream>
using namespace std;


int main() 
{

int size;
cout << "Enter the size of the array: ";
cin >> size;
int arr[size];
cout << "What numbers do you want in the array? ";
for (int i = 0; i < size; i++) {
	cin >> arr[i];
}

cout << "Your original array is: ";
for (int i = 0; i < size; i++) {
cout << *(arr + i) << " ";

}

cout << endl;

cout << "The reversed array is: ";
for (int i = 1; i <= size; i++) {
cout << *(arr + size - i) << " ";
}
	return 0;
}
