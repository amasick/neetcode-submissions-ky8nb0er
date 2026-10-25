
class Solution {
public:
    bool dfs(TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr)
            return p == q;

        if (p->val != q->val) return false;

        if (!dfs(p->left, q->left)) return false;
        if (!dfs(p->right, q->right)) return false;

        return true;
    }

    vector<vector<int>> bfs(TreeNode* node) {
        vector<vector<int>> v;

        if (node == nullptr) return {};

        queue<TreeNode*> q;
        q.push(node);

        while (!q.empty()) {
            vector<int> t;
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* temp = q.front();
                q.pop();

                t.push_back(temp->val);

                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }

            v.push_back(t);
        }

        return v;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p, q);
    }
};
