//
// Created by sammiler on 2019-06-05.
//

#ifndef MAGICLUAFORQT_CLASSENUM_H
#define MAGICLUAFORQT_CLASSENUM_H

#define REGISTER_ENUM(ClassName) TYPE_##ClassName ,
enum EnClassType
{
    REGISTER_ENUM(LObject)
};

#endif //MAGICLUAFORQT_CLASSENUM_H
