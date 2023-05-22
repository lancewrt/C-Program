/* This is a test if I know how to use Enum*/

#include <stdio.h>

int main()
{
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    enum company print = XEROX;
    enum company search = GOOGLE;
    enum company sell = EBAY;

    printf("Print = %i\n", print);
    printf("Search = %i\n", search);
    printf("Sell = %i\n", sell);

    return 0;
}
