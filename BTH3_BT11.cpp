#include <iostream>
#include <cmath>
using namespace std;

int giaiPTB2(double a, double b, double c, double& x1, double& x2);

int main() {
    double a, b, c, x1, x2;
    cout << "Nhap he so a b c : ";
    cin >> a >> b >> c;
    int nghiem = giaiPTB2(a, b, c, x1, x2);
    if (nghiem == -1) cout << "Phuong trinh co vo so nghiem " << endl;
    else if (nghiem == 0) cout << "Phuong trinh vo nghiem " << endl;
    else if (nghiem == 1) cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x1 << endl;
    else if (nghiem == 2) {
        cout << "Phuong trinh co 2 nghiem phan biet : \n"
            << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
    else if (nghiem == 3) {
        cout << "Phuong trinh tro thanh phuong trinh bac nhat 1 an \n";
        cout << "Nghiem cua phuong trinh la x = " << x1 << endl;
    }
    return 0;
}

int giaiPTB2(double a, double b, double c, double& x1, double& x2) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) return -1;
            else return 0;
        }
        else {
            x1 = -c / b;
            x2 = x1;
            return 3;
        }
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;
    else if (delta == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        return 1;
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
    return 0;
}

