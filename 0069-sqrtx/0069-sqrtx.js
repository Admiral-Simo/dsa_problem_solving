const mySqrt = (num) => {
    if (num === 0 || num === 1) return num;
    for(let i = 1; i <= num; i++) {
        if (i * i > num) return i - 1;
    }
}