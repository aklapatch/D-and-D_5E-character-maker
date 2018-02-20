/** util.h
 * holds prototypes for all the most useful functions
 */
#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <iomanip>
#include <random>
#include <fstream>
#include <vector>

/** lists options and lets the user select them
 * It does that by having the user type in a number
 * There will always be an option to call the roll function
 * in order to pick one of the previous options randomly
 */
int Select(int, std::string*, std::string describe);

/** returns a random number between 1 and max
 * uses C++11 random_device generator to do so
 * and just returns the generated int
 */
int Roll(int max);

///returns the contents of a text file
std::vector Readlist(std::string);

#endif