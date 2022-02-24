#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};
class linkedlist
{
private:
    
public:
  void insertnode(struct node*,int );
  void printlist(struct node*);
  void reverselist(struct node*);
  void sorting(struct node*);
  
};

void linkedlist::insertnode(struct node *head,int data)
{

    struct node *newnode = new node(data);
    if(head==NULL)
    {
        head==newnode;
        return;
    }

    struct node* temp= head;
    while(temp->link!=NULL)
    {
        temp= temp->link;
    }
    temp->link = newnode;
}


void linkedlist::printlist(struct node *head)
{
    struct node* temp = head;
    if(head ==NULL)
    {
        cout<<"Linkedlist is empty";
        return;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<"";
        temp = temp->link;
    }

}

void linkedlist::reverselist(struct node* head)
{
    struct node* temp = NULL;
    struct node* prev = NULL;

    struct node *current = *head;
    while(current!=NULL)
    {
        temp = current->link;
        current->link = prev;
        prev = current;
        current = temp;

    }
    *head = prev;
    cout<<"After Reversing :";

    while(head!= NULL)
    {
        cout<<head->data<<"";
        head = head->link;
    }
}


void linkedlist::sorting(struct node *head)
{
    struct node *current,*bcurrent;
    current = head;
    bcurrent = head->link;
    int count =0;

    for(int i = count1-1;i>=0;i--)
    {
        for(int j=0;j<count1-1;j++)
        {
            current->data > bcurrent->data
            {
                swap(current->data, bcurrent->info);
            }
            current = bcurrent;
            bcurrent= bcurrent->link;
        }
    }
    


}



int main()
{
    struct node *head = NULL;
    

    int choice;

    linkedlist list;

    cout<<"1.Enter elements to linked list \n";
    cout<<"2. Reverse linked list \n";
    cout<<"3. Sort the linked list \n";
    cin>>choice;

    int data;   

    switch(choice)
    {
        case 1:
        cout<<"Enter data";
        cin>>data;      
        list.insertnode(*head,data);
        break;

        case 2:
        list.reverselist(*head);
        break;

        case 3:
        list.sorting(*head);
        break;

        case 4:
        list.printlist(*head);
        
        default:
        cout<<"Enter right choice ";

    }

    return 0;


}