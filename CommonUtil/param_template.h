//
// Created by sammiler on 2019-05-21.
//

#ifndef MAGICLUAFORQT_PARAM_TEMPLATE_H
#define MAGICLUAFORQT_PARAM_TEMPLATE_H

#include <rttr/registration>
#include <typeinfo>
#include "FuncParam.h"
#include "Util.h"
typedef int64_t  POINTER;
using  namespace rttr;

#define PARAM(id,T,t)  Param<T>(id,spliteClassName(typeid(t).name()),t)

template <typename T1>
POINTER createParamList(T1 t1)
{
    static FuncParamList<T1> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    return (POINTER)&pList;
}
template <typename T1,typename T2>
POINTER createParamList(T1 t1,T2 t2)
{
    static FuncParamList<T1,T2> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    Param<T2> p2 = PARAM(1,T2,t2);
    pList.setParam1(p1);
    pList.setParam2(p2);
    return (POINTER)&pList;
}
template <typename T1,typename T2,typename T3>
POINTER createParamList(T1 t1,T2 t2,T3 t3)
{
    static FuncParamList<T1,T2,T3> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    Param<T2> p2 = PARAM(1,T2,t2);
    Param<T3> p3 = PARAM(2,T3,t3);
    pList.setParam1(p1);
    pList.setParam2(p2);
    pList.setParam3(p3);
    return (POINTER)&pList;
}
template <typename T1,typename T2,typename T3,typename  T4>
POINTER createParamList(T1 t1,T2 t2,T3 t3,T4 t4)
{
    static FuncParamList<T1,T2,T3,T4> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    Param<T2> p2 = PARAM(1,T2,t2);
    Param<T3> p3 = PARAM(2,T3,t3);
    Param<T4> p4 = PARAM(3,T4,t4);
    pList.setParam1(p1);
    pList.setParam2(p2);
    pList.setParam3(p3);
    pList.setParam4(p4);
    return (POINTER)&pList;
}
template <typename T1,typename T2,typename T3,typename  T4,typename  T5>
POINTER createParamList(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5)
{
    static FuncParamList<T1,T2,T3,T4,T5> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    Param<T2> p2 = PARAM(1,T2,t2);
    Param<T3> p3 = PARAM(2,T3,t3);
    Param<T4> p4 = PARAM(3,T4,t4);
    Param<T5> p5 = PARAM(4,T5,t5);
    pList.setParam1(p1);
    pList.setParam2(p2);
    pList.setParam3(p3);
    pList.setParam4(p4);
    pList.setParam5(p5);
    return (POINTER)&pList;
}
template <typename T1,typename T2,typename T3,typename  T4,typename  T5,typename  T6>
POINTER createParamList(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6)
{
    static FuncParamList<T1,T2,T3,T4,T5,T6> pList;
    Param<T1> p1 = PARAM(0,T1,t1);
    Param<T2> p2 = PARAM(1,T2,t2);
    Param<T3> p3 = PARAM(2,T3,t3);
    Param<T4> p4 = PARAM(3,T4,t4);
    Param<T5> p5 = PARAM(4,T5,t5);
    Param<T6> p6 = PARAM(5,T6,t6);
    pList.setParam1(p1);
    pList.setParam2(p2);
    pList.setParam3(p3);
    pList.setParam4(p4);
    pList.setParam5(p5);
    pList.setParam6(p6);
    return (POINTER)&pList;
}
#endif //MAGICLUAFORQT_PARAM_TEMPLATE_H
