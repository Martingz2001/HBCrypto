#include "hbcrypto/foundation/HBVersion.h"

namespace hbcrypto
{

int HBVersion::Major()
{
    return 0;
}


int HBVersion::Minor()
{
    return 1;
}


int HBVersion::Patch()
{
    return 0;
}


std::string HBVersion::String()
{
    return "HBCrypto 0.1.0 Foundation";
}

}