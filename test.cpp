#include<iostream>
#include<conio.h>
using namespace std;
class Node{
    public:
    int roll_no;
    string name;
    string subject;
    float marks, per;
    Node *next_add;
};
class Linked_List
{
    public:
        Node *head =NULL;
        void Insert(){
            int r;
            string n;
            string sub;
            float m;
            cout<<endl<<"Enter Roll Number: ";
            cin>>r;
            cout<<endl<<"Enter Name: ";
            cin>>n;
            cout<<endl<<"Enter The Subject Name: ";
            cin>>sub;
            cout<<endl<<"Enter Marks: ";
            cin>>m;
            Node *new_node = new Node;
            new_node -> roll_no =r;
            new_node -> name = n;
            new_node -> subject = sub;
            new_node -> marks =m;
            new_node -> per = m/100*100;
            new_node -> next_add =NULL;
            if(head ==NULL){
                head = new_node;
            }else{
                Node *ptr = head;
                while (ptr-> next_add !=NULL)
                {
                    ptr = ptr-> next_add;
                }
                ptr -> next_add = new_node;
            }
            cout<<endl<<"New Node Inserted Successfully..."<<endl;
        }
        void Search(){
            if(head==NULL){
                cout<<endl<<"Linked List is Empty...";
            }else{
                int r, found =0;;
                cout<<endl<<"Enter Roll No. For Search: ";
                cin>>r;
                Node *ptr =head;
                while (ptr!=NULL)
                {
                    if(r==ptr->roll_no){
                        cout<<endl<<"Roll No: "<<ptr->roll_no;
                        cout<<endl<<"Name: "<<ptr->name;
                        cout<<endl<<"Subject Name: "<<ptr->subject;
                        cout<<endl<<"Marks: "<<ptr-> per;
                        cout<<endl<<"Per %: "<<ptr->per;
                        found++;
                    }
                    ptr = ptr -> next_add;
                }
                if(found ==0){
                    cout<<endl<<"Search Roll No. "<<r<<" Cant found";
                }
            }
        }
        void Count(){
            if(head ==NULL){
                cout<<endl<<"Linked List is Empty...";
            }else{
                int c=0;
                Node *ptr =head;
                while (ptr!=NULL)
                {
                    c++;
                    ptr = ptr -> next_add;
                }
                cout<<endl<<"Total No. of Nodes: "<<c; 
            }
        }
    void Update(){
            if(head==NULL){
                cout<<endl<<"Linked List is Empty...";
            }else{
                int r, found =0;;
                cout<<endl<<"Enter Roll No. For Updation: ";
                cin>>r;
                Node *ptr =head;
                while (ptr!=NULL)
                {
                    if(r==ptr->roll_no){
                        cout<<endl<<"Enter New Roll Number: ";
                        cin>>ptr->roll_no;
                        cout<<endl<<"Enter New Name: ";
                        cin>>ptr-> name;
                        cout<<endl<<"Subject Name: ";
                        cin>>ptr->subject;
                        cout<<endl<<"Enter New Marks: ";
                        cin>>ptr-> marks; 
                        ptr -> per = ptr -> marks/100*100;
                        // cout<<endl<<"Per %: "<<ptr->per;
                        cout<<endl<<"Record Update Sucsessfully...";
                        found++;
                    }
                    ptr = ptr -> next_add;
                }
                if(found ==0){
                    cout<<endl<<"Search Roll No. "<<r<<" Cant found";
                }
            }
        }
    void Del(){
            if(head==NULL){
                cout<<endl<<"Linked List is Empty...";
            }else{
                int r, found =0;;
                cout<<endl<<"Enter Roll No. For Deletion: ";
                cin>>r;
                if(r==head->roll_no){
                    Node *ptr =head;
                    head = head-> next_add;
                    cout<<endl<<"Recorde Deleted Successfully...";
                    found++;
                    delete ptr;
                    // per = ptr;  
                    // ptr = ptr->next_add;tr;
                }else{
                    Node *pre = head;
                    Node *ptr  = head ->next_add;
                    while (ptr!=NULL)
                    {
                        if(r==ptr->roll_no){
                            pre-> next_add = ptr -> next_add;
                            cout<<endl<<"Recorde Deleted Successfully...";
                            found++;
                            delete ptr;
                            break;
                        }
                        pre = ptr;
                        ptr = ptr->next_add;
                    }
                    
                }
                if(found==0){
                    cout<<endl<<"Update Roll No. "<<r<<" Can't found..."<<endl;
                }
            }
        }
        void show(){
            if(head==NULL){
                cout<<endl<<"Linked List is Empty..."<<endl;

            }else{
                Node *ptr =head;
                while (ptr !=NULL)
                {
                    cout<<endl<<"Roll No.: "<<ptr->roll_no;
                    cout<<endl<<"Name: "<<ptr->name;
                    cout<<endl<<"Marks: "<<ptr->marks;
                    cout<<endl<<"Per % : "<<ptr->per;
                    ptr = ptr->next_add;
                }
            }
        }
};

int main(){
    Linked_List obj;
    p:
    system("cls");
    int choice;
    cout<<"\n\n 1. Insert Record";
    cout<<"\n\n 2. Search Record";
    cout<<"\n\n 3. Count Nodes";
    cout<<"\n\n 4. Update Record";
    cout<<"\n\n 5. Delete Record";
    cout<<"\n\n 6. Show All Record";
    cout<<"\n\n 7. Exit";
    cout<<"\n\n\n Your Choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        system("cls");
        obj.Insert();
        break;
    case 2:
        system("cls");
        obj.Search();
        break;
    case 3:
        system("cls");
        obj.Count();
        break;
    case 4:
        system("cls");
        obj.Update();
        break;
    case 5:
        system("cls");
        obj.Del();
        break;
    case 6:
        system("cls");
         obj.show();
        break;
    case 7:
        system(0);
        break;
    default:
    cout<<"\n\n\n Invalid Choice... Please Try Again...";
        
    }
    getch();
    goto p;
    return 0;
}