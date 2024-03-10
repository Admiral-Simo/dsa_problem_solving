class Node {
public:
  std::string url;
  Node *prev;
  Node *next;
  Node(const std::string &url) : url(url), prev(nullptr), next(nullptr) {}
};

class BrowserHistory {
  Node *head;
  Node *tail;

public:
  BrowserHistory(std::string homepage) { head = tail = new Node(homepage); }

  void visit(std::string url) {
    if (tail->next) {
      // clean the next memory after pointing to next url
      Node *curr = tail->next;
      while (curr != nullptr) {
        Node *tmp = curr;
        curr = curr->next;
        delete tmp;
      }
    }
    // make the new node
    Node *newNode = new Node(url);
    // change the prev pointer to point to the current tail
    newNode->prev = tail;
    // point to it then update the tail to the newNode
    tail->next = newNode;
    tail = newNode;
  }

  std::string back(int steps) {
    for (int i = 0; i < steps; i++) {
      if (tail->prev == nullptr) break;
      tail = tail->prev;
    }
    return tail->url;
  }

  std::string forward(int steps) {
      for(int i = 0; i < steps; i++) {
          if (tail->next == nullptr) break;
          tail = tail->next;
      }
      return tail->url;
  }
};
