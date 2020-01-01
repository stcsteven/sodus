/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
    Category: Data Structure
*/
class Solution {
public:
    ListNode* findAddr(ListNode* head, int counter){
        ListNode* now = head;
        while(counter--)
            now = now->next;
        return now;
    }
    
    ListNode* addNode(ListNode* now_head, int value){
        ListNode* new_node = new ListNode(value);
        
        if(now_head==NULL)
            now_head = new_node;
        else{
            ListNode* temp = new_node;
            new_node->next = now_head;
            now_head = temp;
        }
        return now_head;
    }
    
    ListNode* reverse(ListNode* prevHead, int counter){
        ListNode* new_head = NULL; 
        ListNode* now = prevHead;
        while(counter--){
            new_head = addNode(new_head, now->val);
            now = now->next;
        }
        return new_head;
    }
    
    ListNode* lastOf(ListNode* head){
        ListNode* now = head;
        while(now->next!=NULL)
            now = now->next;
        return now;
    }
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(n<=m) 
            return head;
        ListNode* new_head;
        ListNode* normal_tail = findAddr(head, n);
        ListNode* reversed_list = reverse(findAddr(head, m-1), n-m+1);
        ListNode* last_reversed_node = lastOf(reversed_list);
        if(m==1){
            last_reversed_node->next = normal_tail;
            new_head = reversed_list;
        } else{
            ListNode* normal_head = findAddr(head, m-2);
            normal_head->next = reversed_list;
            last_reversed_node->next = normal_tail;
            new_head = head;
        }
        return new_head;
    }
};