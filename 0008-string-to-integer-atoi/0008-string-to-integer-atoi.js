var myAtoi = (s) => {
    const max32BitInt = 2 ** 31 - 1;
    const min32BitInt = 2 ** 31 * -1;
    let num = parseInt(s);
    if (Number.isNaN(num)) num = 0;
    if (num > max32BitInt) return max32BitInt;
    if (num < min32BitInt) return min32BitInt;
    return num;
  };