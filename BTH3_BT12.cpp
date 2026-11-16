#include <iostream>
using namespace std;

bool laNamNhuan(int y);
int soNgayTrongThang(int m, int y);
bool ktNgayHopLe(int d, int m, int y);
void ngayKeTiep(int& d, int& m, int& y);


int main() {
    int d, m, y;
    do {
        cout << "Nhap ngay thang nam : ";
        cin >> d >> m >> y;
        if (ktNgayHopLe(d, m, y == false)) cout << "Du lieu k hop le | vui long nhap lai";
    } while (ktNgayHopLe(d, m, y == false));

    cout << "Nam " << y << " la nam nhuan ? " << boolalpha << laNamNhuan(y) << endl;

    int soNgay = soNgayTrongThang(m, y);
    cout << "Thang " << m << " nam " << y << " co so ngay la : " << soNgay << endl;

    ngayKeTiep(d, m, y);
    cout << "Ngay ke tiep :" << d << "/" << m << "/" << y << endl;
    return 0;
}

bool laNamNhuan(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return true;
    else return false;
}
int soNgayTrongThang(int m, int y) {
    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (laNamNhuan(y) == true) return 29;
        else return 28;
    default: return 0;
    }
}

bool ktNgayHopLe(int d, int m, int y) {
    if (y <= 0 || m < 1 || m>12) return false;
    if (d<1 || d> soNgayTrongThang(m, y)) return false;
    return true;
}

void ngayKeTiep(int& d, int& m, int& y) {
    d++;
    if (d > soNgayTrongThang(m, y)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}
