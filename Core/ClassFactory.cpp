//
// Created by sammiler on 2019-06-05.
//

#include "ClassFactory.h"


std::map<EnClassType ,std::string> ClassMap::typeToClassNameMap;

ClassFactory<EnClassType::TYPE_LObject>::ClassFactory()
{
    ClassMap::insertPair(EnClassType::TYPE_LObject,getClassObject().getName());
}
LObject ClassFactory<TYPE_LObject>::getClassObject()
{
    return  TYPE_LObject;
}
