#pragma once

#include <string>
#include <cstdint>
#include <ctime> //https://www.w3schools.com/cpp/cpp_date.asp

namespace Utils {
std::string generateUUID();

class DateTime{
  public:
    DateTime();
    uint32_t year();
    uint32_t month();
    uint32_t date();
    uint32_t hour();
    uint32_t minute();
    uint32_t second();

  private:
    tm dateTime;
};

DateTime getDateTime();

}