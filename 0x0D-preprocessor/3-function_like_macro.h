#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))
#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif /* FUNCTION_LIKE_MACRO */
