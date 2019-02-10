#include<iostream>
using namespace std;

class Node{                  //declaration of the Node
	public:
	int data;
	Node *next;
		};
class stack{        //stack prototype
    public:
	Node *top;
	stack(){
	top=NULL;}

//pushes on top
	void push(int x){   //push function to insert the element in the stack
	Node *temp;
	temp=new Node;
	temp->data=x;
	temp->next=NULL;
	if(top!=NULL)                        //making the new element inserted as top
		temp->next=top;
	    top=temp;
	}
//deletion
	void pop(){
	Node *temp;
	if(top==NULL){            //condition to check whether the stack is null
	cout<<"empty stack"<<endl;         
		return;
		}
	temp=top;
	top=top->next;
	delete temp;                   //deletion of the top and changing the top to the element below the previous top
	}
//is stack empty
        bool isempty(){             //this function check whether the top is empty or not.if the top is empty then there is no element 
	if(top==NULL){
            cout<<"stack is empty."<<endl;
           } 
	else
             cout<<"stack is not empty"<<endl;}	
//display
	void display(){
	Node *temp1=top;
	while(temp1!=NULL){                 //iterative loop to display all the element of the stack 
	  cout<<temp1->data; 
	  temp1=temp1->next;
	}
   }
//top display
	void top_display(){               //this funtion only display the top of the element.we have just print out out the data part of the top
		cout<<top->data;
		
	}
//count items
	void count(){
	Node *current=top;
        int i=0;
	while(current!=NULL){                //function which iteratate from the top to to bottom(element first inserted)
		i++;
	   current=current->next;
	 	}
          cout<<"number of item in the stack is = "<<i;
     }	
   };
//main function to check all the stack operations
int main(){
	stack s1;
	for(int i=1;i<5;i++){
	    s1.push(i);}
	s1.display();cout<<endl;
	s1.top_display();cout<<endl;
	s1.count();cout<<endl;
	s1.isempty();
	s1.pop();
	s1.display();cout<<endl;
	s1.top_display();cout<<endl;
	s1.pop();
	s1.display();cout<<endl;
	s1.pop();
	s1.display();cout<<endl;
	s1.pop();
	s1.display();cout<<endl;
	s1.isempty();
	
   }	
