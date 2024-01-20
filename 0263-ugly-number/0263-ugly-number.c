/**
 * @param {number} n
 * @return {boolean}
 */
int isUgly(int n) {
  if (n <= 0) {
    return 0; // Ugly number cannot be negative
  }
  while (n % 2 == 0) {
    n /= 2;
  }
  while (n % 3 == 0) {
    n /= 3;
  }
  while (n % 5 == 0) {
    n /= 5;
  }
  return n == 1;
};
