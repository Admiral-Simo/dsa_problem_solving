class Solution {
public:
  int sumOfMultiples(int n) {
    // the goal is to return the sum
    // of the numbers that are divisible
    // by the number 3 or 5 or 7
    int result_sum = 0;
    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        result_sum += i;
    }
    return result_sum;
  }
};
