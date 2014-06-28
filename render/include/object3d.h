#ifndef OBJECT_H_
#define OBJECT_H_

#include "primitives.h"

class Object3D
{
    public:
        virtual bool getIntersect(const Point3D &stPoint, const Vector3D &ray, Point3D &intersect);
        virtual QColor getColor(const Point3D point);
        virtual Vector3D getNormalVector(const Point3D point);
};

#endif      // OBJECT_H_
