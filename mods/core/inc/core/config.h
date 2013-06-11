#ifndef core_config_h
#define core_config_h

typedef enum core_status (core_open_fn)(void * persist_param);
typedef enum core_status (core_close_fn)(void * persist_param);

struct core_config {
  void * persist_param;
  core_open_fn * open;
  core_close_fn * close;
};

#endif /* core_config_h */
