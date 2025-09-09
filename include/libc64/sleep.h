#ifndef SLEEP_H
#define SLEEP_H

#include "types.h"

#ifdef _POSIX_VERSION
#include <unistd.h>
#define msleep(ms) usleep(ms * 1000)
#else
#define msleep(x) // TODO
#endif

#endif
