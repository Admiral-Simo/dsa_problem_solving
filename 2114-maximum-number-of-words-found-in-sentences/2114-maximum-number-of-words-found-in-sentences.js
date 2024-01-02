/**
 * @param {string[]} sentences
 * @return {number}
 */
const mostWordsFound = (words) => {
	let allSentences = [];
	for(let i = 0; i < words.length; i++) {
		let result = 0;
		for(let j = 0; j < words[i].length; j++) {
			if (words[i].charAt(j) === ' ') result++;
		}
		allSentences.push(result + 1);
	}
	let max = allSentences[0];
	for(let i = 1; i < allSentences.length; i++) {
		if (max < allSentences[i]) { max = allSentences[i]; };
	}
	return max;
}
