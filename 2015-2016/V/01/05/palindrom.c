#include <stdio.h>
#include <string.h>

int main()

{
    char string[25], reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;
    printf("Vyvedi niz \n");
    scanf("%s",string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("Duljinata na niza '%s' = %d\n", string, length);
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s e palindrom \n", string);
    else
       printf("%s ne e palindrom \n", string);
    return 0;
}
