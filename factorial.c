#include <iostream>

using namespace std;

// Function that implements factorial
long long factorial(int n) {
    long long fact = 1, num = n + 1;
    for (int i = 1; i< num; i++) {
        fact *= i;
    }
    return fact;
}

// The optimized factorial using the concept of pipelining
long long factorialOptimized(int n) {
    long long fact0 = 1, fact1 = 1, fact2 = 1, fact3 = 1, fact_last = 1;
    int last = n % 4;

    for (int i = 1; i < n - last; i += 4) {
        fact0 *= i;
        fact1 *= i + 1;
        fact2 *= i + 2;
        fact3 *= i + 3;
    }
    if (n % 4 == 0) {
        return fact0 * fact1 * fact2 * fact3;
    }
    else {
        for (int i = 0; i < last; i++) {
            fact_last *= (n - i);
        }
        return fact0 * fact1 * fact2 * fact3 * fact_last;
    }
}

int main() {
    long long out1 = factorial(20);
    cout << "out1 = " << out1 << endl; 
    // long long out2 = factorialOptimized(20);
    // cout << "out2 = " << out2 << endl; 
}


// compile && run 指令
// gcc factorial.c -o factorial
// time ./factorial
