class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode * temp = head;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }

        if(n==count){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp = head;
        ListNode*prev = nullptr;
        for(int i = 1 ; i<= count-n ; i++){
            prev = temp;
        temp = temp->next;
        }
        prev->next = temp->next;
    delete temp;
    return head;
        
    }
};