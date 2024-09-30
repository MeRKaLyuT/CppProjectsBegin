#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = a; i < b; i ++) {
        cout << n * i << '\t';
    }
}
