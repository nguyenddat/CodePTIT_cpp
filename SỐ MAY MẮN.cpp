#include <iostream>
using namespace std;

int check(int a) {
    int last_2_digit = a % 100;
    if (last_2_digit == 86) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a;
        cout << check(a) << endl;
    }
}