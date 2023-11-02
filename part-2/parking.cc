// Howell Nguyen
// 27hnguyen@csu.fullerton.edu
// @HowieNguyen-bot
// Partners: @AMartinez025

#include <iostream>
#include <string>
#include <vector>

#include "parking_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 5) {
    std::cout << "error: you must supply four arguments";
    return 1;
  }

  std::string street;
  street = arguments.at(1);
  std::string day;
  day = arguments.at(2);
  int hour{0};
  hour = std::stoi(arguments.at(3));
  int minute{0};
  minute = std::stoi(arguments.at(4));
  if (street != "ash" && street != "beech" && street != "cedar" &&
      street != "date" && street != "elm") {
    std::cout << "error: invalid street\n";
    return 1;
  }

  if (day != "mon" && day != "tue" && day != "wed" && day != "thu" &&
      day != "fri" && day != "sat" && day != "sun") {
    std::cout << "error: invalid day\n";
    return 1;
  }

  if (hour < 0 || hour > 24) {
    std::cout << "error: invalid hour\n";
    return 1;
  }

  if (minute < 0 || minute > 59) {
    std::cout << "error: invalid minute\n";
    return 1;
  }

  bool parking{true};
  if (street == "ash") {
    parking = CanParkOnAsh(day, hour);
  } else if (street == "beech") {
    parking = CanParkOnBeech(day, hour);
  } else if (street == "cedar") {
    parking = CanParkOnCedar(day, hour);
  } else if (street == "date") {
    parking = CanParkOnDate(day, hour, minute);
  } else if (street == "elm") {
    parking = CanParkOnElm(day, hour);
  }

  if (parking == true) {
    std::cout << "allowed\n";
  } else if (parking == false) {
    std::cout << "not allowed\n";
  }

  return 0;
}