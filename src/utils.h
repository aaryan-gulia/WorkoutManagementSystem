#pragma once

#include <string>
#include <cstdint>
#include <ctime> //https://www.w3schools.com/cpp/cpp_date.asp

namespace Utils {
std::string generateUUID();

class DateTime{
  public:
    DateTime();
    uint32_t year() const;
    uint32_t month() const;
    uint32_t date() const;
    uint32_t hour() const;
    uint32_t minute() const;
    uint32_t second() const;

  private:
    tm dateTime;
};

DateTime getDateTime();

}