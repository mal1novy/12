#include"MathFunc.h"

static double PI = 3.14;

double MathFunc::Integrate()const{
    double suma = 0;

   for (int i = 0; i < 1000; i++)
   {
        double x = static_cast<double>(i) / static_cast<double>(1000);
        suma += Calculate(x);
   }
   return static_cast<double>(1000);
}


double StepFunc::Calculate(double x)const{
    return x;
}

double SinFunc::Calculate(double x)const {
    return std::sin(2.0 * PI * static_cast<double>(n) * x);
}

double CosFunc::Calculate(double x)const {
    return std::cos(2.0 * PI * static_cast<double>(n) * x);
}

MathFunc* StepFunc::Clone()const{
    return new StepFunc(*this);
}

MathFunc* SinFunc::Clone()const{
    return new SinFunc(*this);
}

MathFunc* CosFunc::Clone()const{
    return new CosFunc(*this);
}

void MathFunc::DFT(int n)const{
    double A0 = 0;
    double B0 = Integrate();

    printf ( " % i %.3 f %3 f \ n " , n , A0 , B0);

    for (int i = 0; i < n; i++)
    {
        SinFunc s(n);
        CosFunc c(n);
    }
}

MultiFunc::MultiFunc(const MultiFunc& other){

}

