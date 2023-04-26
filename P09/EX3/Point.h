#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{

    public:
        Point();
        Point(int x,int y);
        void show() const;

    private:
        int x;
        int y;
};

#endif