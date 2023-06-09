#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
 int sizeofll(LinkedListNode<int> *head)
    {
        int count=0;
        LinkedListNode<int> *t=head;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        return(count);
    }
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
     if(head==NULL || head->next==NULL)
        {
              return true;
        }
        int size=sizeofll(head);
        stack<int> s;
        LinkedListNode<int> *p=head;
        int i=1;
        while(i<=size/2)
        {
            s.push(p->data);
            p=p->next;
            i++;
        }
        if(size%2!=0)
        {
            p=p->next;
        }
        while(p!=NULL)
        {
            int top=s.top();
            s.pop();
            if(top!=p->data)
            return false;
            p=p->next;
        }
       return true;
}