class MyStack {
private:
  std::queue<int> q;

public:
  MyStack() {}

  void push(int x) {
      q.push(x);
      int size = q.size();
      while (size > 1) {
          q.push(q.front());
          q.pop();
          size--;
      }
  }

  int pop() {
      int element_popped = q.front();
      q.pop();
      return element_popped;
  }

  int top() {
      return q.front();
  }

  bool empty() { return q.empty(); }
};
