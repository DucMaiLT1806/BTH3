#include <iostream>
using namespace std;

bool ktNguyenTo(int n);
int tongChuSo(int n);
int daoNguoc(int n);
bool ktDoiXung(int n);

int main() {
    int n;

    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n < 2) cout << "\nKhong phai la so nguyen to: \n";
    if (ktNguyenTo(n) == true) cout << n << " la so nguyen to \n";
    else cout << n << " khong la so nguyen to \n";

    cout << "Tong chu so cua n la : " << tongChuSo(n) << endl;

    cout << "So dao nguoc la : " << daoNguoc(n) << endl;

    if (ktDoiXung(n) == true) cout << "n la so doi xung ";
    else cout << "n khong phai la so doi xung ";
    return 0;
}

bool ktNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i < n;i++) {
        if (n % i == 0) return false;
    }return true;
}

int tongChuSo(int n) {
    int tmp = n;
    int tong = 0;
    while (tmp != 0) {
        tong += tmp % 10;
        tmp /= 10;
    }
    return tong;
}

int daoNguoc(int n) {
    int sdn = 0;
    int tmp = n;
    while (tmp != 0) {
        sdn = sdn * 10 + tmp % 10;
        tmp /= 10;
    }
    return sdn;
}

bool ktDoiXung(int n) {
    if (daoNguoc(n) == n) return true;
    else return false;
}
