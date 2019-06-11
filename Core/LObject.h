//
// Created by sammiler on 2019-06-04.
//

#ifndef MAGICLUAFORQT_LOBJECT_H
#define MAGICLUAFORQT_LOBJECT_H

#include <map>
#include <vector>
#include <string>
#include "ClassEnum.h"
typedef int64_t POINTER;

class LObject {

public:
    LObject(){}
    virtual  ~LObject(){}
public:
    virtual     std::string getName();
    virtual     POINTER  callMemberFuc(const std::string & funcName,const POINTER & param){}
    virtual     POINTER  callPropertyFunc(const std::string & funcName,const POINTER & param){}
    virtual     void     assignProperty(const std::string & property, const POINTER & propertyValue){}
    virtual     POINTER  getParamPtr();

private:
    std::map<std::string,std::vector<EnClassType >> funcName2Types;
};


#endif //MAGICLUAFORQT_LOBJECT_H
