#ifndef KEYS_IN_HPP
#define KEYS_IN_HPP

#include <iostream>

namespace kozakova {

  struct KeyUll
  {
    unsigned long long& value;
  };
  std::istream& operator>>(std::istream& in, KeyUll&& v);

  struct KeyF
  {
    unsigned long long& value;
  };
  std::istream& operator>>(std::istream& in, KeyF&& v);

  struct KeyString
  {
    std::string& value;
  };
  std::istream& operator>>(std::istream& in, KeyString&& v);
}

#endif
