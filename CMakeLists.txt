cmake_minimum_required(VERSION 3.15)
project(bookstore_01)

set(CMAKE_CXX_STANDARD 14)

add_executable(bookstore_01 main.cpp book.cpp book.h library.cpp library.h)