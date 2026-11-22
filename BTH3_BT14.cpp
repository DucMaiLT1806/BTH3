#include <iostream>
#include <cmath>
using namespace std;

bool ktNguyenTo(int n);
int tongChuSo(int n);
int daoNguoc(int n);
bool ktDoiXung(int n);

int ucln(int a, int b);
int bcnn(int a, int b);
void rutGon(int& tu, int& mau);
void congPhanSo(int t1, int m1, int t2, int m2, int& t, int& m);

int nhapSoNguyenN();
int main() {
    int chon;
    do {
        cout << "====== MENU ======\n"
            << "1. Kiem tra so nguyen to\n"
            << "2. Tinh tong cua cac chu so n\n"
            << "3. Tim so dao nguoc cua n\n"
            << "4. Kiem tra so doi xung\n"
            << "5. Tim UCLN va BCNN\n"
            << "6. Rut gon phan so\n"
            << "7. Cong hai phan so\n"
            << "0. Thoat chuong trinh\n"
            << "===================\n";
        cin >> chon;
        switch (chon) {
        case 1: {
            int n = nhapSoNguyenN();
            if (n < 2) cout << "\nKhong phai la so nguyen to: \n";
            if (ktNguyenTo(n) == true) cout << n << " la so nguyen to \n";
            else cout << n << " khong la so nguyen to \n";
            break;
        }
        case 2: {
            int n = nhapSoNguyenN();
            cout << "Tong chu so cua n la : " << tongChuSo(n) << endl;
            break;
        }
        case 3: {
            int n = nhapSoNguyenN();
            cout << "So dao nguoc la: " << daoNguoc(n) << endl;
            break;
        }
        case 4: {
            int n = nhapSoNguyenN();
            if (ktDoiXung(n) == true) cout << "n la so doi xung ";
            else cout << "n khong phai la so doi xung ";
            break;
        }
        case 5: {
            int a, b;
            cout << "Nhap a va b : ";
            cin >> a >> b;
            int kq = ucln(a, b);
            int kqbcnn = bcnn(a, b);
            cout << "Uoc chung lon nhat cua 2 so la: " << kq;
            cout << "Boi chung nho nhat cua 2 so la: " << kqbcnn;
            break;
        }
        case 6: {
            int tu, mau;
            cout << "\nNhap tu va mau cua phan so : ";
            cin >> tu >> mau;
            rutGon(tu, mau);
            cout << "Phan so sau khi rut gon : " << tu << "/" << mau;
            break;
        }
        case 7: {
            int t1, m1, t2, m2, kqT, kqM;
            cout << "Nhap phep tinh phan so theo cu phap sau tu 1 , mau 1 , tu 2 , mau 2 : ";
            cin >> t1 >> m1 >> t2 >> m2;
            cout << endl << t1 << " " << m1 << " " << t2 << " " << m2;
            congPhanSo(t1, m1, t2, m2, kqT, kqM);
            cout << "\nSau khi cong phan so ta co duoc : " << t1 << "/" << m1 << " + " << t2 << "/" << m2 << " = " << kqT << "/" << kqM;
            break;
        }
        case 0: {
            cout << " ";
            break;
        }
        default: {
            cout << "khong hop le: Nhap lai!\n"; break;
        }
        }
    } while (chon != 0 || chon > 7 || chon < 0);



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

int ucln(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0 && b == 0) return 1;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }return a;
}
int bcnn(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / ucln(a, b);
}

void rutGon(int& tu, int& mau) {
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    if (tu == 0) {
        mau = 1; return;
    }
    int phanChhung = ucln(tu, mau);
    tu /= phanChhung;
    mau /= phanChhung;
}
void congPhanSo(int t1, int m1, int t2, int m2, int& t, int& m) {
    t = (t1 * m2) + (t2 * m1);
    m = m1 * m2;
    rutGon(t, m);
}

int nhapSoNguyenN() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    return n;
}



