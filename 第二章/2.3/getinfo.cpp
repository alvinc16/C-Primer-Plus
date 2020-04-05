#include <iostream>
int main(){
    using namespace std;
    int carrots;
    cout << "How many carrtos do you have?" << endl;
    cin >> carrots; //输入一个数，赋值给carrots
    cout << "Here are tow more.";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}