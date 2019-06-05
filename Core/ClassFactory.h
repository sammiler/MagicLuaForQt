//
// Created by sammiler on 2019-06-05.
//

#ifndef MAGICLUAFORQT_CLASSFACTORY_H
#define MAGICLUAFORQT_CLASSFACTORY_H

#include "LObject.h"
#include "ClassEnum.h"
#include <map>


class ClassMap
{
public:
    static EnClassType getClassTypeByName(const std::string & className){}
    static void        insertPair(const EnClassType & type,const std::string & className)
    {
        if(typeToClassNameMap.count(type) == 0)
        {
            typeToClassNameMap.insert(std::make_pair(type,className));
        }
    }

public:
    ClassMap();
    static std::map<EnClassType ,std::string> typeToClassNameMap;

};

template <EnClassType  type>
class ClassFactory
{

};
template <>
class ClassFactory<EnClassType::TYPE_LObject>
{
public:
    ClassFactory();
    LObject getClassObject();
private:
    LObject TYPE_LObject;
};
#endif //MAGICLUAFORQT_CLASSFACTORY_H
