#include <stdio.h>

// strcat ( srting concatnate ) 

char    *strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(dest[i])
        i++;
    j = 0; 
    while(src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char    dest[20] = "How is everything ";
    char    src[20] = "with ya?";

    strcat(dest, src);
    printf("%s\n", dest);
}
// expected outcome ---->>>> "How is everything with ya?"  
