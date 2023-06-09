
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)
       return second;
    if(second==NULL)
       return first;
    // first - smaller list and second -> larger lsit   
    if(first->data>second->data)
       swap(first,second);
    Node<int> *ans=first;
    // sorting part by part first sort smaller part of first then swap first and second 
    // now again first becomes smaller 
    while(first!=NULL && second!=NULL)
    {
        Node<int> *temp=NULL;
        while(first!=NULL && first->data<=second->data)
        {
           temp=first;
           first=first->next;
        }
        temp->next=second;
        swap(first,second);
    }   
     return ans;  
}