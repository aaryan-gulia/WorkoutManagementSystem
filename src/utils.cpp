#include "utils.h"

#include"uuid_v4.h"

std::string Utils::generateUUID(){
  UUIDv4::UUIDGenerator<std::mt19937_64> uuidGenerator;
  UUIDv4::UUID uuid = uuidGenerator.getUUID();
  return uuid.str();
}

Utils::DateTime Utils::getDateTime(){
  return Utils::DateTime();
}

Utils::DateTime::DateTime(){
  time_t timestamp;
  dateTime = *localtime(&timestamp);
}

uint32_t Utils::DateTime::year(){
  return dateTime.tm_year + 1900;
}
uint32_t Utils::DateTime::month(){
  return dateTime.tm_mon + 1;
}
uint32_t Utils::DateTime::date(){
  return dateTime.tm_mday;
}
uint32_t Utils::DateTime::hour(){
  return dateTime.tm_hour;
}
uint32_t Utils::DateTime::minute(){
  return dateTime.tm_min;
}
uint32_t Utils::DateTime::second(){
  return dateTime.tm_sec;
}
