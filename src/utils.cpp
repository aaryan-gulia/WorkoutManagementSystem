#include "utils.h"
#include "boost/uuid.hpp"
#include <boost/uuid/uuid_generators.hpp>
#include "boost/lexical_cast.hpp"


std::string Utils::generateUUID(){
  boost::uuids::random_generator gen;
  boost::uuids::uuid uuid = gen();
  return boost::lexical_cast<std::string>(uuid);
}

Utils::DateTime Utils::getDateTime(){
  return {};
}

Utils::DateTime::DateTime(){
  time_t timestamp;
  time(&timestamp);
  dateTime = *localtime(&timestamp);
}

uint32_t Utils::DateTime::year() const{
  return dateTime.tm_year + 1900;
}
uint32_t Utils::DateTime::month() const{
  return dateTime.tm_mon + 1;
}
uint32_t Utils::DateTime::date() const{
  return dateTime.tm_mday;
}
uint32_t Utils::DateTime::hour() const{
  return dateTime.tm_hour;
}
uint32_t Utils::DateTime::minute() const{
  return dateTime.tm_min;
}
uint32_t Utils::DateTime::second() const{
  return dateTime.tm_sec;
}
