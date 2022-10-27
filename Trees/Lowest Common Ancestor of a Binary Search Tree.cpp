/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”*/


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        int currval = root->val;

        if(currval< p->val && currval<q->val) { // both are greater than currnode thn go to right
            return lowestCommonAncestor(root->right,p,q);
        }
            
        if(currval >p->val && currval >q->val){  //both are smaller tha currnode then go to left 
            return lowestCommonAncestor(root->left,p,q);
        }
     return root; // where spilt or node root itself is LCA return it 
    }
};

  //TC-O(HEIGHT OF TREE )
//SC - O(1)
