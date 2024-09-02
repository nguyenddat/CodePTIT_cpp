#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a; cin >> a;
    for (int i = 2; i < (int)sqrt(a) + 1; i ++) {
        if (a % i == 0) {
            cout << i << " ";
            int count = 0;
            while (a % i == 0) {
                count += 1;
                a /= i;
            }
            cout << count << endl;
        }
    }
    if (a != 1) {
        cout << a << " " << 1 << endl;
    }
    return 0;
}