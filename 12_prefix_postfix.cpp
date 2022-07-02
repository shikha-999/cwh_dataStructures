
#include<iostream>

using namespace std;

class stack_arr{
	public:
	int top;
	int size;
	char *arr;
};

int isEmpty(stack_arr *s){
	if(s->top==-1)
		return 1;
	return 0;
}

int push(stack_arr *s,char exp){
	s->top++;
	s->arr[s->top]=exp;
}

int pop(stack_arr *s){
	char ch=s->arr[s->top];
	s->top--;
	return ch;
}

int prec(char op){
	if(op=='*'||op=='/')
	return 2;
	else if(op=='+'||op=='-')
	return 1;
	else
	return -1;
}

int stackTop(stack_arr *s){
	char st= s->arr[s->top];
}

int infix_postfix(stack_arr *s, char infix[])
{
	char *postfix=new char;
	
	int i=0,j=0;
	while(infix[i]!='\0'){
		if(infix[i]>=65 && infix[i]<=90 || infix[i]>=97 && infix[i]<=122){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else{
			if(prec(infix[i]) > prec(stackTop(s)))
			{
				push(s,infix[i]);
				i++;
			}
			else
			{
			postfix[j]=pop(s);
			j++;
			}
		}
	}
	while(!isEmpty(s)){
		postfix[j]=pop(s);
		j++;
	}
	postfix[j]='\0';

	i=0;
	cout<<"postfix expression is ";
    while(postfix[i]!='\0'){
        cout<<postfix[i];
        i++;
    }
    cout<<"\n_______________________"<<endl;
}


int main(){
	stack_arr *s=new stack_arr();
	s->top=-1;
	s->size=100;
	s->arr=new char;

	char exp[100];
	
	cout<<"enter expression"<<endl;
	cin.getline(exp,100);
	
	infix_postfix(s,exp);
	
	return 0;
}



