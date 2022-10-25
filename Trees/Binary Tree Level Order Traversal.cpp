/*Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level)

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
*/

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > ans;  //vector of vector
        if(root ==NULL) return ans; //if tree not there empty
        queue<TreeNode*> q;   // queue 
        q.push(root); //put root node in q

        while(!q.empty()){ 
            int size = q.size(); // currently how many ele are there in Q
            vector<int> level;

            for(int i = 0 ; i <size ;i++){
                TreeNode *node= q.front();
                q.pop();

                if(node->left != NULL ) q.push(node->left);
                if(node->right != NULL) q.push(node->right);

                level.push_back(node->val);
            }
            ans.push_back(level);

        }
        return ans;
}
//TC=O(N)
//SC-O(N) of queue (we dont consider ans because we are storing and returning)
