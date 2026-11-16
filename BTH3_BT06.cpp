#include <iostream>
using namespace std;

int g = 1;
void f1(int x) { x += 10; g++; }
void f2(int& x) { x += 10; g++; }
void hoanVi(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 5, b = 5;
    f1(a); // 5
    f2(b); // 15
    cout << a << " " << b << " " << g << endl; // 5 15 3
    {
        int g = 100;
        cout << g << endl; //100 la bien cuc bo
    }
    cout << g << endl;//3
    hoanVi(a, b);// ham hoanVi(int a , int b) khong the dung duoc boi vi day la ham tham tri khong phai tham chieu . Khi truyen tham tri thi gia tri trong ham chi la ban sao khong lien quan den ban goc nen khi ket thuc no se bien mat
    cout << a <<" "<< b;
    return 0;
}
