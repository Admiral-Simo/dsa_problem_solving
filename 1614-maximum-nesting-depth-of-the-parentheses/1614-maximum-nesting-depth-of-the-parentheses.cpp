class Solution {
public:
    int maxDepth(std::string s) {
        int depth = 0;
        int max = 0;
        for(char c : s) {
            if (c == '(') depth++;
            if (c == ')') depth--;
            max = std::max(max, depth);
        }
        return max;
    }
};
