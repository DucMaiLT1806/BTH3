#include <iostream>
using namespace std;

int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b) {
	return a - b;
}
int tich(int a, int b) {
	return a * b;
}
int thuong(int a, int b) {
	return a / b;
}

int main() {
	int a, b; 
	cout << "Nhap a va b: ";
	cin >> a >> b; 
	cout << "Tong: " << tong(a, b) << endl;
	cout << "Hieu: " << hieu(a, b) << endl;
	cout << "Tich: " << tich(a, b) << endl;
	cout << "Thuong: " << thuong(a, b) << endl;
    return 0;
}