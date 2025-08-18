#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
  
    cout << "Enter the diagonal elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> matrix[i][i];   
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
    cout << "Diagonal Matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
