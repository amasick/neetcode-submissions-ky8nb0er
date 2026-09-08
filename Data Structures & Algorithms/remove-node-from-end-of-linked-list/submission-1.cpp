class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int x) {

        int len = 0;
        ListNode* curr = head;
        ListNode* temp = head;

        // Find length
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }

        // If removing the head
        if (x == len) {
            return head->next;
        }

        // Position of node to remove from beginning
        int steps = len - x;

        ListNode* prev = nullptr;

        while (steps--) {
            prev = curr;
            curr = curr->next;
        }

        // Remove curr
        prev->next = curr->next;

        return head;
    }
};