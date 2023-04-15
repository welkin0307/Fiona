#include <stdio.h>
#include <stdlib.h>
#include "Error.h"

void fatal(const char* file, int line, const char* message) {
    fprintf(stderr, "FATAL %s:%d %s\n", file, line, message);
    abort();
}

void debug(const char* file, int line, const char* message) {
    fprintf(stderr, "DEBUG %s:%d %s\n", file, line, message);
}
