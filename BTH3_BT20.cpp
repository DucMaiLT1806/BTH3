#include <iostream>
using namespace std;

int tongBinhPhuongChuSo(int n);
bool ktHanhPhuc(int n);


int main() {
    int n;
    cout << "Nhap n :";
    cin >> n;
    cout << n << " la so hanh phuc? " << boolalpha << ktHanhPhuc(n) << endl;
    cout << "Liet ke cac so hanh phuc <=100: \n";
    for (int i = 1; i <= 100; i++) {
        if (ktHanhPhuc(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}

int tongBinhPhuongChuSo(int n) {
    int tong = 0;
    while (n != 0) {
        int tmp = n % 10;
        tong += tmp * tmp;
        n /= 10;
    }return tong;
}
bool ktHanhPhuc(int n) {

    while (n != 1 && n != 4) {
        n = tongBinhPhuongChuSo(n);
    }
    return n == 1;
}
