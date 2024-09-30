#include <iostream>
using namespace std;

int main() {
    int mas[10];
    for (int i = 0; i < 10; i++) {
        cin >> mas[i];
        if (mas[i] > 15) {
            mas[i] = 15;
        }

    }
    for (int i = 0; i < 10; i++) {
        cout << mas[i] << '\t';
    }
}
