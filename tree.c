//树的结构体
typedef struct TreeNode {
    int data;
    struct TreeNode* lchild;
    struct TreeNode* rchild; 
} TreeNode, *Tree;

// 前序遍历   根->左->右
void PreTraver(Tree T){
    if(NULL == T) return;
    printf("%d",T->data);
    PreTraver(T->lchild);
    PreTraver(T->rchild);
}
// 中序遍历 左->根->右
void InTraver(Tree T){
    if(NULL == T) return;
    InTraver(T->lchild);
    printf("%d",T->data);
    InTraver(T->rchild);
}

// 后序遍历 左->右->根
void PostTraver(Tree T){
    if(NULL == T) return;
    PostTraver(T->lchild);
    PostTraver(T->rchild);
    printf("%d",T->data);
}
