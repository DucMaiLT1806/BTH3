#include <iostream>
#include <string> 
using namespace std;

void inLoiChao() {
    cout << "Chao mung ban den voi C++! \n";
}
void inLoiChaoTen(string ten) {
    cout << "Chao mung " << ten << " !\n";
}
int main() {
    string ten; 
    cout << "Nhap ten cua ban: "; 
    getline(cin, ten);
    inLoiChao(); 
    inLoiChaoTen(ten); 
    return 0;
}