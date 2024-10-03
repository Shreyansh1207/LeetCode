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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int mid=count/2;
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(mid>0){
            prev=curr;
            curr=curr->next;
            mid--;
        }
        prev->next=curr->next;
        delete curr;
        return head;

            
        
    }
};