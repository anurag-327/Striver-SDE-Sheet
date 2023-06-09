bool detectCycle(Node *head)
{
	//	Write your code here
    Node *fastptr=head,*slowptr=head;
    while(fastptr && fastptr->next)
    {
        fastptr=fastptr->next->next;
        slowptr=slowptr->next;
        if(slowptr==fastptr)
        return true;
    }
    return false;
}