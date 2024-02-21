/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
  let map = {};
  for (let i = 0; i < numbers.length; i++) {
    const element = numbers[i];
    const complement = target - numbers[i];
    if (complement in map) {
      return [map[complement], i + 1];
    }
    map[element] = i + 1;
  }
};
