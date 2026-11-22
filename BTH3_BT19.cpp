#include <iostream>
using namespace std;

void thongKeChuSo(int n, int& soChan, int& soLe, int& maxCS, int& minCS);


int main() {
    int n, soChan = 0, soLe = 0, maxCS = 0, minCS = 9;
    cout << "Nhap so nguyen n : ";
    cin >> n;
    cout << endl;
    thongKeChuSo(n, soChan, soLe, maxCS, minCS);
    cout << n << " Co " << soChan << " so chan" << endl
        << "Co " << soLe << " so le" << endl
        << "Co chu so lon nhat la " << maxCS << endl
        << "Co chu so nho nhat la " << minCS << endl;
    return 0;
}

void thongKeChuSo(int n, int& soChan, int& soLe, int& maxCS, int& minCS) {
    while (n != 0) {
        int tmp = n % 10;
        if (tmp % 2 == 0) soChan++;
        else soLe++;
        if (maxCS < tmp) maxCS = tmp;
        if (minCS > tmp) minCS = tmp;
        n /= 10;
    }
}
