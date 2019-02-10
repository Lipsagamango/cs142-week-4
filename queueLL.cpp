//queue using linklist
#include<iostream>
using namespace std;

class Node{
     public:
    int data;
    Node *next;
    };
class queue{
     public:
     Node *front;
     Node *rear;
    queue(){
	front=NULL;
	rear=NULL;
       }
//insert
void insert(int x){
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
    if(front==NULL){
	front=rear=temp;}
     else{
  	rear->next=temp;
        rear=temp;
	  }
	}
//delete
void delet(){
	//if only one node is there
 	if(front==rear)
            front=rear=NULL;
	else
	   front=front->next;
	}
//display
void display(){
	Node *temp=front;
     while(temp){
        cout<<temp->data<<endl;
	temp=temp->next;
        }
    }
//is queue empty
        bool isempty(){
	if(front==NULL){
            cout<<"queue is empty."<<endl;
           }
	else
             cout<<"queue is not empty"<<endl;}	
//top display
	void front_display(){
		cout<<"the front element of the queue= "<<front->data<<endl;

	}
//count items
	void count(){
	Node *current=front;
        int i=0;
	while(current!=NULL){
		i++;
	   current=current->next;
	 	}
          cout<<"no of items is-";
          cout<<i;
     }	     
   };
int main(){
	queue q1;
	for(int i=1;i<5;i++){
	    q1.insert(i);}
	q1.display();cout<<endl;
	q1.front_display();
	q1.count();cout<<endl;
	q1.isempty();
        q1.delet();
	q1.display();cout<<endl;
	
   }	

























         
