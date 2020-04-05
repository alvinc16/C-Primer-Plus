#include <iostream>
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam =42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;//修改cout的显示方式
    cout << "waist = " << waist << " (hex for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (oct for 42)" << endl;
    return 0;
}