# Copyright (c) Darrell Wright
#
# Distributed under the Boost Software License, Version 1.0. (See accompanying
# file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt)
#
# Official repository: https://github.com/beached/msvc_charptr_test
#

cmake_minimum_required(VERSION 3.20)
project(msvc_charptr_test)

set(CMAKE_CXX_STANDARD 17)

add_custom_target(full)

add_executable(msvc_charptr_test main.cpp)
add_dependencies(full msvc_charptr_test)

