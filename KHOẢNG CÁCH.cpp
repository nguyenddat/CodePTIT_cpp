#include <iostream>
#include <iomanip>
using namespace std;

double custom_sqrt(double n) {
    if (n < 0) {
        cerr << "Negative number" << endl;
        return -1;
    }

    double epsilon = 1e-7;
    double x = n;
    double root;
    double check_condition;

    while (true) {
        root = 0.5 * (x + n / x);
        check_condition = root - x;
        if (check_condition < 0) {
            check_condition = - check_condition;
        }    
        if (check_condition < epsilon) {
            break;
        }
        x = root;
    }
    return root;

}

double euclid_distance(int ax, int ay, int bx, int by) {
    double distance;
    double x_distance = ax - bx;
    double y_distance = ay - by;

    return custom_sqrt(x_distance * x_distance + y_distance * y_distance);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;
        cout << fixed << setprecision(4) << euclid_distance(ax, ay, bx, by) <<endl;
    }
}
