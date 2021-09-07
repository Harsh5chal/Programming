void gen(TreeNode* A, vector<vector<int>> &ans, int i) {
 if(A==NULL)return;
 if(i==ans.size()) {
     ans.push_back(vector<int>());
 }
 ans[i].push_back(A->val);
 gen(A->left, ans, i+1);
 gen(A->right, ans, i);
}

vector<int> Solution::solve(TreeNode* A) {
vector<vector<int>> ans;
gen(A, ans, 0);
vector<int> res;
for(auto i:ans) {
    for(auto j:i) {
        res.push_back(j);
    }
}
return res;
}
