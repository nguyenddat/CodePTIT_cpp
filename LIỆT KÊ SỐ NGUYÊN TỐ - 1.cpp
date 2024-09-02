#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// int power(int n, int k) {
//     if (k == 0) {
//         return 1;
//     }
//     int temp = power(n, k/2);
//     if (k % 2 == 0) {
//         return temp * temp;
//     } else {
//         return temp * temp * n;
//     }
// }

vector<bool> prime_list() {
    int end = pow(10, 6) + 1;
    vector<bool> prime(end, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= end; ++i) {
        if (prime[i]) {
            for (int p = i * i; p <= end; p += i) {
                prime[p] = false;
            }
        }
    }
    return prime;
}

int main() {
    int a, b; cin >> a >> b;
    vector<bool> prime = prime_list();
    // cout << prime[0] << endl;
    for (int i = a + 1; i < b; i ++) {
        if (prime[i]){
            cout << i << " ";
        }
    }
}