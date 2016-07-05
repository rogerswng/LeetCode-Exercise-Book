/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans = 0, curNode = 1, nextNode = 0;
        queue<TreeNode*> q;
        if(root!=NULL) q.push(root);
        while(!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();
            if(cur->left != NULL)
            {
                q.push(cur->left);
                nextNode++;
            }
            if(cur->right != NULL)
            {
                q.push(cur->right);
                nextNode++;
            }
            curNode--;
            if(curNode == 0)
            {
                curNode = nextNode;
                nextNode = 0;
                ans++;
            }
        }
        return ans;
    }
};
