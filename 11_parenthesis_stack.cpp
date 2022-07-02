#include<iostream>

using namespace std;

class stack{
	public:
		int size;
		int top;
		char *arr;
};

int isFull(stack *s){
	if(s->top==s->size-1)
		return 1;
	return 0;	
}

int isEmpty(stack *s){
	if(s->top==-1)
		return 1;
	return 0;
	
}

int push(stack *s,char ch){
	
	s->top++;
	s->arr[s->top]=ch;
	
}

char pop(stack *s){
	char ch=s->arr[s->top];
	s->top--;
	return ch;
}
int display(stack *s){
    if(s->top==-1){
        cout<<"stack is empty"<<endl;
        cout<<"\n_______________________"<<endl;
    }
    else{
        for(int i=0;i<=s->top;i++){
            cout<<s->arr[i]<<" ";
        }
        cout<<"\n_______________________"<<endl;
    }
}



int match(char a,char b)
{
	if(a=='(' && b==')'){
		return 1;
	}
	else	if(a=='{' && b=='}'){
		return 1;
	}
	else	if(a=='[' && b==']'){
		return 1;
	}
	return 0;
}
int main(){
	char str[100];
	cout<<"enter string"<<endl;
	cin.getline(str,100);
	
	//create and initialize the stack
	stack *s=new stack();
	s->top=-1;
	s->size=100;
	s->arr=new char;
	
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='('||str[i]=='{'||str[i]=='['){
			
			if(isFull(s)!=1){
				
				push(s,str[i]);
				
				cout<<"( is pushed"<<endl;
				display(s);
			}
			else{
				cout<<"stack is full"<<endl;
			}
		}else if(str[i]==')'||str[i]=='}'||str[i]==']'){
			if(isEmpty(s)!=1){
				
				char ch=	pop(s);
				if(!match(ch,str[i]))
				{
					cout<<"unbalanced parenthesis"<<endl;
					exit(1);
				}
				cout<<"popped value is "<<ch<<endl;
				display(s);
			}
			else{
				cout<<"parenthesis is unbalanced"<<endl;
				exit(1);
			}
		}
	}
	if(s->top==-1){
		cout<<"parenthesis is balanced"<<endl;
	}
	else
	cout<<"Parenthesis is not balanced"<<endl;
	
	return 0;
}
