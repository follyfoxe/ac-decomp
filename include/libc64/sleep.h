#ifndef SLEEP_H
#define SLEEP_H

#include <unistd.h>
#include "types.h"

#define msleep(ms) usleep(ms * 1000)

#endif
