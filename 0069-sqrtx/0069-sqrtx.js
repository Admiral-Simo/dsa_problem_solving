/**
 * @param {number} x
 * @return {number}
 */

function mySqrt(num) {
    if (num === 0) return 0; 
    let initial = num / 2;
    while (Math.abs(initial * initial - num) > 0.0001) {
        initial = 0.5 * ( initial + num/initial ); 
    }
   return Math.floor(initial); 
}