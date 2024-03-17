use std::collections::BinaryHeap;

impl Solution {
    pub fn last_stone_weight(stones: Vec<i32>) -> i32 {
        let mut max_heap = BinaryHeap::from(stones);
        while max_heap.len() > 1 {
            let first: i32 = max_heap.pop().unwrap();
            let second: i32 = max_heap.pop().unwrap();
            if first > second {
                max_heap.push(first - second);
            }
            if first < second {
                max_heap.push(second - first);
            }
        }
        if max_heap.is_empty() {
            0
        } else {
            max_heap.pop().unwrap()
        }
    }
}
