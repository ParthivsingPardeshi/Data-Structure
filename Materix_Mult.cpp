#include <iostream>
using namespace std;

int main() {
    int m, n, p;
    cout << "Enter dimensions for matrix A (rows and columns): ";
    cin >> m >> n;
    
    cout << "Enter number of columns for matrix B (rows will be same as columns of A): ";
    cin >> p;
    
    int A[m][n], B[n][p], C[m][p];
    
    cout << "\nEnter elements of matrix A (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    cout << "\nEnter elements of matrix B (" << n << "x" << p << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout << "\nResulting matrix C (" << m << "x" << p << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
