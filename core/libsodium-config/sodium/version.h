// Copyright (c) 2022 Husarnet sp. z o.o.
// Authors: listed in project_root/README.md
// License: specified in project_root/LICENSE.txt
#ifndef sodium_version_H
#define sodium_version_H

#include "export.h"

#define SODIUM_VERSION_STRING "1.0.14"

#define SODIUM_LIBRARY_VERSION_MAJOR 9
#define SODIUM_LIBRARY_VERSION_MINOR 6

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
const char* sodium_version_string(void);

SODIUM_EXPORT
int sodium_library_version_major(void);

SODIUM_EXPORT
int sodium_library_version_minor(void);

SODIUM_EXPORT
int sodium_library_minimal(void);

#ifdef __cplusplus
}
#endif

#endif