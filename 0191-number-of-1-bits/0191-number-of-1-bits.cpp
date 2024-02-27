class Solution {
public:
    uint8_t hammingWeight(uint32_t n) {
        uint8_t res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) ++res;
        }
        return res;
    }
};
