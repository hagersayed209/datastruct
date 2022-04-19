#include <iostream>
#define Size 5
using namespace std;
class stackwithlinked
{
    struct node
    {


        int data;
        node*next;
    };
    node*top=NULL;
public:
    void puch(int value)
    {
        node*new_node=new node;
        new_node->data=value;
        new_node->next=top;
        top=new_node;
    }
    int pop()
    {
        int val;
        if(top=NULL)
        {
            cout<<"stack is empty!\n";
            return -1;
        }
        else
        {
            node*first_node;
            top=first_node->next;
            val=first_node->data;
            delete(first_node);
            return val;

        }
    }
    int peek()
    {
        if(top=NULL)
        {
            cout<<"stack is empty!\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
     void display()
    {
        node *current_node;
        if(top=NULL)
        {
            cout<<" stack is empty!\n";
        }
        else
        {
            current_node=top;
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
    stackwithlinked sl1;
    sl1.puch(1);
    sl1.puch(2);
    sl1.puch(3);
    sl1.puch(4);
    sl1.puch(5);
    sl1.display();
    cout<<".............................................\n";
     cout<<"peek = "<< sl1.peek()<<endl;
      cout<<".............................................\n";
    sl1.pop();
   sl1.display();
    cout<<".............................................\n";
   cout<<"peek = "<< sl1.peek()<<endl;

    return 0;
}
