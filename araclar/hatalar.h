#pragma once

#include <stdexcept>
class OzelHata:public std::runtime_error {
public:
    OzelHata(const char *mesaj):std::runtime_error{mesaj}{}
};
