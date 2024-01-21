/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function (arr) {
  for (let i = 0; i < arr.length; ++i) {
    let max = arr[i + 1];
    for (let j = i + 1; j < arr.length; ++j) {
      // getting the biggest number out of those on the right
      if (max < arr[j]) {
        max = arr[j];
      }
    }
    if (i == arr.length - 1) {
      arr[i] = -1;
    } else {
      arr[i] = max;
    }
  }
  return arr;
};
