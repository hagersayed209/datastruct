#include <iostream>
#define Size 5
using namespace std;
class queueWarr
{
    int queuearr[Size],Front=-1,Rear=-1;
public:
    bool isempty()
    {
        if(Front==-1&&Rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    bool isfull()
    {
        if(Front==0&&Rear==Size-1)
        {
            return true;
        }
        else if(Front==Rear+1)
        {
            return true;
        }
        else
        {
            return false;
        }

    };
    void enqueue(int val)
    {
        if(isfull())
        {
           cout<<"queue is full"<<end;
        }
        else
        {
            if(isempty())
            {
                Front=Rear=0;
                queuearr[Rear]=val;
            }
            else if(Rear==Size-1)
            {
                Rear=0;
                queuearr[Rear]=val;
            }
            else
            {
                queuearr[++Rear]=val;
            }
        }
    };
    void dequeue()
    {
        if(isempty())
        {
           cout<<"queue is empty\n";
        }
        else
        {if(Front==Rear){
           Front=Rear=-1;
        }
        else if(Front=Size-1)
            Front=0;

        }
        else
            Front++;
    }
int peek(){
 if(isempty())
        {
           cout<<"queue is empty\n";
           return-1
        }

else{
    return queuearr[Front]
}






}
int display(){
 if(isempty())
        {
           cout<<"queue is empty\n";

        }

else{
   if(Front<=Rear){
    for(int i= Front;i<Rear;i++){
        cout<<queuearr[i]<<"\t";
    }
   }
  else{
    for(int i Front;i<Size;i++){
        cout<<queuearr[i]<<"\t";
    }
    for(int i= Front;i<=Rear;i++){
        cout<<queuearr[i]<<"\t";
    }
   }
}






}
};
int main (){
    queueWarr qa;
    qa.enqueue(1);
    qa.enqueue(2);
    qa.enqueue(3);
    qa.enqueue(4);
    qa.enqueue(5);
    qa.display();
     cout<<".............................................\n";
     qa.dequeue();
      qa.display();
     cout<<".............................................\n";

    cout<<"peek = "<<qa.peek()<<endl;

return 0;








}
