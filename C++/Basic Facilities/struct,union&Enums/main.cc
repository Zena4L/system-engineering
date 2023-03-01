#include "main.hh"

/**
 * @sendMail() - struct with mailer info
 * An object of a struct holds its members in the order they are declared
 * @createNode() - create a singly linked list
*/


int main()
{
    Ad mailer = {
        "Clement Owireku-Bogyah",
        "05439817137",
        "Umat",
        "Tarkwa"
    };
    sendMail(mailer);
    LOG("\nPointer ----- struct\n");
   

    print_addr(&mailer);
    LOG("\n size of ----- struct\n");
    LOG(sizeof(mailer));

    // createNode();
    Point myArr[3] = {{2,3},{1,8},{5,3}};

    int x2 = myArr[1].y;
    LOG(x2);
  
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

// struct Points{
//     vector<Point> elem;
//     Points(Point p0){
//         elem.push_back(p0);
//     }
//     Points(Point p0,Point p1)
//     {
//         elem.push_back(p0);
//         elem.push_back(p1);
//     }
// };

// struct Point{
//     int x,y;
// };

