#include <stdio.h>
#include<stdbool.h>//  for using boolean stuff
int main(){
    char a='C';//%c
    char b[]="Shiv";//%sivnarayan

    float c=3.141592653589793;//6-7 digits,4 bytes. precision isn lost after 32 bits
    double d=3.141592653589793;//15-16 digits and 64 bits precision,8bytes.denoted by lf for long float
    
    bool e=true;// 1 byte of memory and %d

   // I am going to be a great developer! Someday, probably tomorrow

    char f= 120;// 1 byte stores ascii characters(-128 to 127) %c format for character. or %d for the number
    unsigned char g=50;// 1 byte. 0-255. negative parts of char are ignored. %d or %c

    short h=32767;//2 bytes(-32768 to 32767)%d( these are short int default and are written as short)
    unsigned short i =65535;//(2 bytes:0 to +65,535)%d

    int j=2147483647;// 4 bytes(-2147483648 to 2147483647)%d(these are long by default so int is actually long int)
    unsigned int k=4294967295;// 4bytes 0  to +4294967295 **** format specifier :%u

    long long int l=9223372036854775807;//format speccifier : %lld......... 8bytes -9 quintillion to +9 quintillion
    unsigned long long int m=18446744073709551615U;//%llu....... 8 bytes 0 to 18 quintillion
    // theres a warning while executing the last one. to not ge that add an U in the end of the numbers




    printf("%0.15f\n",c);// %0.xf can be used where x denotes the digits after decimal you wish to show
    printf("%0.15lf\n",d);// same but more precison

    printf("%d\n",e);//bool. true=1 false=0

    printf("%c\n",f);// ascii character corresponding this value. if you use %f as the format output is 0.00000
    printf("%c\n",g);// going beyond ascii characters say 255 returns somethng i can't read. besides that thr function is similar
    
    printf("%d\n",h);// short
    printf("%d\n",i);// unsigned short

    printf("%d\n",j);// int
    printf("%u\n",k);// unsigned int

    printf("%lld\n",l);// long
    printf("%llu\n",m);// unsigned long
    
   

    /* using format specifiers:
    %c= character
    %s=string(array or characters)
    %f= float
    %lf=double
    %d=double
    %.1= decimal precsion of 1
    %1=minimum field width
    %- =left align
    */

   float item1=5.75;
   float item2=10.00;
   float item3=100.99;
   printf("\nItem 1 :$%8.2f",item1);//%8 sets the sapace for field width. thats the minimum
   printf("\nItem 2 :$%8.0f",item2);// cursor starts from 8 spaces from the point then moves left
// if it doesnt fit with full left expasnion the border is breached to the right as well.
   printf("\nItem 3 :$%8.4f",item3);
   printf("\nItem 3 :$%8.5f",item3);


   // now to left align all this leave empty space on the right add a -
    printf("\nItem 1 :$%-8.2f",item1);
   printf("\nItem 2 :$%-8.0f",item2);
   printf("\nItem 3 :$%-8.5f",item3);



   // to turn something to a constant so that it's value can't be altered
   // within the program add a const before settiing the data type. this makes it read only.
   // also its good practice to capitalize the variable names of constant data
   const float PI=3.1415;
   PI=3000;
   printf("\n%lf",PI);
    
    return 0;
    }