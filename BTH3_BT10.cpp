#include <iostream>
#include <cmath>
using namespace std;


int ucln(int a, int b);
int bcnn(int a, int b);
void rutGon(int& tu, int& mau);
void congPhanSo(int t1, int m1, int t2, int m2, int& t, int& m);

int main() {
    int a, b;
    cout << "Nhap a va b : ";
    cin >> a >> b;
    cout << "Uoc chung lon nhat cua 2 so la : " << ucln(a, b);
    cout << "\nBoi chung nho nhat cua 2 so la : " << bcnn(a, b);

    int tu, mau;
    cout << "\nNhap tu va mau cua phan so : ";
    cin >> tu >> mau;
    rutGon(tu, mau);
    cout << "Phan so sau khi rut gon : " << tu << "/" << mau;

    int t1 = 1, m1 = 6, t2 = 1, m2 = 3, kqT, kqM;
    cout << endl << t1 << " " << m1 << " " << t2 << " " << m2;
    congPhanSo(t1, m1, t2, m2, kqT, kqM);
    cout << "\nSau khi cong phan so ta co duoc : " << t1 << "/" << m1 << " + " << t2 << "/" << m2 << " = " << kqT << "/" << kqM;
    return 0;
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
