#ifndef GEOSHAPE_H_INCLUDED
#define GEOSHAPE_H_INCLUDED

class GeoShape{
protected:
    float dim1, dim2;
public:
    GeoShape();
    GeoShape(float);
    GeoShape(float, float);
    void setDim1(float);
    void setDim2(float);
    float getDim1();
    float getDim2();
    virtual float CalculateArea();
    ~GeoShape();
};


#endif // GEOSHAPE_H_INCLUDED
