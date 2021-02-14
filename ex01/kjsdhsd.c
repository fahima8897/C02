#include <string.h>
#include <stdio.h>

int main ()
{
    char tab[] = "Bonjour bitch";
    char tab2[7];
    printf("%s\n", strncpy(tab2, tab, 7));
    return 0;
}