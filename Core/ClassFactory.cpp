//
// Created by sammiler on 2019-06-05.
//

#include "ClassFactory.h"


std::map<EnClassType ,std::string> ClassMap::typeToClassNameMap;

#define CLASSIMPL(ClassName)  \
ClassFactory<EnClassType::TYPE_##ClassName>::ClassFactory() \
{ \
    ClassMap::insertPair(EnClassType::TYPE_##ClassName,getClassObject().getName());    \
} \
ClassName ClassFactory<EnClassType::TYPE_##ClassName>::getClassObject() \
{  \
    return TYPE_##ClassName; \
} \
ClassFactory<EnClassType::TYPE_##ClassName> TYPE##ClassName;
CLASSIMPL(LObject)