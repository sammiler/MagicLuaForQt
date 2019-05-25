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
    Param(unsigned short ID,string type,variant var,T typeValue)
    {
        this->ID    = ID;
        this->type  = type;
        this->var   = var;
        var.to_bool();
        this->typeValue = typeValue;
    }
    int ID;
    string type;
    variant var;
    T      typeValue;
};
template <typename T1,typename T2 = T1,typename T3 = T1,typename T4 = T1,typename T5 = T1,typename T6 = T1,typename T7 = T1,typename T8 = T1,typename T9 = T1,typename T10 = T1>
class FuncParamList {

public:
    FuncParamList()
    {

    }
    inline  void setParam1(const Param<T1> & param)
    {
        this->param1 = param;
    }
    inline void setParam2(const Param<T2> & param)
    {
        this->param2 = param;
    }
    inline void setParam3(const Param<T3> & param)
    {
        this->param3 = param;
    }
    inline void setParam4(const Param<T4> & param)
    {
        this->param4 = param;
    }
    inline void setParam5(const Param<T5> & param)
    {
        this->param5 = param;
    }
    inline void setParam6(const Param<T6> & param)
    {
        this->param6 = param;
    }
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
    inline  int  paramSize() const
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
            if(*iter != -1)
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
    inline const  FuncParamList<T1,T2,T3,T4,T5,T6>  &  ptrToParamList(POINTER p)
    {
        FuncParamList<T1,T2,T3,T4,T5,T6> * paramList = (FuncParamList<T1,T2,T3,T4,T5,T6> *)(p);
        return *paramList;
    }
    variant getIndexVariant(const POINTER & paramList, const int & index)
    {
        FuncParamList<T1,T2,T3,T4,T5,T6> & list = ptrToParamList(paramList);
        if (index == 1)
        {
            return list.getParam1().var;
        } else if (index == 2)
        {
            return list.getParam2().var;

        } else if (index == 3)
        {
            return list.getParam3().var;
        } else if (index == 4)
        {
            return list.getParam4().var;
        } else if (index == 5)
        {
            return list.getParam5().var;
        } else if (index == 6)
        {
            return list.getParam6().var;
        }
    }
    int getInt(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_int();
    }
    int64_t getInt64(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_int64();
    }

    float getFloat(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_float();
    }
    double getDouble(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_double();
    }

    bool getBool(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_bool();
    }
    string getIString(const POINTER & paramList,const int & index)
    {
        return getIndexVariant(paramList,index).to_string();
    }
    POINTER callVarFunc(const POINTER & funcP,const int & index,const string & funcName,const POINTER & paramList)
    {
        if (funcP == 0 || paramList == 0)
            return  0;
        FuncParamList<T1,T2,T3,T4,T5,T6> func  = ptrToParamList(funcP);
        if (index == 1)
        {
            method m = type::get(func.getParam1().typeValue).get_method(funcName);
            return invokeMethod(func.getParam1().var,paramList,m);
        } else if (index == 2)
        {
            method m = type::get(func.getParam2().typeValue).get_method(funcName);
            return invokeMethod(func.getParam2().var,paramList,m);
        } else if (index == 3)
        {
            method m = type::get(func.getParam3().typeValue).get_method(funcName);
            return invokeMethod(func.getParam3().var,paramList,m);
        } else if (index == 4)
        {
            method m = type::get(func.getParam4().typeValue).get_method(funcName);
            return invokeMethod(func.getParam4().var,paramList,m);
        } else if (index == 5)
        {
            method m = type::get(func.getParam5().typeValue).get_method(funcName);
            return invokeMethod(func.getParam5().var,paramList,m);
        } else if (index == 6)
        {
            method m = type::get(func.getParam6().typeValue).get_method(funcName);
            return invokeMethod(func.getParam6().var,paramList,m);
        }
    }
    POINTER invokeMethod(const variant & var,const POINTER & paramList, const method & m)
    {
        FuncParamList<T1,T2,T3,T4,T5,T6> param = ptrToParamList(paramList);
        variant tempVar;
        switch (param.paramSize())
        {
            case 1:
                tempVar = m.invoke(var,param.getParam1().typeValue);
                return (POINTER)&tempVar;
            case 2:
                tempVar = m.invoke(var,param.getParam1().typeValue,param.getParam2().typeValue);
                return (POINTER)&tempVar;
            case 3:
                tempVar = m.invoke(var,param.getParam1().typeValue,param.getParam2().typeValue,param.getParam3().typeValue);
                return (POINTER)&tempVar;
            case 4:
                tempVar = m.invoke(var,param.getParam1().typeValue,param.getParam2().typeValue,param.getParam3().typeValue,param.getParam4().typeValue);
                return (POINTER)&tempVar;
            case 5:
                tempVar = m.invoke(var,param.getParam1().typeValue,param.getParam2().typeValue,param.getParam3().typeValue,param.getParam4().typeValue),param.getParam5().typeValue;
                return (POINTER)&tempVar;
            case 6:
                tempVar = m.invoke(var,param.getParam1().typeValue,param.getParam2().typeValue,param.getParam3().typeValue,param.getParam4().typeValue,param.getParam5().typeValue,param.getParam6().typeValue);
                return (POINTER)&tempVar;
            default:
                return 0;
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
