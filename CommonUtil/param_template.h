//
// Created by sammiler on 2019-05-21.
//

#ifndef MAGICLUAFORQT_PARAM_TEMPLATE_H
#define MAGICLUAFORQT_PARAM_TEMPLATE_H

#include <rttr/registration>
#include <typeinfo>
#include "FuncParam.h"
#include "Util.h"
using  namespace rttr;

#define PARAM(id,t)  Param(id,spliteClassName(typeid(t).name()),type::get(t1).create())

template <typename T1>
FuncParam getFuncParam(T1 t1)
{
    FuncParam funcParam;
    Param id = PARAM(0,t1);
    funcParam.addParam(id);
    return  funcParam;
}

template <typename T1,typename  T2>
FuncParam getFuncParam(T1 t1,T2 t2)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    return  funcParam;
}
template <typename T1,typename  T2,typename  T3,typename T4>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5,typename T6>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    Param id6   = PARAM(5,t6);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    funcParam.addParam(id6);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5,typename T6,typename T7>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6,T7 t7)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    Param id6   = PARAM(5,t6);
    Param id7   = PARAM(6,t7);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    funcParam.addParam(id6);
    funcParam.addParam(id7);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5,typename T6,typename T7,typename T8>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6,T7 t7,T8 t8)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    Param id6   = PARAM(5,t6);
    Param id7   = PARAM(6,t7);
    Param id8   = PARAM(7,t8);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    funcParam.addParam(id6);
    funcParam.addParam(id7);
    funcParam.addParam(id8);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5,typename T6,typename T7,typename T8,typename  T9>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6,T7 t7,T8 t8,T9 t9)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    Param id6   = PARAM(5,t6);
    Param id7   = PARAM(6,t7);
    Param id8   = PARAM(7,t8);
    Param id9   = PARAM(8,t9);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    funcParam.addParam(id6);
    funcParam.addParam(id7);
    funcParam.addParam(id8);
    funcParam.addParam(id9);
    return  funcParam;
}

template <typename T1,typename  T2,typename  T3,typename T4,typename  T5,typename T6,typename T7,typename T8,typename  T9,typename T10>
FuncParam getFuncParam(T1 t1,T2 t2,T3 t3,T4 t4,T5 t5,T6 t6,T7 t7,T8 t8,T9 t9,T10 t10)
{
    FuncParam funcParam;
    Param id    = PARAM(0,t1);
    Param id2   = PARAM(1,t2);
    Param id3   = PARAM(2,t3);
    Param id4   = PARAM(3,t4);
    Param id5   = PARAM(4,t5);
    Param id6   = PARAM(5,t6);
    Param id7   = PARAM(6,t7);
    Param id8   = PARAM(7,t8);
    Param id9   = PARAM(8,t9);
    Param id10  = PARAM(9,t10);
    funcParam.addParam(id);
    funcParam.addParam(id2);
    funcParam.addParam(id3);
    funcParam.addParam(id4);
    funcParam.addParam(id5);
    funcParam.addParam(id6);
    funcParam.addParam(id7);
    funcParam.addParam(id8);
    funcParam.addParam(id9);
    funcParam.addParam(id10);
    return  funcParam;
}
#endif //MAGICLUAFORQT_PARAM_TEMPLATE_H
