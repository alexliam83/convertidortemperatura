#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int temperature(char *temp)

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

   if (temp[i - 1] != 'C' && temp[i - 1] != 'F')
    {
    printf("No ha especificado la unidad");
	}
    else
    {
        if (temp[i - 1] == 'C')
            {
                while (temp[j] != temp[i])
                {
                    tempnum2[j] = temp[j];
                    tempnum = atoi(tempnum2);
					j++;

                }
				    printf("Su temperatura en Farenheit es:");
                    printf("%f", ((tempnum * 1.8) + 32));
                    printf("ºC");
            }
        if (temp[i - 1] == 'F')
            {
                while (temp[j] != temp[i])
                {
                    tempnum2[j] = temp[j];
                    tempnum = atoi(tempnum2);
					j++;
 
                }
				    printf("Su temperatura en Celsius es:"); 
                    printf("%f", ((tempnum - 32) * 0.5556));
                    printf("ºF");
            }
    }
	return 0;
}

int main (int argc, char **argv)

{
    if (argc > 2)
    {
        printf("Demasiados argumentos");
		return 0;
    }
	if (argc == 1)
	{
		printf("Solo 1 argumento");
	}
    else
    {
        temperature(argv[1]);
		return 0;
    }
}
