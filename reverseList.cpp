#include "ListNode.h"

ListNode* reverseList(ListNode* head) {
    ListNode* pre = nullptr;
    
    while(head){
        ListNode* after = head->next;
        head->next = pre;
        pre = head;
        head = after;
    }
    return pre;

}

int main(){
    int a[5] = {1,2,3,4,5};
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
    
    p = reverseList(head);
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
}