// Intersection of Two Linked Lists
// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
// For example, the following two linked lists begin to intersect at node c1:
// The test cases are generated such that there are no cycles anywhere in the entire linked structure.
// Note that the linked lists must retain their original structure after the function returns.
// You may assume there are no cycles anywhere in the entire linked structure.
// Advance the two pointers. If a pointer reaches the end of a list, redirect it to the head of the other list. When they meet, that's the intersection.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        ListNode* a = headA;
        ListNode* b = headB;
        while(a != b) {
            a = a ? a-&gt;next : headB;
            b = b ? b-&gt;next : headA;
        }
        return a;
    }
};