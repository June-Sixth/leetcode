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

#endif /* LISTNODE_H */
