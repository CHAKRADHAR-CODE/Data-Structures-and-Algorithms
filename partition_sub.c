#include<stdio.h>
void p(int x[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
}
void quick(int x,int )
int par(int x,int n){

}
int main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("Printing Orginal Array : ");
    p(x,n);
    printf("Printing Sorted Array : ");
    p(x,n);
    return 0;
}