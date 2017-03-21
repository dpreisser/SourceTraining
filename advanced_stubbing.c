#include <stdlib.h>
#include <string.h>

char* use_malloc( void )
{
  char* ptr = (char*)malloc( 10 );
  if ( !ptr )
  {
    return 0;
  }
  else
  {
    strcpy( ptr, "ok" );
  }
  return ptr;
}

enum e_status
{
  NULL_FUNCTION,
  STATUS_PASS,
  STATUS_FAIL,
};

typedef int (*func_ptr_t)(void);

enum e_status use_function_pointer( func_ptr_t func )
{
  int rc;

  if ( !func )
  {
    return NULL_FUNCTION;
  }
  else
  {
    rc = (*func)();
    if (rc == 0)
      return STATUS_PASS;
    else
      return STATUS_FAIL;
  }
}

extern const int g_int;
int use_const_global( void )
{
  int i;
  
  if ( g_int )
  {
    i = g_int;
  }
  else
  {
    i = 0;
  }

  return i;
}
