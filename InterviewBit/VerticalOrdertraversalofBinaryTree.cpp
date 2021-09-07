vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    if(!A) return{};
    map<int,vector<int>>mp;
    queue<pair<TreeNode*,int>>q;
    q.push({A,0});

    while(!q.empty()){
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        mp[temp.second].push_back(temp.first->val);
            int hd=temp.second;
            if(temp.first->left)
                q.push({temp.first->left,hd-1});
            if(temp.first->right)
                q.push({temp.first->right,hd+1});
    }
    vector<vector<int>>ans;
    for(auto &it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
