// Copyright (c) 2015-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/sequences/

#ifndef TAO_SEQUENCES_PLUS_HPP
#define TAO_SEQUENCES_PLUS_HPP

#include "functional.hpp"
#include "zip.hpp"

namespace tao
{
   namespace sequence
   {
      template< typename A, typename B >
      using plus = zip< op::plus, A, B >;

      template< typename A, typename B >
      using plus_t = typename plus< A, B >::type;

   }  // namespace sequence

}  // namespace tao

#endif
