#ifndef DATASTRUST_HPP
#define DATASTRUCT_HPP
#include <string>
#include <utility>
#include <iostream>
#include "ScopeGuard.hpp"

namespace jirkov
{
  struct DataStruct
  {
    //key1;
    //key2;
    std::string key3;
  };

  std::istream & operator>>(std::istream &in, DataStruct &value);
  std::ostream & operator<<(std::ostream & out, const DataStruct &value);
  bool operator>(const DataStruct &left, const DataStruct &right);
  bool operator<(const DataStruct &left, const DataStruct &rigth);
}

#endif