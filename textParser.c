#include <stdio.h>

int main()
{
    char htmlString[1000];
    int counter = 0;
    int i = 0;

    fgets(htmlString, 1000, stdin);

    for(i = 0; i < 998; i++)
    {
        if(htmlString[i] == '<'
                && htmlString[i + 1] == 'p'
                && htmlString[i + 2] == '>')
        {
            counter++;
        }
    }

    printf("There are %d occurences of <p>", counter);

    return 0;
}
