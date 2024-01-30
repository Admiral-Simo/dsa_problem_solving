/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function (flowerbed, n) {
  let j = 0;
  for (let i = 0; i < flowerbed.length; ++i) {
    if (!flowerbed[i - 1] && !flowerbed[i + 1] && !flowerbed[i]) {
      flowerbed[i] = 1;
      ++j;
    }
  }
  return n <= j;
};

