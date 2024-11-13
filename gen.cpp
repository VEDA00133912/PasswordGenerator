#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int length, count;
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    srand(time(0));

    cout << "桁数: "; cin >> length;
    if (length <= 0) { cout << "有効な整数を入力してください\n"; return 1; }

    cout << "生成数: "; cin >> count;
    if (count <= 0) { cout << "有効な整数を入力してください\n"; return 1; }

    for (int i = 1; i <= count; i++) { 
        cout << i << ": ";
        for (int j = 0; j < length; j++) cout << charset[rand() % charset.size()];
        cout << endl;
    }
    return 0;
}
