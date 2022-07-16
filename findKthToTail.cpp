#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* findKthToTail(ListNode* pListHead, int k) {
    int n = 0;
    for (auto p = pListHead; p; p = p->next) ++n;
    if(k > n) return nullptr;
    else{
        auto p = pListHead;
        for(int i = 0; i < n - k; ++i){
            p = p->next;
        }
        return p;
    }

}

int main(){
    int a[8] = {1,2,3,4,5};
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
    
    p = findKthToTail(head, 2);
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }

    return 0;
}