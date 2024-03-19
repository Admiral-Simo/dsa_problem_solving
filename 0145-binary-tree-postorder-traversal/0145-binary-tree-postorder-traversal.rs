use std::cell::RefCell;
use std::rc::Rc;
use std::vec;
impl Solution {
    pub fn postorder_traversal(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<i32> {
        fn inorder(node: &Option<Rc<RefCell<TreeNode>>>, result: &mut Vec<i32>) {
            if let Some(v) = node {
                let v = v.borrow();
                inorder(&v.left, result);
                inorder(&v.right, result);
                result.push(v.val);
            }
        }
        let mut result = vec![];
        if let Some(v) = root {
            inorder(&Some(v), &mut result);
        }
        result
    }
}
