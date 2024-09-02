#include <iostream>
using namespace std;

string check(long long a) {
    int last_digit, second_last_digit;
    while (a >= 10) {
        last_digit = a % 10;
        second_last_digit = (a/10) % 10;
        if (last_digit + 1 != second_last_digit && last_digit - 1 != second_last_digit) {
            return "NO";
        }
        a /= 10; 
    }
    return "YES";
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        long long a;
        cin >> a;
        cout << check(a) << endl;
    }
}