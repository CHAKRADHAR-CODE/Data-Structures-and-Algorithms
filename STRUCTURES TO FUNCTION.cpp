#include<stdio.h> 
struct y{
	int w,l,h;
};
int x(struct y z){
	printf("%d %d %d\n",z.w,z.l,z.h);
}
int main(){
	struct y a = {10,20,30};
	struct y b ={50,30,60};
	x(a);
	x(b);
	return 0;
}