// Copyright 2020 A.SHT
#include <iostream>
#include <string>

#include "postfix.h"

int main() {
  std::string inf = "2 + 2";
  std::string postf = infix2postfix(inf);
  std::cout << inf << ' ' << postf;
  return 0;
}
