/*
 * Copyright 2021-2022 João F. BeyondMagic <koetemagie@gmail.com>
 *
 *Licensed under the Apache License, Version 2.0 (the "License");
 *you may not use this file except in compliance with the License.
 *You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *Unless required by applicable law or agreed to in writing, software
 *distributed under the License is distributed on an "AS IS" BASIS,
 *WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *See the License for the specific language governing permissions and
 *limitations under the License.
 */

#include <string>
#include "tinyexpr/main.h"

/*
 * Anything that can be computed locally needs to be put in here, all of those functions will run not matter the query.
 * So be careful with the speed of it.
 */
struct Local
{

  /* Return the value of an expression, it will returns the first value it encounters.
   * It will simply return NaN for invalid expressions.
   */
  const double
  math( const std::string & );

};
