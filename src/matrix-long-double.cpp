/*
 * Copyright 2020 INRIA
 */

#include "eigenpy/eigenpy.hpp"

namespace eigenpy
{
  void exposeMatrixLongDouble()
  {
    exposeType<long double>();
  }
}
