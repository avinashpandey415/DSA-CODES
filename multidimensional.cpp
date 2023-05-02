#include <iostream>

using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];
    
    // Populate the array with values
    int counter = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = counter;
            counter++;
        }
    }
    
    // Print the array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

