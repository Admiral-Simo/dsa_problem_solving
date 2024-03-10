class MinStack {
private:
  std::stack<int> stack;
  std::stack<int> min_history;
public:
  MinStack() {}

  void push(int val) {
      stack.push(val);
      if (!min_history.empty()) {
          val = std::min(val, min_history.top());
      }
      min_history.push(val);
  }

  void pop() {
      if (stack.empty()) return;
      stack.pop();
      min_history.pop();
  }

  int top() {
      return stack.top();
  }

  int getMin() {
      int min = min_history.top();
      return min;
  }
};
