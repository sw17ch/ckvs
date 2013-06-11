#ifndef core_h
#define core_h

#include <core/config.h>
#include <core/handle.h>
#include <core/key.h>
#include <core/status.h>
#include <core/value.h>

enum core_status core_init(
    struct core_handle * handle,
    struct core_config * config);

enum core_status core_set(
    struct core_handle * handle,
    struct core_key * key,
    struct core_value * value);

enum core_status core_get(
    struct core_handle * handle,
    struct core_key * key,
    struct core_value * value);

#endif /* core_h */
