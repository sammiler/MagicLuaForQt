//
// Created by sammiler on 2019-05-22.
//

#ifndef MAGICLUAFORQT_UTIL_H
#define MAGICLUAFORQT_UTIL_H

#include <string>

std::string spliteClassName(const char * name)
{
        std::string tempStr = (char *)name;
        tempStr = tempStr.substr(1,tempStr.size() - 1);
        return  tempStr;
}

#endif //MAGICLUAFORQT_UTIL_H
