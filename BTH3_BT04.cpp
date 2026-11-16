#include <iostream>
using namespace std;


int max2(int a, int b) {
    return (a > b) ? a : b; 
}
int max3(int a, int b, int c) {
	return max2(max2(a, b), c);
}

int main() {
    int a, b, c; 
    cout << "Nhap 2 so nguyen a b : "; 
	cin >> a >> b;
	cout << "\nSo lon nhat trong 2 so: " << max2(a, b) << endl;
    cout << "Nhap them so thu 3 de so sanh: "; 
    cin >> c; 
	cout << "\nSo lon nhat trong 3 so: " << max3(a, b, c) << endl;
    
    return 0;
}