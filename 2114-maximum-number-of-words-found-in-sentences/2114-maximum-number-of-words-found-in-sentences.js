/**
 * @param {string[]} sentences
 * @return {number}
 */
const mostWordsFound = (words) => {
	let maxResult = 0;
	for(let i = 0; i < words.length; i++) {
		let wordsCount = 1;
		for(let j = 0; j < words[i].length; j++) {
			if (words[i].charAt(j) === ' ') wordsCount++;	
		}
		maxResult = Math.max(maxResult, wordsCount);
	}
	return maxResult;
}
