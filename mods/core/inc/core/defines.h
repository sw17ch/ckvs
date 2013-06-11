#ifndef core_defines_h
#define core_defines_h

#define OPEN(HANDLE) ((HANDLE)->config->open((HANDLE)->config->persist_param))
#define CLOSE(HANDLE) ((HANDLE)->config->close((HANDLE)->config->persist_param))

#endif /* core_defines_h */
