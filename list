typedef struct Node{ 
    int data;
    strcut Node* next;
} Node;

typedef struct Node* LinkList;
// 插入
int ListInsert(LinkList* L, int i, int e){
    int j = 1;
    LinkList p, s;
    p = *L;
    while(p && j < i){
        p = p->next;
        ++j;
    }
    if (!p && j > i){
        return 0;
    }
    s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return 1;
}

//删除第i个元素，并返回
int ListDelete(LinkList* L, int i, int *e){
    int j = 1;
    LinkList p, s;
    p = *L;
    while(p->next && j < i){
        p = p->next;
        ++j; 	
    }
    if(!(p->next) || j > i) return 0;
    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return *e;
}

