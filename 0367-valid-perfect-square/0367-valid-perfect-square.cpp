class Solution {
public:
    bool isPerfectSquare(int num) {
        double square_root = std::sqrt(num);
        if (std::floor(square_root) == square_root) return true;
        return false;
    }
};
