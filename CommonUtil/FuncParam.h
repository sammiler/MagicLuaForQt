//
// Created by sammiler on 2019-05-21.
//

#ifndef MAGICLUAFORQT_FUNCPARAM_H
#define MAGICLUAFORQT_FUNCPARAM_H

#include <string>
#include <vector>
#include <rttr/registration>

using  std::string;
using  std::vector;
using  namespace rttr;


struct Param
{
    Param()
    {
        ID = -1;
    }
    Param(unsigned short ID,string type,variant var)
    {
        this->ID    = ID;
        this->type  = type;
        this->var   = var;
    }
    unsigned short ID;
    string type;
    variant var;
};

class FuncParam {

public:
    FuncParam() = default;
    inline  void addParam(const Param & param)
    {
        m_vecParam.push_back(param);
    }
    inline unsigned int  paramSize()
    {
        return m_vecParam.size();
    }
private:
    vector<Param> m_vecParam;
};


#endif //MAGICLUAFORQT_FUNCPARAM_H
