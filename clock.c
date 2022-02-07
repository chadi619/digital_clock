#include<stdio.h>
#include<windows.h>
#include <time.h>
#include <conio.h> 
int main(){
	int h,m,s;
	printf("set the current time: \n");
	printf("hour:");
	scanf("%d",&h);
	printf("minut:");
	scanf("%d",&m);
	printf("second:");
	scanf("%d",&s);
	if(h>23 || m>59 || s>59 ||h<0 ||m<0 ||s<0 ){
		printf("ERROR !\nNOT A VALID TIME \nEXAMPLE:0>=hours<=23,0>=minutes<=59,0>=second<=59. ");
		
	}
	while(1){
		s++;
		if(s>59){
			m++;
			s=0;
		} if(m>59){
			h++;
			m=0;
		} if(h>23){
			h=0;
			
		} 
		
		 printf("clock: \n");
		printf("%02d:%02d:%02d",h,m,s);
		if(h<12){
			printf(" AM");
		} else{
			printf(" PM");
		}
		Sleep(913);
		system("cls");

	}	;

}



//hjnguhgbiufghutrgifhg




