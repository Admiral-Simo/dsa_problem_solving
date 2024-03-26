class Solution {
    public:
        int maxSubArray(vector<int>& array) {
            int best = array[0], sum = array[0];
            for (int i = 1; i < array.size(); i++) {
                sum = max(array[i], sum + array[i]);
                best = max(sum, best);
            }
            return best;
        }
};
