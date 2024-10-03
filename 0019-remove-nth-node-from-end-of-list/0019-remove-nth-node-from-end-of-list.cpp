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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int k=count-n;
        if(k==0){
            ListNode*newHead=head->next;
            delete head;
            return newHead;
        }
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(k>0){
          prev=curr;
          curr=curr->next;
          k--;
        }
        prev->next=curr->next;
        delete curr;
        return head;
        
    }
};