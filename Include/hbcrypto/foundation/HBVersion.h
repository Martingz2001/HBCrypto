#ifndef HBCYPTO_HBVERSION_H
#define HBCYPTO_HBVERSION_H

#include <string>

namespace hbcrypto
{

class HBVersion
{

public:

    static int Major();

    static int Minor();

    static int Patch();

    static std::string String();

};

}

#endif