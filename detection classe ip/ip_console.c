#include <stdio.h>
#include "ip.h"
int main()
{
    char ip[255];
    printf("Entrer un addresse ip:");
    scanf("%s",ip);
    trie(ip);

    return 0;
}
