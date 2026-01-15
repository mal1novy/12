#ifndef MATHFUNC_H
#define MATHFUNC_H
#include<iostream>
#include<cmath>

class MultiFunc;

class MathFunc{
protected:
    double x;
public:
    virtual ~MathFunc() = default;

    virtual double Calculate(double x)const = 0;

    double Integrate()const;

    void DFT(int n)const;

    virtual MathFunc* Clone()const = 0;

};

class StepFunc : public MathFunc{
public:
    double Calculate(double x)const override;
    MathFunc* Clone() const override;
};

class SinFunc : public MathFunc{
protected:
    int n;
public:
    SinFunc(int n){};
    double Calculate(double x)const override;
    MathFunc* Clone() const override;
};

class CosFunc : public MathFunc{
protected:
    int n;
public: 
    CosFunc(int n){};
    double Calculate(double x)const override;
    MathFunc* Clone() const override;
};

class MultiFunc : public MathFunc{
    MathFunc* a;
    MathFunc* b;
public:
    MultiFunc(){};
    MultiFunc(const MultiFunc& other);
    ~MultiFunc() override;
    MathFunc* Clone()const override;
};


#endif