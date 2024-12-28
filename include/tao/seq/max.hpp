// Copyright (c) 2015-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/sequences/

#ifndef TAO_SEQUENCES_MAX_HPP
#define TAO_SEQUENCES_MAX_HPP

#include "functional.hpp"
#include "reduce.hpp"

namespace tao
{
   namespace sequence
   {
      template< typename T, T... Ns >
      using max = reduce< op::max, T, Ns... >;

   }  // namespace sequence

}  // namespace tao

#endif
