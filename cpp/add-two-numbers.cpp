class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(0);
        int carry=0;
        ListNode* current = root;
        while(l1 && l2 ){
            current->next=new ListNode((l1->val+l2->val+carry)%10);
            carry=(l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
            current=current->next;
        }
        while(l1 ){
            current->next=new ListNode((l1->val+carry)%10);
            carry=(l1->val+carry)/10;
            l1=l1->next;
            current=current->next;
        }
        while(l2 ){
            current->next=new ListNode((l2->val+carry)%10);
            carry=(l2->val+carry)/10;
            l2=l2->next;
            current=current->next;
        }
        if (carry>0){
            current->next = new ListNode(carry);
        }
        return root->next;
    }
};

