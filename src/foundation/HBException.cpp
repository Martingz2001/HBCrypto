#include "hbcrypto/foundation/HBException.h"

namespace hbcrypto
{

HBException::HBException(
    int code,
    const std::string& message
)
:
m_code(code),
m_message(message)
{
}


HBException::~HBException() noexcept
{
}


int HBException::Code() const noexcept
{
    return m_code;
}


const char* HBException::Message() const noexcept
{
    return m_message.c_str();
}


const char* HBException::what() const noexcept
{
    return m_message.c_str();
}

}