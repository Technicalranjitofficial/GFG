#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int nthFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    return fib[n];
}

int main() {
    int n = 5;
    int result = nthFibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
