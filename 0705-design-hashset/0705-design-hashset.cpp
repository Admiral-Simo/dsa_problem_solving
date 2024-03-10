class MyHashSet {
private:
    std::vector<int> hashSet;
public:
  MyHashSet() {}

  void add(int key) {
    if (!contains(key)) {
        hashSet.push_back(key);
    }
  }

  void remove(int key) {
      int index = -1;
      for (int i = 0; i < hashSet.size(); i++) {
        if (hashSet[i] == key)  index = i;
      }
      if (index != -1) {
          hashSet.erase(hashSet.begin() + index);
      }
  }

  bool contains(int key) {
      for (int n : hashSet) {
         if (key == n) return true;
      }
      return false;
  }
};
