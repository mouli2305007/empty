/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    struct ListNode *p=head;
    struct ListNode *q=head->next;

    while(q->next !=NULL && q->next->next!=NULL){
        p=p->next;
        q=q->next->next;
    }
    struct ListNode *temp=p->next;

    p->next=temp->next;
    free(temp);
    return head;

}