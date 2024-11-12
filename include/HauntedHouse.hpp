#ifndef HAUNTEDHOUSE_HPP_INCLUDED
#define HAUNTEDHOUSE_HPP_INCLUDED
#include <iostream>
#include <string>

class HauntedHouse {
public:
 virtual ~HauntedHouse() = default;
 virtual void describe() = 0;
 protected:
  HauntedHouse(const std::string& desc) : description(desc) {}
  std::string description;
};

#endif //HAUNTEDHOUSE_HPP_INCLUDED
