#ifndef HBCYPTO_HBEXCEPTION_H
#define HBCYPTO_HBEXCEPTION_H

#include <exception>
#include <string>

namespace hbcrypto
{

class HBException : public std::exception
{
public:

    HBException(
        int code,
        const std::string& message
    );

    virtual ~HBException() noexcept;


    int Code() const noexcept;


    const char* Message() const noexcept;


    const char* what() const noexcept override;


private:

    int m_code;

    std::string m_message;

};

}

#endif