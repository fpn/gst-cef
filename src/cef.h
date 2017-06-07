#ifndef _CEF_H_
#define _CEF_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct gstCb {
    void * gstCef;
    void * push_frame;
    char * url;
};

void browser_loop(void * args);
void open_browser(void * args);
void shutdown_browser();
void close_all_browsers();

#ifdef __cplusplus
}
#endif


#endif
