/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  class ListNode{
//     int val;
//     ListNode *next;
//     ListNode(int val){
//         this->val=val;
//         ListNode=nullptr;

//     }
//     ListNode(int val,ListNode* nxt){
//         this->val=val;
//         this->next=nxt;
//     }
//     ListNode(){
            // this->val=0;
//         this->next=nullptr;
//     }

//     ListNode* appendLists(ListNode *a,ListNode*b){
//         ListNode* aEnd=a;
//         while(aEnd->next!=nullptr){
//             aEnd=aEnd->next;
//         }
//         aEnd->next=b;
//         return a;
//     }
//  }
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        if(slow==nullptr)return false;
        if(fast->next==nullptr) return false;

        while(slow!=nullptr and fast!=nullptr)
        {   
               if(slow->next!=nullptr)
               slow=slow->next;
               else{
                break;
               }
              


              if(fast->next!=nullptr && fast->next->next!=nullptr)
               fast=fast->next->next;
               else{
                break;
               }
            

            if(slow==fast)return true;
        }
        return false;

        
    }
};
