class MyCircularQueue {
  int size;
  int front;
  int rear;
  int *arr;

public:
  MyCircularQueue(int k) {
    if (k < 1) {
      size = 1;
    } else {
      size = k;
    }
    rear = front = -1;
    arr = new int[size];
  }

  bool enQueue(int value) {
      if (isFull()) {
          return false;
      } else if (isEmpty()) {
          front = rear = 0;
      } else {
          rear = (rear + 1) % size;
      }
      arr[rear] = value;
      return true;
  }

  bool deQueue() {
      if (isEmpty()) return false;
      else if (front == rear) front = rear  = -1;
      else front = (front + 1) % size;
      return true;
  }

  int Front() {  return isEmpty() ? -1 : arr[front]; }

  int Rear() {  return isEmpty() ? -1 : arr[rear]; }

  bool isEmpty() {
      return front == -1 && rear == -1;
  }

  bool isFull() { return (rear + 1) % size == front; }
};
