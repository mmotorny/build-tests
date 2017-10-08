// Copyright (c) 2017, Maksym Motornyy. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be found 
// in the LICENSE file.

#include "build_tests/source_set/sayHello.hpp"

#include <tuple>

int main(int argumentCount, char *arguments[]) {
  std::ignore = argumentCount;
  std::ignore = arguments;

  build_tests::source_set::sayHello();

  return 0;
}
