// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {
    pub fn inorder_traversal(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<i32> {
        fn inorder(node: &Option<Rc<RefCell<TreeNode>>>, result: &mut Vec<i32>) {
            if let Some(v) = node {
                let v = v.borrow();
                inorder(&v.left, result);
                result.push(v.val);
                inorder(&v.right, result);
            }
        }
        let mut result = vec![];
        if let Some(v) = root {
            inorder(&Some(v), &mut result);
        }
        result
    }
}
