#include<stdio.h>
#include<math.h>
struct p{
	int x,y;
};
typedef struct p max;
double r(max p1,max p2){
	return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main(){
	max p1={3,5};
	max p2={7,9};
	double d=r(p1,p2);
	printf("%.2lf",d);
	return 0;
}