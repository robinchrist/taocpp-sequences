// Copyright (c) 2019-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/sequences/

#ifndef TAO_SEQUENCES_MULTIPLIES_HPP
#define TAO_SEQUENCES_MULTIPLIES_HPP

#include "functional.hpp"
#include "zip.hpp"

namespace tao
{
   namespace sequence
   {
      template< typename A, typename B >
      using multiplies = zip< op::multiplies, A, B >;

      template< typename A, typename B >
      using multiplies_t = typename multiplies< A, B >::type;

   }  // namespace sequence

}  // namespace tao

#endif
