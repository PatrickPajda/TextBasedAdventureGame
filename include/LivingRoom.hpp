#ifndef LIVINGROOM_HPP_INCLUDED
#define LIVINGROOM_HPP_INCLUDED
#include "HauntedHouse.hpp"
#include <iostream>
#include <string>

class LivingRoom : public HauntedHouse {
  public:
  LivingRoom();
  void describe() override;
};

#endif //LIVINGROOM_HPP_INCLUDED