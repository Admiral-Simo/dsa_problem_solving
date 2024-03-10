class MyHashSet {
private:
  std::unordered_map<int, bool> map;

public:
  MyHashSet() {}

  void add(int key) {
      map[key] = true;
  }

  void remove(int key) {
    map.erase(key);
  }

  bool contains(int key) {
      return map[key];
  }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
