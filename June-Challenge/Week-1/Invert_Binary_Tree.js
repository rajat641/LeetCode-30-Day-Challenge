/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var invertTree = function(root) {
    if(root==null){
        return null;
    }
    var l = root.left;
    var r = root.right;
    root.left = r;
    root.right = l;
    invertTree(root.right);
    invertTree(root.left);
    return root;
    
};
