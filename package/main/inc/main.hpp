#pragma once

#include <CUSART.hpp>
#include <ncurses.h>
#include <string.h>


uint8_t argHandler(int argc, char* argv[]);

uint8_t checkPort(int8_t port);