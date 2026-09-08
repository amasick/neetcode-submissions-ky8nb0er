ListNode* reverseList(ListNode* l) {
    if (l == nullptr || l->next == nullptr)
        return l;

    ListNode* prev = nullptr;
    ListNode* curr = l;

    while (curr != nullptr) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

ListNode* mergeList(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;

    ListNode* merged = l1;
    ListNode* curr = l1;

    while (l1 != nullptr && l2 != nullptr) {
        ListNode* temp1 = l1->next;
        ListNode* temp2 = l2->next;

        curr->next = l2;
        l2->next = temp1;

        l1 = temp1;
        curr = l1;
        l2 = temp2;
    }

    return merged;
}

class Solution {
public:
    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return;

        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split into two lists
        ListNode* l2 = slow->next;
        slow->next = nullptr;

        // 3. Reverse second half
        l2 = reverseList(l2);

        // 4. Merge alternately
        mergeList(head, l2);
    }
};