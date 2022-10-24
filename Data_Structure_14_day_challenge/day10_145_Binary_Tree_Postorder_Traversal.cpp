/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        if (root == NULL)
        {
            return {};
        }
        vector<int> ans;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            TreeNode *curr = s.top();
            if (curr->left)
            {
                s.push(curr->left);
                curr->left = NULL;
            }
            else
            {
                if (curr->right)
                {
                    s.push(curr->right);
                    curr->right = NULL;
                }
                else
                {
                    ans.push_back(curr->val);
                    s.pop();
                }
            }
        }
        return ans;
    }
};