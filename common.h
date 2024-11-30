#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>
#include <vector>
#include <atomic>

/** boost */
#include <boost/noncopyable.hpp>

#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef __linux__
#include <unistd.h>
#endif // __linux__

#endif // !__COMMON_H__
