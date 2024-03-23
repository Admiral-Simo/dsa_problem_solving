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
        std::string result;
        if (truncate_index != -1) {
            // that means that we have to push characters
            // to the result from the s till the truncate_index
            for (int i = 0; i < truncate_index; i++) {
                result.push_back(s[i]);
            }
        } else {
            return s;
        }
        return result;
    }
};
