#include <iostream>
#include<queue>

using namespace std;
class binary_tree
{
    struct node
    {
        int data;
        node*right;
        node*left;

    };
    node*root=nullptr;
public:
    void add(int value)
    {
        node*new_node=new node;
        new_node->data=value;

        if(root=nullptr)
        {
            root=new_node;
            return;
        }
        node*Temp;
        node*parent;
        while(root!=nullptr)
        {
            Temp=root;
            parent=Temp;
            if(value<=Temp->data)
            {
                Temp=Temp->left;
            }
            else
            {
                Temp=Temp->left;
            }
        }
        if(value<=parent->data)

            parent->left=new_node;

        else
            parent->right=new_node;
    }







    int getmax()
    {
        node*temp=nullptr;
        while(temp->right!=nullptr)
            return temp->data;
    }




        int getMin()
        {
            node*temp=nullptr;
            while(temp->left!=nullptr)
                return temp->data;
        }





        void display_levelorder()
    {
        if(root==nullptr)
            return;

            queue<node*> q;
            q.push(root);
            while(!q.empty())
            {
                node* current=q.front();
                q.pop();
                cout<<current->data<<" ";
                if(current->left !=nullptr)
                    q.push(current->left);
                if(current->right !=nullptr)
                    q.push(current->right);

            }
            cout<<endl;


    }







    int main()
    {
 BinaryTree obj;
    obj.add(12);
    obj.add(3);
    obj.add(5);
    obj.add(16);
    obj.add(15);
    obj.add(1);

    cout<<"Max Data is = "<<obj.getmax()<<endl;
    cout<<"Min Data is = "<<obj.getMin()<<endl;
    cout<<"-------------Level order------------"<<endl;
    obj.display_levelorder();
        return 0;
    }
