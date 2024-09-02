#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while ( a % b != 0) {
        int du = a % b;
        a, b = b, du;
    }
    return b;
}

int LCM(int a, int b) {
    return (a / GCD(a, b) * b);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a, b;
        cin >> a >> b;
        cout << LCM(a, b) << " " << GCD(a, b);
    }
}