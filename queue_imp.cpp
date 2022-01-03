#include "queue_header.h"
void Queue::enqueue(string n,int a,int tn,string tc)
{
    Node *temp = new Node();
    temp->name = n;
    temp->age = a;
    temp->ticket_number = tn;
    temp->travel_class = tc;
    temp->next = NULL;
    if(front == NULL)
    {
        rear = temp;
        front = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    cout<<"\nPassenger details enqueued.\n\n";
}
void Queue::dequeue()
{
    if(front==NULL)
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        Node *temp = front;
        cout<<"\n========== DEQUEUED DATA ==========\n\n";
        cout<<"Passenger Name : "<<temp->name<<endl;
        cout<<"Passenger Age : "<<temp->age<<endl;
        cout<<"Ticket Number : "<<temp->ticket_number<<endl;
        cout<<"Travel Class : "<<temp->travel_class<<"\n\n";
        cout<<"====================================\n\n";
        front = front->next;
        free(temp);
    }
}
void Queue::display()
{
    Node *temp = front;
    if(front==NULL)
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        cout<<"\n\n=======PASSENGER DETAILS=======";
        while(temp != NULL)
        {
            cout<<"\nName : "<<temp->name<<endl;
            cout<<"Age : "<<temp->age<<endl;
            cout<<"Ticket Number : "<<temp->ticket_number<<endl;
            cout<<"Travel Class : "<<temp->travel_class<<endl;
            temp = temp->next;
        }
        cout<<"===============================\n\n";
    }
}