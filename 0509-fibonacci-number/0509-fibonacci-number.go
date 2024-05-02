func fibs(n int) int {
    if n <= 1 {
        return n
    }
    a, b := 0, 1
    for i := 2; i <= n; i++ { // Changed the loop condition from i < n to i <= n
        a, b = b, a+b
    }
    return b
}

// Matrix represents a 2x2 matrix
type Matrix [2][2]int

// Multiply multiplies two matrices
func Multiply(a, b Matrix) Matrix {
	return Matrix{
		{a[0][0]*b[0][0] + a[0][1]*b[1][0], a[0][0]*b[0][1] + a[0][1]*b[1][1]},
		{a[1][0]*b[0][0] + a[1][1]*b[1][0], a[1][0]*b[0][1] + a[1][1]*b[1][1]},
	}
}

// Power computes the power of a matrix
func Power(a Matrix, n int) Matrix {
	if n == 1 {
		return a
	}
	if n%2 == 0 {
		half := Power(a, n/2)
		return Multiply(half, half)
	}
	return Multiply(a, Power(a, n-1))
}

// FibonacciLogN calculates the nth Fibonacci number using logarithmic time complexity
func fib(n int) int {
	if n <= 1 {
		return n
	}
	base := Matrix{{1, 1}, {1, 0}}
	result := Power(base, n-1)
	return result[0][0]
}