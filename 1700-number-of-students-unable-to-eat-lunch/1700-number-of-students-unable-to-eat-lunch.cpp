class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        std::queue<int> q;
        for (int n : students) {
            q.push(n);
        }
        int i = 0, k = 0;
        while (q.size() != 0 && k != q.size()) {
            if (q.front() != sandwiches[i]) {
                q.push(q.front());
                k++;
            } else {
                i++;
                k = 0;
            }
            q.pop();
        }
        return q.size();
    }
};
