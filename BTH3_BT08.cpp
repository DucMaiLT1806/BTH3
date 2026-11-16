#include <iostream>
using namespace std;

void veHCN(int m, int n, char kyTu = '*');

int main() {
    veHCN(4, 5);
    cout << endl;
    veHCN(4, 5, '-');
    return 0;
}

void veHCN(int m, int n, char kyTu) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << kyTu;
        }
        cout << endl;
    }
}
