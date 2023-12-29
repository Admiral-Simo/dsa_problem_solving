/**
 * @param {number} numRows
 * @return {number[][]}
 */
const generate = (n) => {
    let result = [];
    for(let i = 0; i < n; i++) {
        let row = [];
        for(let j = 0; j <= i; j++) {
            const left = (result[i - 1] && result[i - 1][j - 1]) || 0;
            const right = (result[i - 1] && result[i - 1][j]) || 0;

            row.push(left + right || 1)
        }
        result.push(row);
    }   
    return result;
}