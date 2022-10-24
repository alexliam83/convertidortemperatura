#include <string.h>
#include <stdlib.h>

void temperatura(char *temp)

{
   int i;
   char *converted;
   char *tempnum2;
   int tempnum;
   
   i = strlen(temp);
   tempnum = 0;
   converted = malloc(sizeof(temp));
   tempnum2 = malloc(strlen(temp - 2));
   if (!tempnum2)
   {
    return (NULL);
   }
   if (!converted)
   {
    return (NULL);
   }

   if (temp[i - 1] != "C" || temp[i - 1] != 'F')
    {
    printf("Error");
    }s
    else if (temp[i - 2] != 'º')
    {
        printf("Error");
    }
    else
    {
        if (temp[i - 1] == "C")
            {
                while (temp[i] != 'º')
                {
                    tempnum2[i] = temp[i];
                    tempnum = tempnum2 - '0';
                    printf("Su temperatura en Celsius es:");
                    printf("%d", ((tempnum * 1.8) + 32));
                    printf("ºC");
                }
            }
        if (temp[i - 1] == "F")
            {
                while (temp[i] != 'º')
                {
                    tempnum2[i] = temp[i];
                    tempnum = tempnum2 - '0';
                    printf("Su temperatura en Farenheit es:"); 
                    printf("%d", ((tempnum - 32) * 0.5556));
                    printf("ºF");
                }
            }
    }
}

void main (int argc, char **argv)

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