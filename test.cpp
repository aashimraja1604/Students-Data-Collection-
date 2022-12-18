#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class Node{
    public:
    int roll_no;
    string name, subject, qualification, phone_no ;
    float marks, per;
    Node *next_add;
};
class Linked_List
{
    public:
        Node *head =NULL;
        void Insert(){
            fstream file;
            file.open("items.txt"),ios::app;
            int r;
            string n; 
            string sub; 
            string qual;
            string ph;
            float m;
            cout<<endl<<"Enter Roll Number: ";
            cin>>r;
            cout<<endl<<"Enter First Name: ";
            cin>>n;
            cout<<endl<<"Enter the Qualification: ";
            cin>>qual;
            cout<<endl<<"Enter The Subject Name: ";
            cin>>sub;
            cout<<endl<<"Enter Marks: ";
            cin>>m;
            cout<<endl<<"Enter your Phone Number: ";
            cin>>ph;
            Node *new_node = new Node;
            new_node -> roll_no =r;
            new_node -> name = n;
            new_node -> qualification = qual;
            new_node -> subject = sub;
            new_node -> marks =m;
            new_node -> per = m/100*100;
            new_node -> phone_no = ph;
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
                        cout<<endl<<"Qualification: "<<ptr->qualification;
                        cout<<endl<<"Subject Name: "<<ptr->subject;
                        cout<<endl<<"Marks: "<<ptr-> per;
                        cout<<endl<<"Per %: "<<ptr->per;
                        cout<<endl<<"Phone Number: "<<ptr->phone_no;
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
                        cout<<endl<<"Enter the Qualification: ";
                        cin>>ptr->qualification;
                        cout<<endl<<"Subject Name: ";
                        cin>>ptr->subject;
                        cout<<endl<<"Enter New Marks: ";
                        cin>>ptr-> marks; 
                        ptr -> per = ptr -> marks/100*100;
                        cout<<endl<<"Enter your New Phone Number: ";
                        cin>>ptr->phone_no;
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
                    cout<<endl;
                    cout<<endl<<"Roll No.: "<<ptr->roll_no;
                    cout<<endl<<"Name: "<<ptr->name;
                    cout<<endl<<"Qualification: "<<ptr->qualification;
                    cout<<endl<<"Subject: "<<ptr->subject;
                    cout<<endl<<"Marks: "<<ptr->marks;
                    cout<<endl<<"Per % : "<<ptr->per;
                    cout<<endl<<"Phone Number: "<<ptr->phone_no;
                    ptr = ptr->next_add;
                    cout<<endl;
                }
            }
        }
};

void ShowFile(){
    string s1;
    string s2;
    string s3;
    string s4;
    string s5;
    string s6;
    string s7;
    string s8;
    string s9;
    string s10;
    string s11;
    string s12;
    string s13;
    string s14;

    ifstream in("Items.txt");

    getline(in, s1);
    getline(in, s2);
    getline(in, s3);
    getline(in, s4);
    getline(in, s5);
    getline(in, s6);
    getline(in, s7);
    getline(in, s8);
    getline(in, s9);
    getline(in, s10);
    getline(in, s11);
    getline(in, s12);
    getline(in, s13);
    getline(in, s14);

    cout<<endl<<endl<<"\t\t Student Record Given Below"<<endl;

    cout<<"\t \t Student Roll Number is: "<<s1<<endl;
    cout<<"\t \t Student Name: "<<s2<<endl;
    cout<<"\t \t Student Qualification is: "<<s3<<endl;
    cout<<"\t \t Student Subject Name is: "<<s4<<endl;
    cout<<"\t \t Student Marks is: "<<s5<<endl;
    cout<<"\t\t Student Percentage is: "<<s6<<endl;
    cout<<"\t \t Student Phone Number is: "<<s7<<endl;


    cout<<endl<<endl<<"\t\t Second Student Record Given Below"<<endl;

    cout<<"\t \t Student Roll Number is: "<<s8<<endl;
    cout<<"\t \t Student Name: "<<s9<<endl;
    cout<<"\t \t Student Qualification is: "<<s10<<endl;
    cout<<"\t \t Student Subject Name is: "<<s11<<endl;
    cout<<"\t \t Student Marks is: "<<s12<<endl;
    cout<<"\t\t Student Percentage is: "<<s13<<endl;
    cout<<"\t \t Student Phone Number is: "<<s14<<endl;
}

int main(){
    Linked_List obj;
    p:
    system("cls");
    int choice;
    cout<<"\t\t Welcome to Student Managment System Application Number";
    cout<<"\n\n\t\t S. No     Function                  Description";
    cout<<"\n\n\t\t   1.      Insert Record             Insert Students Record";
    cout<<"\n\n\t\t   2.      Search Record             Search Students Record";
    cout<<"\n\n\t\t   3.      Count Nodes               Count Number of Record";
    cout<<"\n\n\t\t   4.      Update Record             Update Students Record";
    cout<<"\n\n\t\t   5.      Delete Record             Delete Students Record";
    cout<<"\n\n\t\t   6.      Show All Record           See The All Record";
    cout<<"\n\n\t\t   7.      Exit                      Take Exit From the Record";
    cout<<"\n\n\t\t Your Choice: ";
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