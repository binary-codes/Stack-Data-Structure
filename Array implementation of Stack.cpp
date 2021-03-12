#include <bits/stdc++.h>
using namespace std;

#define max 10

int st[max],top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);


void push(int st[], int val){
    if(top==max-1)
    cout<<"Stack Overflow";
    else
    {
        top++;
        st[top]=val;
    }
}

int pop(int st[]){
    int val;
    if(top==-1)
       cout<<"Stack Underflow";
    else{
        val=st[top];
        top--;
        return val;
    }
}


int peek(int st[]){
    if(top==-1)
    {
        cout<<"Stack is empty";
        return -1;
    }
    else return st[top];
}

void display(int st[]){
    if(top==-1)
     cout<<"Underflow";
    else{
        for(int i=top;i>=0;i--){
            cout<<st[i]<<" ";
            cout<<endl;
        }
    }
}

int main() {
	// your code goes here
	
	int val,optn;
	do{
	    cout<<"\n******Main Menu******";
	    cout<<"\n1. Push";
	    cout<<"\n2. Pop";
	    cout<<"\n3. Peek";
	    cout<<"\n4. Display";
	    cout<<"\n5. Exit";
	    cout<<"\nEnter your Option: ";
	    cin>>optn;
	    switch(optn){
	        case 1: cout<<"Enter number to be pushed: ";
	                cin>>val;
	                push(st,val);
	                break;
	       case 2: val=pop(st);
	               if(val!=-1)
	               cout<<"The poped value is: "<<val;
	               break;
	       case 3:  val=peek(st);
	               if(val!=-1)
	               cout<<"The peeked value is: "<<val;
	               break;
	       case 4: display(st);
	               break;
	    }
	}while(optn!=5);

	return 0;
}

