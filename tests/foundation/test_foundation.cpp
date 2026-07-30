#include <iostream>

#include "hbcrypto/foundation/HBObject.h"
#include "hbcrypto/foundation/HBVersion.h"


int main()
{

    hbcrypto::HBObject obj;


    std::cout
        << obj.ClassName()
        << std::endl;


    std::cout
        << hbcrypto::HBVersion::String()
        << std::endl;


    return 0;
}