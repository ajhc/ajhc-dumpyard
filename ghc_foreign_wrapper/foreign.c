#include <stdlib.h>
#include "foreign.h"

struct Point* newPoint (int x, int y) {
  struct Point *pt;
  pt = (struct Point *)malloc( sizeof(struct Point) );
  pt->x = x;
  pt->y = y;
  return pt;
};

int getPointX (struct Point* pt) {
  return pt->x;
};

int getPointY (struct Point* pt) {
  return pt->y;
};

void applyPoint (struct Point* pt, PointFunc func) {
  (*func) (pt);
};
