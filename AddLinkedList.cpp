/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/



Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    Node *dummy=new Node();
    Node *temp=dummy;
    int carry=0,sum=0;
    while(l1!=NULL || l2!=NULL)
    {
        sum=0;
        if(l1!=NULL)
        {
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node *newnode=new Node(sum%10);
        temp->next=newnode;
        temp=temp->next;
    }
    // if carry is left at last
    if(carry!=0)
    {
      Node *newnode=new Node(carry);
      temp->next=newnode;
      temp=temp->next;  
    }
    return dummy->next;
}
