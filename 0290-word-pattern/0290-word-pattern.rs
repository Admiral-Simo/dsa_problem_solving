use std::collections::HashMap;

impl Solution {
    pub fn word_pattern(pattern: String, s: String) -> bool {
        let pattern_chars: Vec<char> = pattern.chars().collect();
        let words: Vec<&str> = s.split_whitespace().collect();

        if pattern_chars.len() != words.len() {
            return false;
        }

        let mut pattern_to_word: HashMap<char, &str> = HashMap::new();
        let mut word_to_pattern: HashMap<&str, char> = HashMap::new();

        for (i, &char) in pattern_chars.iter().enumerate() {
            let word = words[i];

            if let Some(&prev_word) = pattern_to_word.get(&char) {
                if prev_word != word {
                    return false;
                }
            } else {
                pattern_to_word.insert(char, word);
            }

            if let Some(&prev_char) = word_to_pattern.get(word) {
                if prev_char != char {
                    return false;
                }
            } else {
                word_to_pattern.insert(word, char);
            }
        }

        true
    }
}
