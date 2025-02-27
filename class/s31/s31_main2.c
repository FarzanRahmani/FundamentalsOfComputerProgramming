#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
    int x;
    int y;
    int z;
} Point;

Point* CreatePoint(int x, int y, int z)
{
    Point* p = malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    (*p).z = z;
    // p->x == (*p).x
    return p;

    // Point p1;
    // p1.x == x;
    // return &p1;
}

double Distance(Point* p1, Point* p2)
{
    int dx = p1->x - p2->x;
    int dy = p1->y - p2->y;
    int dz = p1->z - p2->z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}


int main()
{
    Point* pa = CreatePoint(2, 2, 2);
    Point* pb = CreatePoint(3, 3, 3);
    double dist = Distance(pa, pb);
    printf("dist: %d\n", dist);
    free(pa); //  *2 nomre*
    free(pb); //  *2 nomre*
    // alan p1 va p2 ehsre mikonan be hichi
    pa = NULL;
    pb = NULL;

    Point p;

    Point* pk = &p;
    pk->x = 5;

    return 0;
}