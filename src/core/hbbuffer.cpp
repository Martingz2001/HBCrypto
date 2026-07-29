#include "hbbuffer.h"

#include <fstream>


HBBuffer::HBBuffer()
{
}


bool HBBuffer::LoadFile(
    const std::string& filename
)
{

    std::ifstream file(
        filename,
        std::ios::binary
    );


    if(!file)
        return false;


    file.seekg(
        0,
        std::ios::end
    );


    size_t size=file.tellg();


    file.seekg(
        0,
        std::ios::beg
    );


    m_data.resize(size);


    file.read(
        (char*)m_data.data(),
        size
    );


    return true;
}



bool HBBuffer::SaveFile(
    const std::string& filename
)
{

    std::ofstream file(
        filename,
        std::ios::binary
    );


    if(!file)
        return false;


    file.write(
        (char*)m_data.data(),
        m_data.size()
    );


    return true;
}



void HBBuffer::Clear()
{
    m_data.clear();
}


size_t HBBuffer::Size() const
{
    return m_data.size();
}


unsigned char* HBBuffer::Data()
{
    return m_data.data();
}