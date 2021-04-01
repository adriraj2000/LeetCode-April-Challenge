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
    
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL){
            return true;
        }
        
        
        ListNode* slow = head;
        ListNode* fast = head; 
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast){
            slow = slow->next;
        }
        
        slow = reverse(slow);
        fast = head;
        
        while(slow != NULL){
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
};