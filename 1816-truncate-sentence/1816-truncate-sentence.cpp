class Solution {
public:
    std::string truncateSentence(std::string s, int k) {
        // i need to count until i find the space k times and then i return that index to truncate from
        int space_count = 0;
        int truncate_index = -1;
        for (int i = 0; i < s.size(); i++) {
            // checking the character if equal to space increase the count
            if (s[i] == ' ') {
                space_count++;
            }
            if (space_count == k) {
                truncate_index = i;
                break;
            }
        }
        if (truncate_index != -1) {
            s = s.substr(0, truncate_index);
        }
        return s;
    }
};
