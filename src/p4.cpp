#include <iostream>
using namespace std;

void show(int depth) {
    if (depth <= 0) return;
    cout << "|--";
    show(depth - 1);
}


int fib(int n, int depth) {

    if (depth > 0) show(depth);
    cout << "SEARCH fib(" << n << ")\n";
    int re;
    if (n == 1 || n == 2) {
        re = 1;
    } else {
        int a = fib(n - 1, depth + 1);
        int b = fib(n - 2, depth + 1);
        re = a + b;
    }
    if (depth > 0) show(depth);
    cout << "GET fib(" << n << ") = " << re << "\n";
    return re;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n, 0) << endl;
    return 0;
}