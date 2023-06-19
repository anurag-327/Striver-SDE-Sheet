/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node *slow=head;
    Node *fast=head;
    bool loop=false;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            loop=true;
            break;
        }
    }
    if(loop)
    {
        fast=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
    return NULL;
}