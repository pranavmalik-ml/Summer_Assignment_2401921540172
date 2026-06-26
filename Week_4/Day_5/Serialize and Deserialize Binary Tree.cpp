class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "#";
        string result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            if (node) {
                result += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            } else {
                result += "#,";
            }
        }
        return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data == "#") return nullptr;
        stringstream ss(data);
        string token;
        vector<string> nodes;
        while (getline(ss, token, ',')) {
            nodes.push_back(token);
        }

        TreeNode* root = new TreeNode(stoi(nodes[0]));
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        while (!q.empty() && i < nodes.size()) {
            TreeNode* node = q.front(); q.pop();
            if (nodes[i] != "#") {
                node->left = new TreeNode(stoi(nodes[i]));
                q.push(node->left);
            }
            i++;
            if (i < nodes.size() && nodes[i] != "#") {
                node->right = new TreeNode(stoi(nodes[i]));
                q.push(node->right);
            }
            i++;
        }
        return root;
    }
};