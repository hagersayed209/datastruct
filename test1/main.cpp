#include <iostream>

#include <iostream>

using namespace std;
void Swap (int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
void selection_sort(int arr[],int Size)
{
    int maxIdx;
    for(int i=0; i<Size-1; i++)
    {
        maxIdx=i;
        for(int j=maxIdx+1; j<Size; j++)
        {

            if(arr[j]>arr[maxIdx])
            {
                maxIdx=j;
            }
        }
        Swap(&arr[i],&arr[maxIdx]);
    }

}
void display( int arr[], int Size)
{
    for(int i=0; i<Size; i++)
    {
        cout<<arr[i]<<"\t" ;
    }
     cout<<endl;
}
void Bubble_Sort(int arr[],int Size)
{
    int flag;
    for(int i=1; i<Size; i++)
    {
        flag=0;
        for(int j=0; j<Size-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int line_ser(int arr[],int Size,int item)
{
    for(int i=0; i<Size; i++)
    {
        if(arr[i]==item)

            return i;

    }
    return -1;
}
int Binary_Search(int arr[],int Size,int item)
{
     int start,End,Mid;
    start=0;
    End=Size-1;
    while(start<=End)
    {
        Mid=(start+End)/2;
        if(arr[Mid]==item)
        {
            return Mid;
        }
        else if(item<arr[Mid])
        {
            start=Mid+1;

        }
        else if(item>arr[Mid])
        {
            End=Mid-1;
        }

        else{
           return -1;


        }


    }

}

int main()
{
    int arr[]= {9,3,5,10,1,2,8,7,4,6};
     cout<<"----------selection sort-------"<<endl;
    selection_sort(arr,10);
    display(arr,10);
    cout<<"----------Linear Search-------"<<endl;
    int r=line_ser(arr,10,7);
    if(r == -1)
       cout<<"the number not found\n";
  else

     cout<<"number  "<<arr[r]<<"found at index"<<r<<endl;


    int arr2[]={6,9,3,2};

    cout<<"----------Bubble sort-------"<<endl;
    Bubble_Sort(arr2,4);
      display(arr2,4);
      cout<<"----------Linear Search-------"<<endl;
int res=line_ser(arr2,4,7);
if(res == -1)
cout<<"the number not found\n";
else
    cout<<"number  "<<arr2[res]<<"found at index "<<res<<endl;

 cout<<"---------------------------------------------------------------------------------\n";

int Res=Binary_Search(arr,2,2);
     if(Res==-1)
      {
          cout<<"the number not found"<<endl;
      }
      else{
         cout<<"number  "<<arr2[Res]<<"found at index "<<Res<<endl;
      }

    return 0;
}

