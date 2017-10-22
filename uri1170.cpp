#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--) {
        double a;
        cin >> a;
        a = ceil(log2(a));
        cout << a << " dias" << endl;
    }

    return 0;
}