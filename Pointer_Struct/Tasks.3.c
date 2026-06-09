#include <stdio.h>
#include <math.h>

typedef struct Point{
	float x;
	float y;
}Point;

void input_point(Point* p){
	printf("Input x point ");
	scanf("%f", &(p->x));
	printf("Input y point ");
	scanf("%f", &(p->y));
}

float distance_points(Point p1, Point p2){
	float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
	return sqrtf(dx * dx + dy * dy);
}

float distance_origin(Point p) {
    return sqrtf(p.x * p.x + p.y * p.y);
}

Point midpoint(Point p1, Point p2) {
    Point mid;

    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;

    return mid;
}
int main(){
	Point p1, p2, mid;

    printf("Input first point:\n");
    input_point(&p1);

    printf("Input second point:\n");
    input_point(&p2);

	printf("\nFirst point: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Second point: (%.2f, %.2f)\n", p2.x, p2.y);

    printf("\nDistance between points: %.2f\n", distance_points(p1, p2));

    printf("Distance of first point from origin: %.2f\n", distance_origin(p1));
    printf("Distance of second point from origin: %.2f\n", distance_origin(p2));

    mid = midpoint(p1, p2);

    printf("Midpoint: (%.2f, %.2f)\n", mid.x, mid.y);

	return 0;
}




	
