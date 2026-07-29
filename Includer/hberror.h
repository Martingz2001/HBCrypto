#ifndef HBERROR_H
#define HBERROR_H

#include <exception>
#include <string>


class HBException : public std::exception
{

public:

    HBException(
        int code,
        const std::string& message
    );


    const char* what()
        const noexcept override;


    int Code() const;


private:

    int m_code;

    std::string m_message;

};


#endif