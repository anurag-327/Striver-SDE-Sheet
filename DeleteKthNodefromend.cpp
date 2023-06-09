Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
     Node *slowptr=head,*fastptr=head;
    for(int i=0;i<K;i++)
    {
       fastptr=fastptr->next;
    }
    if(!fastptr)
    {
        return head->next;
    }
    while(fastptr && fastptr->next)
    {
        fastptr=fastptr->next;
        slowptr=slowptr->next;
    }
    // slowptr->data=slowptr->next->data;
    slowptr->next=slowptr->next->next;
    return head;
}