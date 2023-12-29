/**
 * @param {number} numRows
 * @return {number[][]}
 */
const generate = (n) => {
    const result = [];

    for (let i = 0; i < n; i++) {
        const row = [];
        let coeff = 1;

        for (let j = 0; j <= i; j++) {
            row.push(coeff);
            coeff = Math.floor(coeff * (i - j) / (j + 1));
        }

        result.push(row);
    }

    return result;
};