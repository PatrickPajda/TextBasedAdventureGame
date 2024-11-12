#ifndef LIVINGROOM_HPP_INCLUDED
#define LIVINGROOM_HPP_INCLUDED
#include <iostream>
#include <string>
#include "HauntedHouse.hpp"

class LivingRoom : public HauntedHouse {
  public:
  LivingRoom();
  void describe() override;
};

#endif //LIVINGROOM_HPP_INCLUDED
