#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int colidx = -1;
    int rowidx = -1;

    // Find the position of the zero element
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == 0) {
                rowidx = i;
                colidx = j;
                break;
            }
        }
        if(rowidx != -1) break; // Exit outer loop if zero is found
    }

    // Set the entire row to zero
    for(int j = 0; j < 3; j++) {
        arr[rowidx][j] = 0;
    }

    // Set the entire column to zero
    for(int i = 0; i < 3; i++) {
        arr[i][colidx] = 0;
    }

    // Print the modified array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
