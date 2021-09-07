if(!A && !B) return 1;
if(!A || !B) return 0;
if(A->val != B->val) return 0;
return isSameTree(A->left,B->left) && isSameTree(A->right,B->right);
