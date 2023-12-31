var numJewelsInStones = function(jewels, stones) {
 let count = 0;
 let mp = {};
 for(let char of jewels) {
    mp[char] = 1;
 }
 for(let char of stones) {
    if (mp[char]) count++;
 }   
 return count;
};