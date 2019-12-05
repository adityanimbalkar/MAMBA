#include<stdio.h>
void ASCIIConversion(char);
int main()
{
    char Letter='A';
    printf("Enter letter\n");
    scanf("%c",&Letter);
    ASCIIConversion(Letter);
    return 0;
}

void ASCIIConversion(char Letter)
{
    if((Letter>=65)||(Letter<=90))
    {
    	printf("%c\n",Letter+32);
    }
    else
    {
        printf("%c\n",Letter-32);  
    }
   
}
