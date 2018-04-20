#include "project_config.h"

class B
{};

class A : B
{
public:
    A()
    {
        RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
        GPIOC->CRH = 1;
        GPIOC->ODR |= 1<<8;
    }

    virtual void foo()
    {}

    virtual ~A()
    {}
};

A a;



int main(void)
{
    // демонстрация остановки отладчика по эксепшону
//    int * p = (int *)3;    
//    volatile double d = *(double *)(p);

	while(1);

	return 0;
}
