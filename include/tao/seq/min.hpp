// Copyright (c) 2015-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/sequences/

#ifndef TAO_SEQ_MIN_HPP
#define TAO_SEQ_MIN_HPP

#include "functional.hpp"
#include "reduce.hpp"

namespace tao
{
   namespace sequence
   {
      template< typename T, T... Ns >
      using min = reduce< op::min, T, Ns... >;

   }  // namespace sequence

}  // namespace tao

#endif
