#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b)
{
	const char **ia = (const char **)a;
	const char **ib = (const char **)b;
	return strcmp(*ia, *ib);
	
}



int main( void )
{
	char* chars[] = {"ABC", "CDE", "ZFAA"};
	
	int char_len = sizeof(chars)/ sizeof(char*);
	
	qsort(chars, char_len, sizeof(char*), cmp);
	int i;
	
	for(i = 0; i < char_len; i++ )
	printf("%s ", chars[i]);
}
