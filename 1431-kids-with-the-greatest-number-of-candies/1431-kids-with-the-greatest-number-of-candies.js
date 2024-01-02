/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
  // i should find the maximum amount of candies amongst the kids its going to be linear after that
  let result = []; 
  let maxCandies = Math.max(...candies);
  for(let i = 0; i < candies.length; i++)  {
    result[i] = candies[i] + extraCandies >= maxCandies;
  }
  return result;
};
