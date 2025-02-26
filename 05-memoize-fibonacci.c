#define MAX_N 92  // Memoize up to 91 integers

static long long memo[MAX_N] = {0};

long long fib(int n) {
    if (n <= 1) {
        return n;
    }

    // Has integer been computed?
    if (memo[n] != 0) {
        return memo[n];
    }

    // Compute, then store result.
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}