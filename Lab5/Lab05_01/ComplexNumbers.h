#ifndef COMPLEXNUMBERS_H_INCLUDED
#define COMPLEXNUMBERS_H_INCLUDED



#endif // COMPLEXNUMBERS_H_INCLUDED
class ComplexNumbers
{
    float real;
    float imagine;

public:
    ComplexNumbers(void);
    ComplexNumbers(float);
    ComplexNumbers(float, float);
    void setReal(float);
    void setImagine(float);
    float getReal();
    float getImagine();
    void printEquation();
    ComplexNumbers add(ComplexNumbers comp);
    ComplexNumbers sub(ComplexNumbers comp);
    ComplexNumbers mul(ComplexNumbers comp);
    ComplexNumbers div(ComplexNumbers comp);
    ~ComplexNumbers(void);


};
