#include <stdio.h>
#include <string.h>
int messenge[] = {15643,6913,6916,23040,2377,6985,6408,3657,5638,3084,2119,15910,23079,13629,23101,10300,10557,23073,13092,23369};

char m[2*(sizeof(messenge)/sizeof(messenge[0]))];

char* decrypts(void);

int main()
{
    for (int i = 0; i <= strlen(decrypts()); i++) {
        printf("%c",*(decrypts() +i));
    }
    printf("\n");
    return 0;
    
}

char* decrypts(void)
{
    int array[sizeof(messenge)/sizeof(messenge[0])];
    
    for (int i = 1; i <= sizeof(messenge)/sizeof(messenge[0]) ; i++)
    {
        array[i-1] = messenge[i-1]^31337;
        m[2*i-2] = array[i-1] >> 8;
        m[2*i-1] = array[i-1];
    }
    return m;
}
