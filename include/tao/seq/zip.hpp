// Copyright (c) 2015-2020 Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/sequences/

#ifndef TAO_SEQUENCES_ZIP_HPP
#define TAO_SEQUENCES_ZIP_HPP

#include <type_traits>

#include "integer_sequence.hpp"

namespace tao
{
   namespace sequence
   {
      template< typename, typename, typename >
      struct zip;

      template< typename OP, typename TA, TA... As, typename TB, TB... Bs >
      struct zip< OP, integer_sequence< TA, As... >, integer_sequence< TB, Bs... > >
      {
         using CT = typename std::common_type< TA, TB >::type;
         using type = integer_sequence< CT, OP::template apply< CT, As, Bs >::value... >;
      };

      template< typename OP, typename A, typename B >
      using zip_t = typename zip< OP, A, B >::type;

   }  // namespace sequence

}  // namespace tao

#endif
