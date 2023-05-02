#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = &arr[0];  // points to the first element of the array

    for (int i = 0; i < 5; i++) {
        std::cout << "Value of arr[" << i << "] is " << *ptr << std::endl;
        ptr++;  // moves the pointer to the next element in the array
    }

    return 0;
}

