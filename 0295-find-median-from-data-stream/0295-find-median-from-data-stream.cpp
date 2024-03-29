class MedianFinder {
  priority_queue<int> large_heap;
  priority_queue<int, vector<int>, greater<int>> small_heap;

public:
  MedianFinder() {}

  void addNum(int num) {
    large_heap.push(num);

    if (large_heap.size() - small_heap.size() > 1) {
      int popped = large_heap.top();
      large_heap.pop();
      small_heap.push(popped);
    } else if (!small_heap.empty() && small_heap.top() < large_heap.top()) {
        int large_top = large_heap.top();
        int small_top = small_heap.top();
        large_heap.pop();
        small_heap.pop();
        large_heap.push(small_top);
        small_heap.push(large_top);
    }
  }

  double findMedian() {
    if (large_heap.empty() && small_heap.empty())
      return 0.0;

    if (large_heap.size() == small_heap.size()) {
      return (double)(large_heap.top() + small_heap.top()) / 2;
    } else {
      return large_heap.top();
    }
  }
};
