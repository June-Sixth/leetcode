#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
#include <vector>
using namespace std; 

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

inline ListNode* creatList(const vector<int> a){
    ListNode* head = new ListNode(-1);
    ListNode* p = head;
    for (auto a_temp : a){
        p->next = new ListNode(a_temp);
        p = p->next;
    }
    return head->next;
};

inline void print_list(const ListNode* p){
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }
};

#endif /* LISTNODE_H */
