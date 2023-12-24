int climbStairs(int n) {
    int one = 1, two = 1;
    for(int i = 0; i < n - 1; i++) {
        int tmp = one;
        one = one + two;
        two = tmp;
    }
    return one;
}