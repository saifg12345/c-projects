#include <iostream>
using namespace std;

void printArray(int *ptr, int size) {
	for (int i=0; i<size; i++) {
		cout << *(ptr - i) << " ";
	}
}

int main () {
	
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
printArray(ptr, 5);
return 0;

}
