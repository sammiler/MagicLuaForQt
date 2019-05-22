//
// Created by sammiler on 2019-05-20.
//
#include <iostream>
#include <rttr/registration>
#include "param_template.h"
#include "Util.h"
using namespace rttr;
class A
{
public:
    int a;
};
struct MyStruct { MyStruct() {}; A func(double a2)  {A a1; a1.a = 10;
        return  a1;}; int data; };

RTTR_REGISTRATION
{
registration::class_<MyStruct>("MyStruct")
.constructor<>()
.property("data", &MyStruct::data)
.method("func", &MyStruct::func);
}
int main()
{
    getFuncParam(A(),A(),A(),A(),A(),A(),A(),A(),A(),A());
    //std::cout<<spliteClassName("1abc");
    return 0;
}
