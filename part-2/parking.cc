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

  // TODO: write an if statement that validates the number of arguments. If
  // the number of arguments is invalid, print
  // error: you must supply four arguments
  // and return non-zero.
  if (arguments.size() != 5) {
    std::cout << "error: you must supply four arguments";
    return 1;
  }
  // TODO: declare a string variable to hold the first argument (street)
  std::string street;
  street = arguments.at(1);
  // TODO: declare a string variable to hold the second argument (day)
  std::string day;
  day = arguments.at(2);
  // TODO: declare an int variable to hold the third argument (hour)
  // HINT: use the std::stoi function to convert the string argument to an int.
  int hour{0};
  hour = std::stoi(arguments.at(3));
  // TODO: declare an int variable to hold the fourth argument (minute)
  // HINT: use the std::stoi function to convert the string argument to an int.
  int minute{0};
  minute = std::stoi(arguments.at(4));
  // TODO: write an if statement that validates the street.
  // If the street is invalid, print
  // error: invalid street
  // and return non-zero.
  if (street != "ash" && street != "beech" && street != "cedar" &&
      street != "date" && street != "elm") {
    std::cout << "error: invalid street\n";
    return 1;
  }
  // TODO: write an if statement that validates the day.
  // If the day is invalid, print
  // error: invalid day
  // and return non-zero.
  if (day != "mon" && day != "tue" && day != "wed" && day != "thu" &&
      day != "fri" && day != "sat" && day != "sun") {
    std::cout << "error: invalid day\n";
    return 1;
  }
  // TODO: write  an if statement that validates the hour.
  // If the hour is invalid, print
  // error: invalid hour
  // and return non-zero.
  if (hour < 0 || hour > 24) {
    std::cout << "error: invalid hour\n";
    return 1;
  }
  // TODO: write an if statement that validates the minute.
  // If the minute is invalid, print
  // error: invalid minute
  // and return non-zero.
  if (minute < 0 || minute > 59) {
    std::cout << "error: invalid minute\n";
    return 1;
  }
  // TODO: Declare a bool variable that will store true when parking is
  // allowed, or false when not allowed.
  bool parking{true};
  // TODO: write an if-else-chain that uses the day to decide which
  // function to call (CanParkOnAsh, etc.)
  // Call the chosen function, and assign the return value into your bool
  // variable.
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
  // TODO: Write an if statement that prints
  // allowed
  // or
  // not allowed
  // according to the value in your bool variable.
  if (parking == true) {
    std::cout << "allowed\n";
  } else if (parking == false) {
    std::cout << "not allowed\n";
  }

  return 0;
}