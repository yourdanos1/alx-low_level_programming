#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
int i;
char *result;
int current_position;
int j;
int total_length;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
result = (char *)malloc((total_length + 1) * sizeof(char));
if (result == NULL)
return (NULL);
current_position = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
result[current_position] = av[i][j];
current_position++;
j++;
}
result[current_position] = '\n';
current_position++;
}
result[current_position] = '\0';
return (result);
}
