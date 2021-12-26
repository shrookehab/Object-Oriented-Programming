#ifndef COMPLEXNUMBERS_H_INCLUDED
#define COMPLEXNUMBERS_H_INCLUDED



#endif // COMPLEXNUMBERS_H_INCLUDED
class ComplexNumbers
{
    float real;
    float imagine;
    friend ComplexNumbers operator + (float, ComplexNumbers);
    friend ComplexNumbers operator - (float, ComplexNumbers);

public:
    ComplexNumbers(void);
    ComplexNumbers(float);
    ComplexNumbers(float, float);
    void setReal(float);
    void setImagine(float);
    float getReal();
    float getImagine();
    void printEquation();
    ComplexNumbers operator + (ComplexNumbers);
    ComplexNumbers operator + (float);
    ComplexNumbers operator - (ComplexNumbers);
    ComplexNumbers operator - (float);
    ComplexNumbers operator * (ComplexNumbers);
    ComplexNumbers operator / (ComplexNumbers);
    ComplexNumbers operator * (float);
    ComplexNumbers operator / (float);
    ComplexNumbers operator += (ComplexNumbers);
    ComplexNumbers operator -= (ComplexNumbers);
    int operator == (ComplexNumbers);
    ComplexNumbers operator ++ ();
    ComplexNumbers operator ++ (int);
    ComplexNumbers operator -- ();
    ComplexNumbers operator -- (int);
    operator float();
    ~ComplexNumbers(void);


};
