#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <iterator>
#include "inputOutputIO.hpp"
int main()
{
  using namespace jirkov;
  using inIterator = std::istream_iterator< DataStruct >;
  std::vector< DataStruct > values;
  while (!std::cin.eof())
  {
    std::copy(inIterator{std::cin}, inIterator{}, std::back_inserter(values));
    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
    }
  }
  std::sort(values.begin(), values.end());
  using outIterator = std::ostream_iterator< DataStruct >;
  std::copy(values.cbegin(), values.cend(), outIterator{std::cout, "\n"});
  return 0;
}
