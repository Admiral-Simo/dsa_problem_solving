/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function (obj) {
  stringified = JSON.stringify(obj);
  return stringified == "[]" || stringified == "{}";
};
