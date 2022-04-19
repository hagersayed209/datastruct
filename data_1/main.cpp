#include <iostream>

using namespace std;

    struct node
    {
        int data;
    node*next;
    };
    node*head=NULL;

    void insertlist(int value)
    {
        node* new_node,*last;
        new_node =new node;
        new_node->data = value;

        if(head==NULL)
        {
            head=new_node;
            new_node->next=NULL;

        }
        else
        {
            last=head;
            while(last!=NULL )
            {
                last->next=new_node;
                new_node->next=NULL;
            }
        }

    }
    void displaylist()
    {
        node* current_node;
        if(head=NULL)
        {
            cout<<" list is empty!\n";
        }
        else
        {
            current_node=head;
            while(current_node!=NULL)
            {
                cout<<current_node->data;
                cout<<endl;
                current_node=current_node->next;
            }
        }
    }
    void deletelist(int value)
    {
        node*current,*prev;
        current=head;
        prev=head;
        if(current->data==value)
        {
            head=current->next;
            free(current);
        }
        else
        {
          while(current->data!=value)
          {
              prev=current;
              current=current->next;

          }
          prev->next=current->next;
          free(current);
        }
    }
    void inserbegin(int value)
    {
        node*new_node=new node;
        new_node->data=value;
        new_node->next=head;
        head=new_node;
    }
    void deletebegin(int value)
    {
       if(head=NULL)
        {
            cout<<" list is empty!\n";
        }
        else
        {
            node*first_node;
            head=first_node->next;
            delete(first_node);
        }
    }
    void deleteend()
    {
        node*end_node,*prev;
        if(head=NULL)
        {
            cout<<" list is empty!\n";
        }
        else if(head->next=NULL)
        {
              free(head);
              head=NULL;
        }
        else
        {
            node*current=head;
            while(current->next->next!=NULL)
            {
                current=current->next;
            }
            free(current->next);
            current->next=NULL;
        }

    }



int main()
{

   insertlist(1);
    insertlist(2);
    insertlist(3);
    insertlist(4);
   displaylist();

    return 0;
}
