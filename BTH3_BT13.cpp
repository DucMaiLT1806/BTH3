#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int mayChon();
int soSanh(int nguoi, int may);

void capNhatDiem(int kq, int& diemNguoi, int& diemMay);


int main() {
    srand(time(0));

    int diemNguoi = 0, diemMay = 0;
    int nguoi, may, kq;

    cout << "=== KEO - BUA - BAO ===" << endl;

    while (diemNguoi < 3 && diemMay < 3) {
        do {
            cout << "\nBan chon gi (0-Keo, 1-Bua, 2-Bao)? : ";
            cin >> nguoi;
            if (nguoi < 0 || nguoi > 2) cout << "Nhap sai | Chi duoc chon 0, 1 hoac 2 | Nhap lai.\n";
        } while (nguoi < 0 || nguoi > 2);

        may = mayChon();
        cout << "May chon: ";
        if (may == 0) cout << "Keo\n";
        else if (may == 1) cout << "Bua\n";
        else cout << "Bao\n";

        kq = soSanh(nguoi, may);
        capNhatDiem(kq, diemNguoi, diemMay);

        if (kq == 1) cout << ">> BAN THANG VAN NAY! << \n";
        else if (kq == -1) cout << ">> MAY THANG VAN NAY! <<\n";
        else cout << ">> HOA! <<\n";
    }

    cout << "================================\n";
    if (diemNguoi == 3) {
        cout << ">> BAN DA WIN! <<\n";
    }
    else {
        cout << ">> MAY TINH WIN! <<\n";
    }

    return 0;
}

int mayChon() {
    return rand() % 3;
}
int soSanh(int nguoi, int may) {
    if (nguoi == may) return 0;
    //TH NG WIN
    if ((nguoi == 0 && may == 2) || (nguoi == 1 && may == 0) || (nguoi == 2 && may == 1)) return 1;

    return -1;
}
void capNhatDiem(int kq, int& diemNguoi, int& diemMay) {
    if (kq == 1) diemNguoi++;
    else if (kq == -1) diemMay++;
}
