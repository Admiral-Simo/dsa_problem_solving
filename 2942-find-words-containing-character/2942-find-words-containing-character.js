/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function (words, x) {
  // loop through words and loop through each word and if the char === x push to results the i of the word and break
  let result = [];
  for (let i = 0; i < words.length; i++) {
    for (let j = 0; j < words[i].length; j++) {
        if (words[i].charAt(j) === x) {
            result.push(i);
            break;
        }
    }
  }
  return result;
};