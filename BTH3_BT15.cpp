#include <iostream>
#include <iomanip>
using namespace std;

double tinhTienDien(int kwh);
double tinhThue(double tien, double thueSuat = 0.08);


int main() {
    double kwh;
    cout << "Nhap kWh tieu thu trong thang :";
    cin >> kwh;
    double tien = tinhTienDien(kwh);
    cout << fixed << setprecision(0);
    cout << "Tien dien: " << tien << endl;
    cout << "VAT: " << tinhThue(tien) << endl;
    cout << "Tong cong: " << tien + tinhThue(tien);
    return 0;
}

double tinhTienDien(int kwh) {
    double tien;
    if (kwh <= 50) tien = kwh * 1984;
    else if (kwh <= 100) tien = 50 * 1984 + (kwh - 50) * 2050;
    else if (kwh <= 200) tien = 50 * 1984 + 50 * 2050 + (kwh - 100) * 2380;
    else if (kwh <= 300) tien = 50 * 1984 + 50 * 2050 + 100 * 2380 + (kwh - 200) * 2998;
    else if (kwh <= 400) tien = 50 * 1984 + 50 * 2050 + 100 * 2380 + 100 * 2998 + (kwh - 300) * 3350;
    else if (kwh >= 401) tien = 50 * 1984 + 50 * 2050 + 100 * 2380 + 100 * 2998 + 100 * 3350 + (kwh - 400) * 3460;
    return tien;
}
double tinhThue(double tien, double thueSuat) {
    return tien * thueSuat;
}
