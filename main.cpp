// Copyright (c) Darrell Wright
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/beached/msvc_charptr_test
//

#include <cassert>
#include <string_view>

int main( ) {
	constexpr std::string_view sv = "http://google.ca";
	constexpr char const *ptr = { std::data( sv ) + std::size( sv ) };
	static_assert( ptr == ( std::data( sv ) + std::size( sv ) ) );
	assert( ptr == ( std::data( sv ) + std::size( sv ) ) );
}
