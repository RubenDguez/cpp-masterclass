#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
    protected:
        double area;
        double volume;

    public:
        double getArea()
        {
            return this->area;
        }
        double getVolume()
        {
            return this->volume;
        }
};
#endif
