#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x) |x|
int main()
{
	int x;
	if (x >= 0)
		ABS(x) = x;
	else
		(x < 0)
		ABS(-x) = x;
	return (0);
}
#endif
