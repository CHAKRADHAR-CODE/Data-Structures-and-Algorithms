#include<stdio.h>
int st[1000],size,top=-1;

void push(int x){
    if(top == size - 1){
        printf("Stack Is OverFlow.\nSo No More Insertions Possible .\n");
        return ;
    }
    top++;
    st[top]=x;
}

void pop(){
    if(top == -1){
        printf("No Element Present in Stack\n");
        return;
    }
    printf("Deleteing : %d\n",st[top]);
    top--;
}

void peek(){
    if(top == -1){
        printf("No Element Present in Stack\n");
        return;
    }
    printf("The Top Element is : %d\n",st[top]);
}

void display(){
    if(top == -1){
        printf("No Element Present in Stack\n");
        return;
    }
    for(int i = top ; i>=0 ; i--){
        printf("%d ", st[i]);
    }
    printf("\n");
}

int main(){
    printf("Enter The Max Number Of Eleents Stack can hold :");
    scanf("%d",&size);
    printf("___________________________________________\n");
    printf("|              MENU OF STACK              |\n");
    printf("|       1.Push                            |\n");
    printf("|       2.Pop                             |\n");
    printf("|       3.Peek                            |\n");
    printf("|       4.Display                         |\n");
    printf("|_________________________________________|\n");
    int ch;
    while(1){
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        if(ch==1){
            if(top == size - 1){
                printf("Stack Is OverFlow.\nSo No More Insertions Possible .\n");
                break; ;x
            }
            int x;
            printf("Enter The Element : ");
            scanf("%d",&x);
            push(x);
        }
        else if(ch==2){
            pop();
        }
        else if(ch==3){
            peek();
        }
        else if(ch==4){
            display();
        }
        else{
            printf("THANK YOU\n");
            return 0;
        }
    }
    return 0;
}