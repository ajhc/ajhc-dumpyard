struct Point {
    int x;
    int y;
};

struct Point* newPoint (int x, int y);
int getPointX (struct Point *pt);
int getPointY (struct Point *pt);

typedef void (*PointFunc) (struct Point *pt);
void applyPoint (struct Point* pt, PointFunc func);
