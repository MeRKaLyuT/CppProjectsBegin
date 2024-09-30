#include <iostream>
using namespace std;

int main() {
    for (int i = 20; i < 51; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << '\t';
        }
    }
}
