#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool laTamGiac(double a, double b, double c);
string loaiTamGiac(double a, double b, double c);
double tinhChuVi(double a, double b, double c);
double tinhDienTich(double a, double b, double c);

int main() {
    double a, b, c;
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;

    if (laTamGiac(a, b, c)) {
        cout << "Day la mot tam giac hop le." << endl;
        cout << "Loai tam giac: " << loaiTamGiac(a, b, c) << endl;
        cout << "Chu vi: " << tinhChuVi(a, b, c) << endl;
        cout << "Dien tich: " << tinhDienTich(a, b, c) << endl;
    }
    else {
        cout << "Ba canh nay khong tao thanh mot tam giac!" << endl;
    }

    return 0;
}

bool laTamGiac(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a);
}

string loaiTamGiac(double a, double b, double c) {
    bool deu = (a == b && b == c);
    bool can = (a == b || b == c || a == c);
    bool vuong = (a * a + b * b == c * c) ||
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a);

    if (deu) return "Tam giac deu";
    if (vuong && can) return "Tam giac vuong can";
    if (vuong) return "Tam giac vuong";
    if (can) return "Tam giac can";
    return "Tam giac thuong";
}

double tinhChuVi(double a, double b, double c) {
    return a + b + c;
}

double tinhDienTich(double a, double b, double c) {
    double p = tinhChuVi(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
