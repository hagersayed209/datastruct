#include <iostream>
#include<queue>

using namespace std;
class BinaryTree
{
    private:
    struct node
    {
        int data;
        node* left;
        node* right;
    };
    node* root=nullptr;

    void preorder(node* temp)
    {
        if(temp==nullptr)
            return; //break


        cout<<temp->data<<"  ";
        //send address of left
        preorder(temp->left);
        //send address of right
        preorder(temp->right);
    }

      void inorder(node* temp)
    {
        if(temp==nullptr)
            return; //break

     //send address of left
        inorder(temp->left);
        cout<<temp->data<<"  ";
        //send address of right
        inorder(temp->right);
    }

    void postOrder(node* temp)
    {
          if(temp==nullptr)
            return; //break

        //send address of left
        postOrder(temp->left);
        //send address of right
        postOrder(temp->right);
         cout<<temp->data<<"  ";
    }

   int getMaxhelp(node* temp)
   {
       if(temp->right==nullptr)
        return temp->data;

        else
            return getMaxhelp(temp->right);
   }
   node* removeNode(node* dataOfNode,int data)
   {
       if(dataOfNode==nullptr)
       return dataOfNode;

       else if(data<dataOfNode->data)
        dataOfNode->left=removeNode(dataOfNode->left,data);

        else if(data>dataOfNode->data)
        dataOfNode->right=removeNode(dataOfNode->right,data);

       else{
        if(dataOfNode->left==nullptr)
       {
           node* temp=dataOfNode->right;
           delete dataOfNode;
           return temp;
       }
       else if(dataOfNode->right==nullptr)
       {
           node* temp=dataOfNode->left;
           delete dataOfNode;
           return temp;
       }
       else
       {
           int maxValue=this->getMaxhelp(dataOfNode->left);
           dataOfNode->data=maxValue;
           dataOfNode->left=removeNode(dataOfNode->left,maxValue);

       }

       }
       return dataOfNode;


   }


    public:
        void add(int value)
        {
            node* new_node=new node;
            new_node->data=value;
            new_node->left=nullptr;
            new_node->right=nullptr;


            if(root==nullptr)
            {
                root=new_node;
                return;
            }
            else
            {
             node* temp=root;
            node* parent=nullptr;
            while(temp!=nullptr)
            {
                parent=temp;
                if(value<=temp->data)
                {
                    temp=temp->left;
                }
                else
                {
                    temp=temp->right;
                }

            }
            if(value<=parent->data)
            {
                parent->left=new_node;
            }
            else
            {
                parent->right=new_node;
            }
        }

    }

    int getMax()
    {
        node* temp=root;
        while(temp->right!=nullptr)
        {
            temp=temp->right;
        }
        return temp->data;
    }

    int getMin()
    {
        node* temp=root;
        while(temp->left!=nullptr)
        {
            temp=temp->left;
        }
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

    void display_preorder()
    {
        if(root!=nullptr)
            preorder(root);
    }

    void display_inorder()
    {
        if(root!=nullptr)
            inorder(root);

    }

    void display_postorder()
    {
          if(root!=nullptr)
            postOrder(root);
    }

    void deleteNode(int data)
    {
        root=removeNode(root,data);
    }

};

int main()
{
    BinaryTree obj;
    obj.add(12);
    obj.add(3);
    obj.add(5);
    obj.add(16);
    obj.add(15);
    obj.add(1);

    cout<<"Max Data is = "<<obj.getMax()<<endl;
    cout<<"Min Data is = "<<obj.getMin()<<endl;
    cout<<"-------------Level order------------"<<endl;
    obj.display_levelorder();

    cout<<"-------------Preorder------------"<<endl;
    obj.display_preorder();

     cout<<endl;
     cout<<"-------------Inorder------------"<<endl;
     obj.display_inorder();

     cout<<endl;
     cout<<"-------------PostOrder------------"<<endl;
     obj.display_postorder();



     cout<<endl;
      cout<<"-------------Delete Node -----------"<<endl;
     obj.deleteNode(5);
     obj.display_levelorder();






    return 0;
}
