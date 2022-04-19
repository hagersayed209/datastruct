#include <iostream>
#define Size 5
using namespace std;
class queuewlinked
{
    struct node
    {
        int data;
        node*next;
    };
    node*Front=NULL;
    node*Rear=NULL;
public:
    void enqueue(int value)
    {
        node*new_node=new node;
        new_node->data=value;
        new_node->next=NULL;
        if(Front==NULL)
        {
            Front=Rear=new_node;

        }
        else
        {
            Rear->next=new_node;
            Rear=new_node;

        }
    }
    void dequeue()
    {
        if(Rear==NULL)
        {
            cout<<"queue is empty\n";
        }
        else if(Front==Rear)
        {
            node*first_node=Front;
            Front=Rear=NULL;
            delete(first_node);
        }
        else
        {
            node*first_node=Front;
            Front= Front->next;
            delete(first_node);

        }
    }
    int peek()
    {
        if(Rear==NULL)
        {
            cout<<"queue is empty\n";
            return -1;
        }
        else
        {
            return Front->data;
        }
    }
    void display()
    {
        if(Front==NULL)
        {
            cout<<"queue is empty\n";
        }
        else
        {
            node *current_node;
            while(current_node!=NULL)
            {
                cout<<current_node->data<<endl;

                current_node=current_node->next;
            }
        }
    }
};



int main()
{
    queuewlinked ql;
    ql.enqueue(1);
    ql.enqueue(2);
    ql.enqueue(3);
    ql.enqueue(4);
    ql.enqueue(10);
    ql.display();
    cout<<".............................................\n";
    ql.dequeue();
    ql.display();
    cout<<".............................................\n";

    cout<<"peek = "<<ql.peek()<<endl;

    return 0;
}
