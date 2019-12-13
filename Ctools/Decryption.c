//#include <stdio.h>
//#include <string.h>
//void decrypts(char *result,int *messenge,int lenth);
//
//int main()
//{
//    int messenge[] = {15643,6913,6916,23040,2377,6985,6408,3657,5638,3084,2119,15910,23079,13629,23101,10300,10557,23073,13092,23369};
//
//    int lenth = (sizeof(messenge)/sizeof(messenge[0]));
//
//    char result[2*lenth];
//
//    for (int i = 0; i <= lenth*2; i++)
//        result[i] = '\0';
//
//    decrypts(&result,&messenge,lenth);
//
//    for (int i = 0; i <= strlen(result); i++)
//        printf("%c",*(result +i));
//
//    printf("\n");
//
//    return 0;
//}
//
//void decrypts(char *result,int *messenge,int lenth)
//{
//    int array[lenth];
//    for (int i = 1; i <= lenth ; i++)
//    {
//        array[i-1] = *(messenge+(i-1))^31337;
//        *(result + 2*i-2) = array[i-1] >> 8;
//        *(result + 2*i-1) = array[i-1];
//    }
//}
//#include <stdio.h>
//
//int strlet(char* string){
//    int i = 0;
//    while (*string) {
//        *string++;
//        i++;
//    }
//    return  i;
//}
//int main(){
//    char a[] = "jsahdbfjhsbdfhjb";
//    int m = strlet(a);
//    return 0;
//}
