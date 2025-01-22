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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head) return nullptr;
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            int data=gcd(temp->val,temp->next->val);
            ListNode* curr=new ListNode(data);
            curr->next=temp->next;
            temp->next=curr;
            temp=curr->next;
        }
        return head;
    }
};