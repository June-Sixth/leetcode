#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplication(ListNode* head) {
    ListNode* new_head = new ListNode(-1);
    new_head->next = head;
    ListNode* cur = new_head;
    while(cur){
        auto f = cur->next;
        while(f && f->next && f->next->val == f->val){
            auto c = f->next;
            while(c && c->val == f->val) c = c->next;
            f = c;
        }
        cur->next = f;
        cur = cur->next;
    }
    return new_head->next;
}

int main(){
    int a[8] = {1,1,2,3,3,4,4,5};
    ListNode *head, *p, *s;
    head = new ListNode(a[0]);
    head->next = NULL;
    p = head;
    for (int i = 1; i < sizeof(a)/sizeof(a[0]); i++){
        s = new ListNode(a[i]);
        s->next = NULL;
        p->next = s;
        p = p->next;
    }

    
    p = deleteDuplication(head);
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
}