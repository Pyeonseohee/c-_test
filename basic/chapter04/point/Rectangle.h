#ifndef __RECTANGLE__H_
#define __RECTANGLE__H_
#include "Point.h";

class Rectangle
{
    private:
        Point upLeft;
        Point lowRight;
    public:
        bool InitMembers(const Point &ul, const Point &lr);
        void ShowRecInfo() const;
};
#endif