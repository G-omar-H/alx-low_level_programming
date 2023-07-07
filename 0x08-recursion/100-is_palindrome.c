#include "main.h"
/***/
int check_pal(char *x, int first, int last);
int is_palindrome(char *s)
{
	if (strlen(s) == 0 || strlen(s) == 1)
		return (1);
	return (check_pal(s, 0, strlen(s) - 1));
}
/***/
int check_pal(char *x,int first,int last)
{
	if (first >= last)
		return (1);
	
	if (x[first] == x[last])
	{
			check_pal(x, first + 1, last - 1);
	}
	return (0);
}
