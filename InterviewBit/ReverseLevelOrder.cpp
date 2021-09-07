void revlvl(TreeNode *A, vector<int> &res){
    queue<TreeNode *> nodes;
    if(A == nullptr) return;
    nodes.push(A);
    while(!nodes.empty()){
        int n = nodes.size(); // traverse each lvl at a time
        for(int i = 0; i<n; i++){
            TreeNode * curr = nodes.front();
            nodes.pop(); res.push_back(curr->val);
            if(curr->right) nodes.push(curr->right);
            if(curr->left) nodes.push(curr->left); // root->right->left (reverse lvl order)
        }
    }
}

vector<int> Solution::solve(TreeNode* A) {
    vector<int> res;
    if(A == nullptr) return res; // sanity check
    revlvl(A, res);
    reverse(res.begin(), res.end());
    return res;
}
