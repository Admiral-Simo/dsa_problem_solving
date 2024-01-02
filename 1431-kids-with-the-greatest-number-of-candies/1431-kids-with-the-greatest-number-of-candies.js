/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
  let result = [];
  for(let i = 0; i < candies.length; i++) {
      let greather = true;
    for(let j = 0; j < candies.length; j++) {
      if (candies[i] + extraCandies < candies[j] && i != j) greather = false;
    }
    result[i] = greather;
  }
  return result;
};
