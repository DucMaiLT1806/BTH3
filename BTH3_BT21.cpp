#include <iostream>
using namespace std;

double thuNhapTinhThue(double thuNhap, int soNPT);
double tinhThueTNCN(double tnTT);


int main() {
    int thuNhap, soNPT;
    do {
        cout << "Nhap thu nhap cua ban va so nguoi phu thuoc : ";
        cin >> thuNhap >> soNPT;
        if (thuNhap < 0 || soNPT < 0) cout << "Nhap lai | khong hop le! \n";
    } while (thuNhap < 0 || soNPT < 0);
    cout << "Thu nhap tinh thue: " << thuNhapTinhThue(thuNhap, soNPT) << " trieu " << endl;
    cout << "Thue TNCN: " << tinhThueTNCN(thuNhapTinhThue(thuNhap, soNPT)) << " trieu " << endl;
    return 0;
}

double thuNhapTinhThue(double thuNhap, int soNPT) {
    return thuNhap - 15.5 - 6.2 * soNPT;
}
double tinhThueTNCN(double tnTT) {
    if (tnTT <= 10) return  tnTT * 0.05;
    else if (tnTT <= 30) return 10 * 0.05 + (tnTT - 10) * 0.1;
    else if (tnTT <= 60) return 10 * 0.05 + 20 * 0.1 + (tnTT - 30) * 0.2;
    else if (tnTT <= 100) return 10 * 0.05 + 20 * 0.1 + 30 * 0.2 + (tnTT - 60) * 0.3;
    else if (tnTT >= 100) return 10 * 0.05 + 20 * 0.1 + 30 * 0.2 + 40 * 0.3 + (tnTT - 100) * 0.35;
}
