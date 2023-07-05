#include "main.h"
/**
 * is_palindrome_helper - checker
 * Description: 'the program checks words
 * to be palindrom'
 * @s: pointer to the string.
 * @start: first string.
 * @end: last string.
 * Return: '1 (if palindrome)
 * 0 if not.'
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return 1;
	}
	else if (s[start] != s[end])
			{
				return 0;
			}
	else
	{
		return is_palindrome_helper(s, start + 1, end - 1);
	}
}
/**
 * is_palindrome - Entry point
 * 
 * Description: 'recursive function'
 * @s: string
 * Return: status
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	return is_palindrome_helper(s, 0, len - 1);
}
