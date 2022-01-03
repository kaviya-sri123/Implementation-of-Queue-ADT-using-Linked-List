#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
    public:
        int ticket_number,age;
        string name,travel_class;
        Node *next;
};
class Queue
{
    public:
        Node *front,*rear;
        Queue()
        {
            front = NULL;
            rear = NULL;
        }
        void enqueue(string n,int a,int tn,string tc);
        void dequeue();
        void display();
};