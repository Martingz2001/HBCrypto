/******************************************************************************
 *
 * HBCrypto
 *
 * Secure Foundations for Harbour
 *
 * File:
 *      HBObject.h
 *
 ******************************************************************************/

#ifndef HBCYPTO_HBOBJECT_H
#define HBCYPTO_HBOBJECT_H

namespace hbcrypto
{

class HBObject
{
public:

    HBObject();

    virtual ~HBObject();

    virtual const char* ClassName() const;

};

}

#endif