#include "ListNode.h"

class Solution {
public:
    ListNode *entryNodeOfLoop(ListNode *head) {//快慢指针
        if(!head || !head->next) return 0;
        ListNode *first = head, *second = head;
        while(first && second){
            first = first->next;
            second = second->next;
            if(second) second = second->next;//移动两次
            else return 0;//no loop
            if(first == second){
                first = head;//退回head
                while(first != second){
                    first = first->next;
                    second = second->next;
                }
                return first;
            }
        }
        return nullptr;
    }
};