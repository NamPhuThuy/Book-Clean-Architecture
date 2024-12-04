/*
The users of point.h have no access whatsoever to the members of struct
Point. They can call the makePoint(), and the distance(),
but they have no knowledge of the implementation of either the Point
data structure or the functions.
*/
//#include "point.c"
#ifndef POINT_H
#define POINT_H

struct Point {
    double x;
    double y;
};
	
struct Point* makePoint(double x, double y);
double distance (struct Point *p1, struct Point *p2);
void Print();

#endif

