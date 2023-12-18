const mySqrt = (num) => {
    if (num == 0 || num == 1) return num;
    let right = num;
    let left = 1;
    let mid;
    let res;
    while (right >= left) {
        mid = Math.floor(left + (right - left) / 2);
        if (mid * mid <= num) {
            left = mid + 1;
            res = mid;
        }
        else {
            right = mid - 1;
        }
    }
    return res;
}