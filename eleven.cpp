#include <iostream>
using namespace std;

int main() {
    int summa = 0;
    for (int i = 1; i < 51; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            summa+=i;
        }
    }
    cout << summa;
}
