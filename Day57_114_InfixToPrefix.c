#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 
#include<conio.h> 
char prefix[100]; char infix[100];
char opstack[100]; int j, top = 0;

void insert_beg(char ch){ int k;
if(j == 0){
prefix[0] = ch;
}else{
for(k = j + 1; k > 0; k--){
prefix[k] = prefix[k - 1];
}
prefix[0] = ch;
}
j++;
}

int less_Priority(char op, char op_at_stack){ int k;
int pv1; int pv2;
char operators[] = {'+','-','*','/','%','^',')'}; int priority_value[] = {0,0,1,1,2,3,4};
if(op_at_stack == ')'){ return 0;
}
for( k = 0; k<6; k++){
if(op == operators[k]){
pv1 = priority_value[k];
}
}
for(k = 0; k < 6; k++){
if(op_at_stack == operators[k]){
pv2 = priority_value[k];
}
}
if(pv1 < pv2){ return 1;
}else{
return 0;
}
}

void push(char op){ if(top == 0){
opstack[top] = op; top++;
}else{
if(op != ')'){
while(less_Priority(op, opstack[top - 1]) == 1 && top > 0){ insert_beg(opstack[--top]);
}
}
opstack[top] = op; top++;
}
}
void pop(){
while(opstack[--top] != ')'){ insert_beg(opstack[top]);
}
}
void main(){
char ch;
int l, i = 0;
printf("\n Enter Infix Expression : "); gets(infix);
l = strlen(infix); while(l > 0){
ch = infix[--l]; switch(ch){
case ' ' : break;
case ')':
case '+':
case '-':
case '*':
case '/':
case '^':
case '%':
push(ch); break;
case '(':
pop(); break;
default :
insert_beg(ch);
}
}
while(top > 0){
insert_beg(opstack[--top]); j++;
}
prefix[j] = '\0';
printf("\n Infix Expression : %s",infix);
printf("\n prefix Expression : %s",prefix);
}
