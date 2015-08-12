//simple stack using array


#include<iostream>
#define size 20
using namespace std;

class stack{
	public:
	int elements[size];
	int top;
	stack(){
		top=-1;
	}
	void push(int);
	int pop();
	int is_empty();
	int is_full();
};

int stack::is_empty(){
	if(top==-1)
		return 1;
	else
		return 0;
}

int stack::is_full(){
	if(top==size-1)
		return 1;
	else
		return 0;
}

void stack::push(int x){
	if(is_full())
		cout<<"stack is full,no place for element\n";
	else
		elements[++top]=x;
		

}

int stack::pop(){
	if(is_empty())
		cout<<"stack is empty, nothing to pop\n";
	else
		return elements[top--];
}



int main(){
	stack s;
	int num,i,k;
	char ch='y';
	for(i=0;;i++){
		cout<<"Enter a number to push into stack\n";
		cin>>num;
		s.push(num);
		cout<<"Do you want to push more number? Press n for no and y for yes.\n";
		cin>>ch;
		if(ch=='n'||ch=='N')
			break;
		
	}

	for(int j=0;j<=i;j++){
		k=s.pop();
		cout<<k<<"\t";
	}
return 0;
}
