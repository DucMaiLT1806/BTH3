#include <iostream>
using namespace std;

bool laSoChan(int n);
int tongTu1Den(int n);
long long giaiThua(int n);

int main() {
    int n;
    cout << "Nhap vao so nguyen n : ";
    cin >> n;
    cout << "n la so " << boolalpha << laSoChan(n) << endl;
    cout << "Tong tu 1 den n : " << tongTu1Den(n) << endl;
    cout << "Giai thua n : " << giaiThua(n) << endl;

    return 0;
}

bool laSoChan(int n) {
    if (n % 2 == 0) return true;
    else return false;
}

int tongTu1Den(int n) {
    int dem = 0;
    for (int i = 0; i <= n; i++) {
        dem += i;
    }
    return dem;
}

long long giaiThua(int n) {
    if (n == 0) return 1;
    int dem = 1;
    for (int i = 1; i <= n; i++) {
        dem *= i;
    }
    return dem;
}
