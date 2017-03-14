//���Ľṹ��
typedef struct TreeNode {
    int data;
    struct TreeNode* lchild;
    struct TreeNode* rchild; 
} TreeNode, *Tree;

// ǰ�����   ��->��->��
void PreTraver(Tree T){
    if(NULL == T) return;
    printf("%d",T->data);
    PreTraver(T->lchild);
    PreTraver(T->rchild);
}
// ������� ��->��->��
void InTraver(Tree T){
    if(NULL == T) return;
    InTraver(T->lchild);
    printf("%d",T->data);
    InTraver(T->rchild);
}

// ������� ��->��->��
void PostTraver(Tree T){
    if(NULL == T) return;
    PostTraver(T->lchild);
    PostTraver(T->rchild);
    printf("%d",T->data);
}
