#include <core.h>
#include <core/defines.h>

enum core_status core_init(
    struct core_handle * handle,
    struct core_config * config)
{
  handle->config = config;

  return core_status_ok;
}

enum core_status core_open(
    struct core_handle * handle)
{
  return OPEN(handle);
}

enum core_status core_set(
    struct core_handle * handle,
    struct core_key * key,
    struct core_value * value)
{
  (void)handle;
  (void)key;
  (void)value;

  return core_status_error;
}

enum core_status core_get(
    struct core_handle * handle,
    struct core_key * key,
    struct core_value * value)
{
  (void)handle;
  (void)key;
  (void)value;
  return core_status_error;
}

enum core_status core_close(
    struct core_handle * handle)
{
  return CLOSE(handle);
}
