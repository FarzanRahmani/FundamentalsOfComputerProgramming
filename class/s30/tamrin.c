#include<stdio.h>
#include<math.h>
#include<stdlib.h> // baraye malloc ee 

typedef struct fr // type-->noe  def-->define  struct --> sakhtan
{
    int x;
    int y;
    int z;
} Point; // --> moteghayere jadid tarif kardim be nam point

Point q1;
struct fr q2; // 12 va 13 moadel ham hastand


Point* CreatePoint(int xx, int yy, int zz)
{
    Point* pp = (Point*) malloc( 3*sizeof(int));
    // pp.x = 5;
    // malloc(..)
    // Point*;
    //(*Point).x
    // pp->x
    // pp->x = 4;
    // (*pp).x = 4;
    // pp->y = 6;
    // (*pp).y = 7;
    (*pp).x = xx; // (*pp).x == pp->x
    (*pp).y = yy;
    (*pp).z = zz;
    return pp;

    // Point p1; --> fekr konam bayad malloc koni ta kar kone
    // p1.x == x;
    // return &p1;
}

double Distance(Point* p1, Point* p2)
{
    int dx = (*p1).x - (*p2).x;
    int dy = (*p1).y - (*p2).y;
    int dz = (*p1).z - (*p2).z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

double distance1(int x1, int y1, int z1, int x2, int y2, int z2)
{
    int xd = x1 - x2;
    int yd = y1 - y2;
    int zd = z1 - z2;
    return sqrt(xd*xd + yd*yd + zd*zd);      // sqrt --> square root 
}
double distance(Point p1, Point p2)
{
    int xd = p1.x - p2.x;
    int yd = p1.y - p2.y;
    int zd = p1.z - p2.z;
    return sqrt(xd*xd + yd*yd + zd*zd);
}

int main(int argc, char const *argv[])
{
    Point pa;
    pa.x = 4;
    pa.y = 6;
    pa.z = 7;    
    Point pb;
    pb.x = 5;
    pb.y = 8;
    pb.z = 5; 

    printf("%f\n",distance(pa,pb));
    printf("%f\n",Distance(&pa,&pb));

    Point* p1;
    Point* p2;
    p1 = CreatePoint(1,2,3); // malloc --> memory leak
    p2 = CreatePoint(5,6,7);  // malloc
    printf("%f\n",Distance(p1,p2));
    free(p2); //  *2 nomre*
    free(p1); //  *2 nomre*
    p1 = NULL;
    p2 = NULL;

    return 0;
}
