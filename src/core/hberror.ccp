#include "hberror.h"


HBException::HBException(
    int code,
    const std::string& message
)
:
m_code(code),
m_message(message)
{
}


const char* HBException::what()
const noexcept
{
    return m_message.c_str();
}


int HBException::Code() const
{
    return m_code;
}