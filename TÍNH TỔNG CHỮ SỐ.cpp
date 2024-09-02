#include <iostream>
using namespace std;

int sum_digit(int a) {
    if ( 0 <= a && a < 10) {
        return a;
    }
    return a % 10 + sum_digit(a/10);
}

int main() {
    int n;
    for (int i = 0; i < n; i ++) {
        int a;
        cin >> a;
        while (a >= 10) {
            a = sum_digit(a);
        }
        cout << a << endl;
    }
}