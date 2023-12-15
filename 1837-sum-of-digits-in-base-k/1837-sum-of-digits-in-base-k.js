var sumBase = function(n, k) {
    let i = 0, basek = 0;
    while(n > 0) {
        basek += (n % k) * (10 ** i);
        n = Math.floor(n/k);
        i++;
    }
    let sum = 0;
    while (basek > 0 ){
        sum += basek % 10;
        basek = Math.floor(basek / 10);
    }
    return sum;
};