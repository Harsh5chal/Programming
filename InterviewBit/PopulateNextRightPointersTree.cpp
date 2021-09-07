void Solution::connect(TreeLinkNode* A) {
    if(A==NULL){
        return;
    }
    queue<TreeLinkNode*> q;
    q.push(A);
    while(!q.empty()){
        int k=q.size();
        for(int i=0;i<k;i++){
            TreeLinkNode* curr = q.front();
            q.pop();
            if(i==k-1){
                curr->next=NULL;
            }
            else{
                curr->next = q.front();
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
}
