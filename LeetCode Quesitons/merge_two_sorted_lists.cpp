// Merge Two Sorted Lists
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        if (list1-&gt;val &lt; list2-&gt;val) {
            list1-&gt;next = mergeTwoLists(list1-&gt;next, list2);
            return list1;
        } else {
            list2-&gt;next = mergeTwoLists(list1, list2-&gt;next);
            return list2;
        }
    }
};