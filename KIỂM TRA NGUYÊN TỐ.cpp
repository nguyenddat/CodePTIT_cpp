#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sieve(int n) {
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; ++i) {
        if (prime[i]) {
            for (int p = i * i; p < n + 1; p += i) {
                prime[p] = false;
            }
        }
    }
}

string check(int a) {
    if (a < 2) {
        return "NO";
    }
    if (a % 2 == 0 && a != 2) {
        return "NO"; 
    }
    for (int i = 3; i < (int)sqrt(a) + 1; i += 2) {
        if (a % i == 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int a; cin >> a;
    cout << check(a) << endl;
}