class MyLinkedList {
private:
  struct Node {
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
  };
  Node *head;
  Node *tail;
  int size;

public:
  MyLinkedList() {
    head = tail = nullptr;
    size = 0;
  }

  ~MyLinkedList() {
    Node *current = head;
    while (current != nullptr) {
      Node *next = current->next;
      delete current;
      current = next;
    }
    head = tail = nullptr;
    size = 0;
  }

  int get(int index) {
    if (index < 0 || index >= size) {
      return -1;
    }
    Node *current = head;
    for (int i = 0; i < index; i++) {
      current = current->next;
    }
    return current->val;
  }

  void addAtHead(int val) {
    Node *newNode = new Node(val);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  void addAtTail(int val) {
    Node *newNode = new Node(val);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }

  void addAtIndex(int index, int val) {
    if (index < 0 || index > size) {
      return;
    }
    if (index == 0) {
      addAtHead(val);
      return;
    }
    if (index == size) {
      addAtTail(val);
      return;
    }
    Node *newNode = new Node(val);
    Node *current = head;
    for (int i = 0; i < index - 1; i++) {
      current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    size++;
  }

  void deleteAtIndex(int index) {
    if (index < 0 || index >= size) {
      return;
    }
    if (index == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        size--;
        if (size == 0) {
            tail = nullptr;
        }
        return;
    }
    Node* current = head;
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    Node* tmp = current->next;
    current->next = tmp->next;
    delete tmp;
    size--;
    if (index == size) {
        tail = current;
    }
  }
};
