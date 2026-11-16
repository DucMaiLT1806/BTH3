#include <iostream>
#include <string>
using namespace std;

int nhapSoNguyen(string thongBao = "Nhap so nguyen trong doan: ", int min = 0, int max = 10);


int main() {
    nhapSoNguyen();
    return 0;
}

int nhapSoNguyen(string thongBao, int min, int max) {
    int n;
    do {
        cout << thongBao;
        cin >> n;

        if (n < min || n > max) {
            cout << "-> Nhap sai roi! | Nhap lai " << min << " den " << max << ".\n";
        }
        else cout << "Ok dung roi do ";
    } while (n < min || n > max);
    return n;
}
