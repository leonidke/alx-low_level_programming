#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - recursive helper funtion.
 * @s: string
 * @left: left index of string
 * @right: index of string from right.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_helper(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if string is palindrome.
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
