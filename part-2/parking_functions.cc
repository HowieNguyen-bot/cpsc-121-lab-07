// Howell Nguyen
// 27hnguyen@csu.fullerton.edu
// @HowieNguyen-bot
// Partners: @AMartinez025

#include "parking_functions.h"

bool CanParkOnAsh(const std::string& day, int hour) {
  if (day == "wed" && hour >= 10 && hour <= 12) {
    return false;
  }
  return true;
}

bool CanParkOnBeech(const std::string& day, int hour) {
  if (day == "fri" && hour >= 8 && hour <= 12) {
    return false;
  }
  return true;
}
bool CanParkOnCedar(const std::string& day, int hour) {
  if (hour >= 7 && hour >= 19) {
    return false;
  } else if (day == "tue") {
    return false;
  }
  return true;
}

bool CanParkOnDate(const std::string& day, int hour, int min) {
  if (hour >= 6 && min >= 30 && hour <= 16) {
    if (day == "sat" || day == "sun") {
      return true;
    }
    return false;
  }
  return false;
}

bool CanParkOnElm(const std::string& day, int hour) {
  if (day == "mon" && day == "wed" && day == "thu" && hour >= 8 && hour <= 20) {
    return false;
  } else if (day == "tue") {
    return false;
  } else if (day == "fri" && hour >= 8 && hour <= 17) {
    return false;
  }
  return true;
}
