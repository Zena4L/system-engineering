#include "main.hh"

/**
 * @sendMail() - struct with mailer info
 * An object of a struct holds its members in the order they are declared
*/


int main()
{
    // Ad mailer = {
    //     "Clement Owireku-Bogyah",
    //     "05439817137",
    //     "Umat",
    //     "Tarkwa"
    // };
    // sendMail(mailer);
    // LOG("\nPointer ----- struct\n");
   

    // print_addr(&mailer);
    // LOG("\n size of ----- struct\n");
    // LOG(sizeof(mailer));

    createNode();
  
    return 0;
}

void sendMail(Ad mailer)
{


    LOG(mailer.name);
    LOG(mailer.phone);
    LOG(mailer.street);
    LOG(mailer.town);
}
void print_addr(Ad* p)
{
    LOG(p->name);
    LOG(p->phone);
    LOG(p->street);
    LOG(p->town);
}

void createNode()
{
    typedef struct node{
        int data;
        struct node *next;
    } node;
    node *head,*newnode,*temp;

    head = 0;
    int choice = 1;

    while (choice)
    {
       newnode = new node;
       LOG("Enter data : ");
       cin >> newnode->data;
       newnode->next = 0;

       if(head == 0)
       {
        head = newnode = temp;
       }else
       {
        temp -> next = newnode;
        temp = newnode;
       }
       LOG("\nEnter 0 to breakout");
       cin >> choice;
       break;
    }
    temp = head;
    while (temp != 0)
    {
        LOG(temp ->data);
        temp = temp -> next;
    }
    
    
}