#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i > 2 && i < n) && (j > 1 && j < n) && (j != i)) {
                cout << "  ";
            } else {
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
