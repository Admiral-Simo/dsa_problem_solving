class Solution {
public:
    std::string kthLargestNumber(std::vector<std::string>& nums, int k) {
        auto compare = [](std::string& a, std::string& b) {
            if (a.length() != b.length()) {
                return a.length() > b.length(); // compare in terms of length of the string
            }
            return a > b; // compare in terms of lexical order
        };

        std::priority_queue<std::string, std::vector<std::string>, decltype(compare)> minHeap(compare);

        for (std::string& s : nums) {
            minHeap.push(s);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};
