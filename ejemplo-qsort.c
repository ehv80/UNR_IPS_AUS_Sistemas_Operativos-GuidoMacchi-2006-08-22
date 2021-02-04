#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Arreglo de punteros a cadenas de caracteres */
static char *arr[]=
{
	"Esta", "es", "una", "p...", "prueba"
};

static int cmp(const void *a, const void *b)
{
	const char **pa=a , **pb=b;
	return strcmp((*pa),(*pb));
}

int main ()
{
	int i;
	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]),cmp);
	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		printf("%s\n",arr[i]);
	return 0;
}
