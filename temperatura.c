#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int temperatura(char *temp)

{
   int i;
   int j;
   char *converted;
   char *tempnum2;
   int tempnum;
   
   i = strlen(temp);
   j = 0;
   tempnum = 0;
   converted = malloc(sizeof(temp));
   tempnum2 = malloc(strlen(temp - 2));
   if (!tempnum2)
   {
    return (0);
   }
   if (!converted)
   {
    return (0);
   }

   if (temp[i - 1] != 'C' || temp[i - 1] != 'F')
    {
    printf("Error");
    }
    else if (temp[i - 2] != "º")
    {
        printf("Error");
    }
    else
    {
        if (temp[i - 1] == 'C')
            {
                while (temp[j] != 'º')
                {
                    tempnum2[j] = temp[j];
                    tempnum = atoi(tempnum2);
                    printf("Su temperatura en Celsius es:");
                    printf("%f", ((tempnum * 1.8) + 32));
                    printf("ºC");
                }
            }
        if (temp[i - 1] == 'F')
            {
                while (temp[j] != "º")
                {
                    tempnum2[j] = temp[j];
                    tempnum = atoi(tempnum2);
                    printf("Su temperatura en Farenheit es:"); 
                    printf("%f", ((tempnum - 32) * 0.5556));
                    printf("ºF");
                }
            }
    }
}

int main (int argc, char **argv)

{
    if (argc > 2)
    {
        printf("Error");
    }
    else
    {
        temperatura(argv[1]);
    }
}