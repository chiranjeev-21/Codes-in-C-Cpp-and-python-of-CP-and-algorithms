#include <stdio.h>

void myprint(char let, int num, int line)
{
int countL=0,countT=0,numb, lin;
char abc;
numb=num;
line=lin;
abc=let;

while(countL<lin)
{
    while(countT<numb)
    {
        printf("%s",abc );
        countT++;
    }
    printf("\n");
    countL++;
 }
}

int main(int argc, char const *argv[])
{
int times = 5, lines = 3;
char letter = 'a';

myprint(letter, times, lines);

return 0;
}