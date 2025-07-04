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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        ListNode* curr1=head;
        int count=1;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int mid=count/2;
        int r=1;
        if(count%2==0){
            while(r!=mid){
            r++;
            curr1=curr1->next;
            }
        return curr1;
        }
        else{
            while(r!=mid+1){
            r++;
            curr1=curr1->next;
        }
        return curr1;
        }
        
    }
};