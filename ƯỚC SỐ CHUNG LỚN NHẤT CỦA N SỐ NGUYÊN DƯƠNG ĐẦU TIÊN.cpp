#include <iostream>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b) {
    while (a % b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return b;
}

ll LCM(ll n) {
    ll result = 2;
    for (ll j = 3; j <= n; j ++) {
        result = (j / GCD(j, result)) * result;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        ll n;
        cout << LCM(n) << endl;
    }
}