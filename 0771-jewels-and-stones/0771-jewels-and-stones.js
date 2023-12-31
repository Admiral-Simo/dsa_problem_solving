const exist = (word, char) => {
    for(let som of word) {
        if (som === char) return true;
    }
    return false;
}
var numJewelsInStones = function(jewels, stones) {
 let count = 0;
 for(let char of stones) {
    if (exist(jewels, char)) count++;
 }   
 return count;
};