#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,c;
	char b;
	printf("請輸入四則運算:");
	scanf("%d%c%d",&a,&b,&c);
	printf("數值1=%d,數值2=%d,運算符號=%c\n",a,c,b);
	switch(b){
		case'+':{ 
			printf("%d+%d=%d",a,c,a+c);
			break;
			} 
		case'-':{ 
		    printf("%d-%d=%d",a,c,a-c);
			break;
			} 
		case'*':{ 
		    printf("%d*%d=%d",a,c,a*c);
			break;
			} 
		case'/':{ 
		    printf("%d/%d=%d",a,c,a/c);
			break;
			}
		default:{
			printf("您輸入的值不正確");
			break;
		}		
		}
	
	
	
	
	return 0;
}
