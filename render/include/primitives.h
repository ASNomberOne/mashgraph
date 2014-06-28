#ifndef PRIMITIVES_H_
#define PRIMITIVES_H_

struct Vector3D
{
    double x;
    double y;
    double z;
};

struct Point3D
{
    double x;
    double y;
    double z;
};

struct Line3D
{
    Point3D p1;
    Point3D p2;
};

#endif      //  PRIMITIVES_H_
