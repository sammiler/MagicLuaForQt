//
// Created by sammiler on 2019-06-04.
//

#include "LObject.h"
#include <typeinfo>
#include "Util.h"
std::string LObject::getName()
{
    std::string typeStr = typeid(*this).name();
    return spliteClassName((char *)typeStr.data());
}