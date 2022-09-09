#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node* pushElement(struct node *head, int new_data)
{
    node *new_node= new node;
    new_node->data=new_data;
    new_node->next=head;
    head= new_node;
    return(head);
}
int odd(struct node *head)
{
    int count=0;
    struct node *ptr;
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        if(ptr->data%2 ==1)
        {
            count++;
        }
    }
    return count;
}
int main() {
    struct node* head=NULL;
    int n=15;
    int key;
    int count;
    for(int i=0;i<n;i++)
    {
       cin>>key;
       if(key<0)
       {
           break;
        }
        else
        {
            head=pushElement(head,key);
        }
    }
    count=odd(head);
    if(count==0)
    {
        cout<<"No odd number present";
    }
    else
    {
        cout<<count;    
    }
    return 0;
}
