#include<stdio.h>
#include<math.h>
typedef struct Point {
	int x;
	int y;
}Point;
typedef struct Line{
	Point P1,P2;
}Line;
double get_len(Line L)
{
	return sqrt(pow((L.P2.x-L.P1.x),2)+pow((L.P2.y-L.P1.y),2));
}
void print(Line L)
{
	printf("Line((%d,%d),(%d,%d)) is Larger",L.P1.x,L.P1.y,L.P2.x,L.P2.y);
}
int main()
{
	Line L1={{1,7},{3,4}};
	Line L2={{7,9},{2,3}};
	double len_L1=get_len(L1);
	double len_L2=get_len(L2);
	if(len_L1 < len_L2) print(L2);
	else print(L1);
}