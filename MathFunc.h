#ifndef MATHFUNC_H
#define MATHFUNC_H
#include<iostream>

class MathFunc{
protected:
    double x;
public:
    MathFunc(double x1 = 0);
    ~MathFunc(){};

    int Calculate(double x);

    double Integrate();

    void DFT(int n);

    MathFunc* Clone();

};

class StepFunc : public MathFunc{

};

class SinFunc : public MathFunc{
protected:
    int n;
public:
    SinFunc(double x = 0, int n = 0);
    ~SinFunc(){};
};

class CosFunc : public MathFunc{
protected:
    int n;
public: 
    CosFunc(double x =0, int n =0);
    ~CosFunc(){};
};

class MultiFunc : public MathFunc{

};


#endif