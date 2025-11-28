//Conversion from Infix Notation to Postfix Notation Using stack
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int p(char ch){
    if(ch=='/'|| ch == '*'){
        return 2;
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return 0;
    }
}
void ans(char infix[],char postfix[]){
    int j=0;
    int sta[100],top=-1;
    for(int i=0;infix[i] != '\0';i++){
        if(isalpha(infix[i])){
            postfix[j++]=infix[i];
        }
        else{
            if(top==-1){
                sta[++top]=infix[i];
            }
            else{
                while(top != -1 && p(infix[i])<=p(sta[top])){
                    postfix[j++]=sta[top--];
                }
                sta[++top]=infix[i];
            }
        }
    }
    while(top>-1){
        postfix[j++]=sta[top--];
    }
    postfix[j]='\0';
}
int main() {
    char infix[100];
    char postfix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    ans(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int preced(char ch)
{
    if(ch=='*' || ch=='/') return 2;
    else if(ch=='+' || ch=='-') return 1;
    return 0;
}
void infix_to_postfix(char infix[])
{
    int n=strlen(infix);
    char postfix[n+1];
    int j=0;
    char st[100];
    int top=-1;
    for (int i = 0; i < n; i++)
    {
        if(isalpha(infix[i])) postfix[j++]=infix[i];
        else
        {
            if(top==-1) st[++top]=infix[i];
            else
            {
                while(top!=-1 && preced(infix[i]) <= preced(st[top]) )
                {
                    postfix[j++]=st[top--];
                }
                st[++top]=infix[i];
            }
        }
    }
    while (top>-1)
    {
        postfix[j++]=st[top];
    }
    postfix[j]='\0';

    printf("\nPostfix Notation: %s\n",postfix);
    

}
int main()
{
    char infix[1000];
    char 
    printf("Enter an expresion in infix form: ");
    scanf("%s", infix);
    printf("Infix Notation : %s",infix);
    infix_to_postfix(infix);
    return 0;
}