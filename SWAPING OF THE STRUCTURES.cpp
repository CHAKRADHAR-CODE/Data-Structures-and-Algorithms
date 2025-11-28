#include<stdio.h> 
struct y{
	int w,l,h;
};
typedef struct y point;
int x(struct y z){
	printf("%d %d %d\n",z.w,z.l,z.h);
}
int main(){
	struct y a = {10,20,30};
	struct y b ={50,30,60};
	printf("Before swaping : \n");
	x(a);
	x(b);
	point temp =a;
	a=b;
	b=temp;
	printf("After swaping : \n");
	x(a);
	x(b);
	return 0;
}