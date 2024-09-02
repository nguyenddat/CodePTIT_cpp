#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a;
        cin >> a;
        for (int j = 2; j < (int)sqrt(a) + 1; j ++) {
            if (a % j == 0) {
                cout << j << " ";
                int count = 0;
                while ( a % j == 0) {
                    count += 1;
                    a /= j;
                }
                cout << count << " ";
            }
        }
        if ( a != 0) {
            cout << a << endl;
        } else {
            cout << endl;
        }
    }
}