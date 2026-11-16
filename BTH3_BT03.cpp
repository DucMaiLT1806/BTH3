#include <iostream>
using namespace std;

double chuViHCN(double d, double r) {
    return 2 * (d + r);
}

double dienTichHCN(double d, double r) {
    return d * r;
}

double dienTichHinhTron(double bk) {
    return 3.14159 * bk * bk;
}

int main() {
    double d = 5.0, r = 3.0, bk = 4.0;

    cout << "Chu vi HCN: " << chuViHCN(d, r) << endl;
    cout << "Dien tich HCN: " << dienTichHCN(d, r) << endl;
    cout << "Dien tich hinh tron: " << dienTichHinhTron(bk) << endl;

    return 0;
}