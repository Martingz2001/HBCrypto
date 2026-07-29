#ifndef HBBUFFER_H
#define HBBUFFER_H

#include <vector>
#include <string>


class HBBuffer
{

public:

    HBBuffer();


    bool LoadFile(
        const std::string& filename
    );


    bool SaveFile(
        const std::string& filename
    );


    void Clear();


    size_t Size() const;


    unsigned char* Data();


private:

    std::vector<unsigned char> m_data;

};


#endif