#include<stdio.h>
#include<stdlib.h> // baraye malloc ee 
#include<windows.h> // Sleep
#include<math.h>

// dynamic memory allocation

// struct point
// {
//     int x ;
//     int y;
// } p;

// int amplitude(struct point{int x;int y;} p) // amplitude --> دامنه نوسان فراوانی فاصله زیاد
// {
//     return p.x * p.x + p.y * p.y;
// }

typedef struct  // type-->noe  def-->define  struct --> sakhtan
{
    int x;
    int y;
    int z;
} Point; // --> moteghayere jadid tarif kardim be nam point

int amplitude1(Point p)
{
    return p.x * p.x + p.y * p.y;
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

double Distance(Point* p1, Point* p2)
{
    int dx = (*p1).x - (*p2).x;
    int dy = (*p1).y - (*p2).y;
    int dz = (*p1).z - (*p2).z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

Point* CreatePoint(int xx, int yy, int zz)
{
    Point* pp = (Point*) malloc( 3*sizeof(int));
    // Point* pp = malloc( sizeof(Point));
    // pp.x = 5;
    // malloc(..)
    // Point*;
    //(*Point).x
    // pp->x
    // pp->x = 4;
    // (*pp).x = 4;
    // pp->y = 6;
    // (*pp).y = 7;
    (*pp).x = xx;
    (*pp).y = yy;
    (*pp).z = zz;
    return pp;
}


int str_len(const char* buf)
{
    int len=0;
    while (*(buf++))
        len++;
    return len;
}

char* string_duplicate(const char* buf)
{
    int len = str_len(buf)+1; // +1 baraye sefr
    //(cast mikonim chon void* mide)   size(vahed = byte)     malloc = memory allocate اختصاص   (dakhel heap na stack)
    // maloc --> <stdlib>  maloc != free
    char* bufcopy = (char*) malloc(len * sizeof(char));
    int i=0;
    while (*buf) // har add be joz 0 true mishe
        bufcopy[i++] = *(buf++);
    bufcopy[i] = 0; // chon string ee
    return bufcopy;
}

int* create_matrix(int ncol, int nrow)
{                                  //    4 byte
    return (int*) malloc(ncol * nrow * sizeof(int));
}

int** create_jagged_matrix(int ncol, int nrow)
{
    // jagged =dandane dar 
    int** matrix = (int**) malloc( nrow * sizeof(int*));
    for(int i=0; i<nrow; i++)
        matrix[i] = (int*) malloc( ncol * sizeof(int)); // matrix[i] --> khat(row) i om marix
    return matrix;
}

void zero_jagged_matrix(int** pMatrix, int ncol, int nrow)
{
    for(int i=0; i<nrow; i++)
        for(int j=0; j<ncol; j++)
            pMatrix[i][j] = 0; // {pMatrix --> int**} { pMatrix[i] --> khat(row) i om (int*) } --> (pMatrix[i])[j] --> deraye satr i om sotoon j om (int)
    // mitini benevisi buf[i][j][k][l][m]...
}

void test()
{
    char buf[120];
    for(int i=0; i<100; i++)
        buf[i] = 'A';
}

// abc
// 3
// a, b, c
// 1: a, b, c
// 2:    b, c
// 3:     , c
// abc
// abc, acb, bac, bca, cab, cba
void print_all_permutations(char* buf, int len, int start) // permutations --> jayghasht
{
}

int main(int argc, char const *argv[])
{
    char buf[] = "ali hossein";
    char* my_copy = (char*) buf; // vaghti buf taghir mikone in taghir mikone va bar aks
    char* buf_copy = string_duplicate(buf); // vaghti buf taghir mikone in taghir nemikone
    printf("%s\n%s\n%s\n", buf, buf_copy, my_copy);
    buf[4] = 'S';
    printf("%s\n%s\n%s\n", buf, buf_copy, my_copy);

    // int* matrix = create_matrix(10, 10);
    // for(int i=0; i<1000; i++)
    // {
    //     int* ptr = create_matrix(100,100); // malloc khod be khod hafeze ghabl ro pak nemikon be hamin dalil memoty leak be vojood miad va hang mikone
    //     Sleep(50); // #include<windows.h>
    //     printf(".");
    //     free(ptr); // free != maloc   free miad pak mikone
    // }

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
    p1 = CreatePoint(1,2,3);
    p2 = CreatePoint(5,6,7);
    printf("%f\n",Distance(p1,p2));
    return 0;
}
