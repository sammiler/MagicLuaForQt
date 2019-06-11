//
// Created by sammiler on 2019-06-04.
//

#include "LObject.h"
#include <typeinfo>
#include "FuncParam.h"
#include "Util.h"
std::string LObject::getName()
{
    std::string typeStr = typeid(*this).name();
    return spliteClassName((char *)typeStr.data());
}
POINTER LObject::getParamPtr()
{
    static Param<LObject> tempParam;
    tempParam.ID = 0;
    tempParam.type = getName();
    tempParam.typeValue = *this;
    return  (POINTER)&tempParam;
}