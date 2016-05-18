#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
             int top;
             unsigned int capacity;
             int *array;
       };
struct stack * createStack(int capacity){
             struct stack* stack=(struct stack *)malloc(sizeof(struct stack));
             stack->top=-1;
             stack->capacity=capacity;
             stack->array=(int *)malloc(sizeof(int)*stack->capacity);
             return stack;
       }
       //a+b*c+d -> abc*d++
int isEmpty(struct stack* stack){
                          return stack->top==-1;
}
int isFull(struct stack* stack){
                  return stack->top==stack->capacity;
}
int isOperand(char m){
    
                 return (m>=65&&m<=90)||(m>=97&&m<=122);
}

int push(struct stack* stack,int data){
                if(!isFull(stack)){
                                   stack->array[++stack->top]=data;
                                   }
    }
int pop(struct stack* stack){
                    if(!isEmpty(stack)){
                    return stack->array[stack->top--];
                    }
}
int prec(char ch){
    
              switch(ch){
                         case '+':
                         case '-':return 1;
                         case '*':
                         case '/':return 2;
                         case '^':return 3;
                         default:break;
                         }
                         return 0;
    }
char peek(struct stack* stack){
                  return stack->array[stack->top];
      }
int infixToPostfix(char *input){
    
     int i=0,k=-1;
     char *output;
     struct stack* stack = createStack(strlen(input));
     for(k=-1;i<strlen(input);i++){
                                   if(isOperand(input[i])){
                                                           output[++k]=input[i];  
                                   }
                                   else if(input[i]=='('){
                                        push(stack,input[i]);          
                                   }else if(input[i]==')'){
                                         while(!isEmpty(stack)&&peek(stack)!='('){
                                                                                  output[++k]=pop(stack);
                                         }
                                         if(!isEmpty(stack)&&peek(stack)!='('){
                                                                               return -1;
                                         }else{
                                                                               pop(stack);
                                         }
                                   }else{
                                        while(!isEmpty(stack)&&prec(input[i])>=prec(peek(stack)))
                                        { output[++k]=pop(stack);}
                                        push(stack,input[i]);
                                   }
                                   
                                   }
                                   while(!isEmpty(stack))
                                    output[++k]=pop(stack);
                                    output[++k]='\0';
                                    
                                    printf("%s",output);
    
    }

int main(){
    
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPostfix(exp);
    getchar();
    return 0;
    }
