
#ifndef _EXT_TLS_H_
#define _EXT_TLS_H_

#include "results.h"

int tls_decide_auth( const char query[] );
void tls_trigger_auth( struct results_t *results );

void tls_setup( void );
void tls_free( void );

#endif /* _EXT_TLS_H_ */
