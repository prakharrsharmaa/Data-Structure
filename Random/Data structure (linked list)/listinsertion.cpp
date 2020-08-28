#include<bits/stdc++.h>
#include<process.h>
using namespace std;
struct Node
{
     int info;
     Node *next;
 } *start,*newptr,*save,*ptr;
 Node*CREATE_new_Node();
 void Insert_beg(Node*);
 void display(Node*);

int main()
{
     start =NULL;
     int inf;
     char ch='Y';
     while(ch=='y'||ch=='Y')
     {
          system("cls");
          cout<<"enter the infomartion of new Node";
          cin>>inf;
          cout<<"creating a new Node";
          system("pause");
          newptr=CREATE_New_Node(inf);
          if(newptr !=NULL)
          {
               cout<<"\n new Node created successfully press enter to continue";
               system("pause");
          }
          else
          {
              cout<<"\n cannot create new Node";
              system("pause");
              exit(1);
          }
          cout<<"\n\n now inserting this Node in the begninning of list";
          cout<<"press enter to continue";   
          system("pause");
          Insert_beg(newptr);
          cout<<"\nnow this is list";
          display(start);
          cout<<"\n press y to continue ";
          cin>>ch;
     }
     return 0;
}
Node* CREATE_New_Node(int n)
{
    ptr=new Node;
    ptr-> info =n;
    ptr->next=NULL;
    return ptr;
}
void Insert_beg(Node*np)
{
if(start==NULL)
 start=np;
 else
 {
     save=start;
     start=np;
     np->next=save;
 }
}

void display(Node*np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"->";
        np=np->next;
    }
    cout<<"!!\n";
}