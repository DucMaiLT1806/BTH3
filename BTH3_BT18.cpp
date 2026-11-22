#include <iostream>
using namespace std;

double luyThua(double x, int n);
long long giaiThua(int n);
double tongS(double x, int n);

int main() {
    double x;
    int n;
    cout << "Nhap so thuc x: ";
    cin >> x;
    do {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n < 1) cout << "Nhap lai ! \n";
    } while (n < 1);
    cout << "Tong S:(" << x << "," << n << ") = " << tongS(x, n) << endl;
    return 0;
}
double luyThua(double x, int n) {
    double tong = 1.0;
    for (int i = 1;i <= n;i++) {
        tong *= x;
    }
    return tong;
}

long long giaiThua(int n) {
    if (n == 0) return 1;
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

double tongS(double x, int n) {
    double tong = 0.0;
    for (int i = 1; i <= n;i++) {
        tong += luyThua(x, i) / giaiThua(i);
    }
    return tong;
}
