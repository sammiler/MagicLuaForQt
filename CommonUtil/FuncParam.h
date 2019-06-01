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

typedef int64_t POINTER;

template <typename  T>
struct Param
{
    Param()
    {
        ID = -1;
    }
    Param(unsigned short ID,string type,T typeValue)
    {
        this->ID    = ID;
        this->type  = type;
        this->typeValue = typeValue;
    }
    int ID;
    string type;
    T      typeValue;
};

template <typename T1,typename T2 = T1,typename T3 = T1,typename T4 = T1,typename T5 = T1,typename T6 = T1>
class FuncParamList {

public:
    FuncParamList()
    {

    }
    ~FuncParamList()
    {

    }
    void setParam(const POINTER & ptr,const int & index)
    {
        if (index == 0)
        {
            Param<T1> * ptrParam = (Param<T1> *)(ptr);
            param1 = *ptrParam;
        } else if (index == 1)
        {
            Param<T2> * ptrParam = (Param<T2> *)(ptr);
            param2 = *ptrParam;
        } else if(index == 2)
        {
            Param<T3> * ptrParam = (Param<T3> *)(ptr);
            param3 = *ptrParam;
        } else if(index == 3)
        {
            Param<T4> * ptrParam = (Param<T4> *)(ptr);
            param4 = *ptrParam;
        } else if (index == 4)
        {
            Param<T5> * ptrParam = (Param<T5> *)(ptr);
            param5 = *ptrParam;
        } else if (index == 5)
        {
            Param<T6> * ptrParam = (Param<T6> *)(ptr);
            param6 = *ptrParam;
        }
    }
    POINTER  getIndexVarPtr(const int & index)
    {
        if (index == 0)
        {
            static variant var =  type::get(getParam1().typeValue).create();
            return (POINTER)&var;
        } else if (index == 1)
        {
            static variant var =  type::get(getParam2().typeValue).create();
            return (POINTER)&var;
        } else if (index == 2)
        {
            static variant var =  type::get(getParam3().typeValue).create();
            return (POINTER)&var;
        } else if (index == 3)
        {
            static variant var =  type::get(getParam4().typeValue).create();
            return (POINTER)&var;
        } else if (index == 4)
        {
            static variant var =  type::get(getParam5().typeValue).create();
            return (POINTER)&var;
        } else if (index == 5)
        {
            static variant var =  type::get(getParam6().typeValue).create();
            return (POINTER)&var;
        }
    }
    POINTER getIndexMethodPtr(const int & index,const string & funcName)
    {
        if (index == 0)
        {
            static method m = type::get(getParam1().typeValue).get_method(funcName);
            return (POINTER)&m;
        } else if (index == 1)
        {
            static method m = type::get(getParam2().typeValue).get_method(funcName);
            return (POINTER)&m;
        } else if (index == 2)
        {
            static method m = type::get(getParam3().typeValue).get_method(funcName);
            return (POINTER)&m;
        } else if (index == 3)
        {
            static method m = type::get(getParam4().typeValue).get_method(funcName);
            return (POINTER)&m;
        } else if (index == 4)
        {
            static method m = type::get(getParam5().typeValue).get_method(funcName);
            return (POINTER)&m;
        } else if (index == 5)
        {
            static method m = type::get(getParam6().typeValue).get_method(funcName);
            return (POINTER)&m;
        }
    }
    POINTER callFunc(const POINTER & m,const POINTER & var)
    {
        method   * m1 = (method *)m;
        variant  * v  = (variant *)var;
        static variant tempVar;
        switch (paramSize())
        {
            case 0:
            tempVar = m1->invoke(*v);
            return (POINTER)&tempVar;
            case 1:
            tempVar = m1->invoke(*v,getParam1().typeValue);
            return (POINTER)&tempVar;
            case 2:
            tempVar = m1->invoke(*v,getParam1().typeValue,getParam2().typeValue);
            return (POINTER)&tempVar;
            case 3:
            tempVar = m1->invoke(*v,getParam1().typeValue,getParam2().typeValue,getParam3().typeValue);
            return (POINTER)&tempVar;
            case 4:
            tempVar = m1->invoke(*v,getParam1().typeValue,getParam2().typeValue,getParam3().typeValue,getParam4().typeValue);
            return (POINTER)&tempVar;
            case 5:
            tempVar = m1->invoke(*v,getParam1().typeValue,getParam2().typeValue,getParam3().typeValue,getParam4().typeValue),getParam5().typeValue;
            return (POINTER)&tempVar;
            case 6:
            tempVar = m1->invoke(*v,getParam1().typeValue,getParam2().typeValue,getParam3().typeValue,getParam4().typeValue,getParam5().typeValue,getParam6().typeValue);
            return (POINTER)&tempVar;
            default:
            return 0;
        }

    }
    int  paramSize() const
    {
        vector<int> tempVec;
        tempVec.push_back(param1.ID);
        tempVec.push_back(param2.ID);
        tempVec.push_back(param3.ID);
        tempVec.push_back(param4.ID);
        tempVec.push_back(param5.ID);
        tempVec.push_back(param6.ID);
        int vaildCount = 0;
        for (auto iter = tempVec.begin(); iter != tempVec.end() ; ++iter) {
            if(*iter >= 0)
            {
                ++vaildCount;
            }
        }
        return vaildCount;
    }
    inline  const POINTER &  paramListToPtr()
    {
        return  (POINTER)(this);
    }
    int getInt(const int & index)
    {
        return getIndexVariant(index).to_int();
    }
    int getFuncRetInt(const POINTER & retPtr)
    {
        variant  * var = (variant *)(retPtr);
        int varInt = var->to_int();
        return varInt;
    }
    int64_t getInt64(const int & index)
    {
        return getIndexVariant(index).to_int64();
    }
    int64_t getFuncRetInt64(const POINTER & retPtr)
    {
        variant * var = (variant *)(retPtr);
        int64_t varInt64 = var->to_int64();
        return varInt64;
    }
    float getFloat(const int & index)
    {
        return getIndexVariant(index).to_float();
    }
    float getFuncRetFloat(const POINTER & retPtr)
    {
        variant * var = (variant *)(retPtr);
        float  varFloat = var->to_float();
        return varFloat;
    }
    double getDouble(const int & index)
    {
        return getIndexVariant(index).to_double();
    }
    double getFuncRetDouble(const POINTER & retPtr)
    {
        variant * var = (variant *)(retPtr);
        double varDouble = var->to_double();
        return varDouble;
    }
    bool getBool(const int & index)
    {
        return getIndexVariant(index).to_bool();
    }
    bool getFuncRetBool(const POINTER & retPtr)
    {
        variant * var = (variant *)(retPtr);
        bool varBool = var->to_double();
        return varBool;
    }
    const char * getString(const int & index)
    {
        return getIndexVariant(index).to_string().data();
    }
    const char * getFucRetString(const POINTER & retPtr)
    {
        variant * var = (variant *)(retPtr);
        const  char * varString = var->to_string().data();
        return varString;
    }


private:
    inline Param<T1> getParam1()
    {
        return param1;
    }
    inline Param<T2> getParam2()
    {
        return param2;
    }
    inline Param<T3> getParam3()
    {
        return param3;
    }
    inline Param<T4> getParam4()
    {
        return param4;
    }
    inline Param<T5> getParam5()
    {
        return param5;
    }
    inline Param<T6> getParam6()
    {
        return param6;
    }
    variant getIndexVariant(const int & index)
    {
        if (index == 1)
        {
            return type::get(getParam1().typeValue).create();
        } else if (index == 2)
        {
            return type::get(getParam2().typeValue).create();
        } else if (index == 3)
        {
            return type::get(getParam3().typeValue).create();
        } else if (index == 4)
        {
            return type::get(getParam4().typeValue).create();
        } else if (index == 5)
        {
            return type::get(getParam5().typeValue).create();
        } else if (index == 6)
        {
            return type::get(getParam6().typeValue).create();
        }
    }
private:
    Param<T1>        param1;
    Param<T2>        param2;
    Param<T3>        param3;
    Param<T4>        param4;
    Param<T5>        param5;
    Param<T6>        param6;
};


#endif //MAGICLUAFORQT_FUNCPARAM_H
