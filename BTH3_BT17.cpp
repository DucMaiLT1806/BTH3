#include <iostream>
#include <cmath>
using namespace std;

bool ktChinhPhuong(int n);
bool ktHoanThien_c1(int n);

int main() {
    int n;
    do {
        cout << "Nhap so nguyen n: ";
        cin >> n;
        if (n < 0) cout << "So khong hop le vui long nhap lai! \n";
    } while (n < 0);
    if (ktChinhPhuong(n)) cout << n << " la so chinh phuong \n";
    else cout << n << " khong phai la so chinh phuong \n";

    if (ktHoanThien_c1(n)) cout << n << " la so hoan thien \n";
    else cout << n << " khong la so hoan thien \n";

    return 0;
}

bool ktChinhPhuong(int n) {
    int can = sqrt(n);
    if (can * can == n) return 1;
    else return 0;
}
bool ktHoanThien_c1(int n) {
    if (n < 6) return 0;
    if (n == 6) return 1;
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) tong += i;
    }
    return tong == n;
}
bool ktHoanThien_c2(long long n) { // dung khi so qua to :v
    if (n < 6) return 0;
    if (n == 6) return 1;
    long long tong = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            tong += i;//uoc t1
            if (i != n / i) tong += n / i; // uoc t2 nam ben phai can n
            // co tac dung tranh trung lap tai vi tri can bac 2 cua n
            // -> cong them uoc thu 2 neu no khong trung voi uoc t1
// 2 | can 36 | 18
// 3 | can 36 | 12
// 4 | can 36 | 9
// 5 | can 36 | - bo qua ca cum
// 6 | can 36 | 6 bo qua 6 o uoc t2 the la khong cong trung
        }
    }
    return tong == n;
}
// khi dung cach nay se co cac cap so co the nhan voi nhau bang n vd 28( 1x28 , 2x14 , 4x7)

