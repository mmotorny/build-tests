// Copyright (c) 2017, Maksym Motornyy. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be found 
// in the LICENSE file.

#include "build_tests/source_set/sayHello.hpp"

#include <iostream>

namespace build_tests {
namespace source_set {

void sayHello() {
  std::cout << "Hello, world!\n";
}
  
}  // namespace source_set
}  // namespace build_tests
