
#include <iostream>
#include <vector>
#include "ListNode.h"

ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* cur = dummy;
    while(l1&&l2){
        if(l1->val<l2->val){
            cur->next = l1;
            l1 = l1->next;
        }
        else{
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    cur->next = (l1? l1:l2);
    return dummy->next;
}


int main(){
    vector<int> a = {1,2,3,5};
    vector<int> b = {4,6};
    ListNode* l1 = creatList(a);
    ListNode* l2 = creatList(b);

    ListNode* merged_list = merge(l2, l1);
    print_list(merged_list);

    return 0;
}