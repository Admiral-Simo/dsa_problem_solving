func fib(n int) int {
    if n <= 1 {
        return n
    }
    a, b := 0, 1
    for i := 2; i <= n; i++ { // Changed the loop condition from i < n to i <= n
        a, b = b, a+b
    }
    return b
}
