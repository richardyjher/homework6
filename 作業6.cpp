#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("�п�J�褸�~��:",year);
	scanf("%d",&year); 
    if((year%4)==0 && (year%100)!=0 || (year%400) ==0&&(year%3200)!=0)
    {
      printf ("%d�O�|�~\n",year);
    }
      else
    {
      printf ("%d���O�|�~\n",year);
    } 
	  system("PAUSE");
      return 0;
}
