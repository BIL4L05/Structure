#include <stdio.h>

typedef struct {
    int x ;
    int y ;
} Point;

int main() {
    Point p;          
    Point *ptr = &p;

    ptr->x = 10;
    ptr->y = 20;


    printf("Coordonnes du point : x = %d, y = %d\n", p.x, p.y);

    return 0;
    
}
