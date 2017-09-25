      
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i,jk,lk,h,gf,t,p,e=1,x[5];
//loop1 for the top part of the numbers
//	scanf("%d",&t);
	for(;1;){
		int jjk =0;
        printf("Please Enter a font size(an integer)");
	scanf("%d",&e);
	if(e==00)
		break;
        printf("Enter a five digit number(an integer eg. 12345)");
	scanf("%d",&gf);
	
	for(jk=100000,lk=(jk/10),i=0;i<5;i++){
		x[i]=gf%jk/lk;
		lk/=10;
		jk/=10;}

	printf("\n");
	for(i=0;i<5;i++){
		if(x[i]>=2&&x[i]<=3||x[i]>=5&&x[i]<=9||x[i]==0){
			printf(" ");
	for(h=0;h<e;h++)
			printf("-");

			printf(" ");}

		else
			{
			printf(" ");
			for(h=0;h<e;h++)
			printf(" ");
			printf(" ");}
	}

			printf("\n");
//loop2 for the top middle part of the numbers
			for(p=0;p<e;p++){
	for(i=0;i<5;i++){
		if(x[i]==1||x[i]==4||x[i]>=5&&x[i]<=6||x[i]>=8&&x[i]<=9||x[i]==0)
			 printf("|");
		else 
			 printf(" ");

		if(x[i]>=2&&x[i]<=4||x[i]>=7&&x[i]<=9||x[i]==0){
			for(h=0;h<e;h++)
			printf(" ");
			printf("|");}
		else {
			for(h=0;h<e;h++)
			printf(" ");
			printf(" ");}

	}
printf("\n");
			}


			//printf("\n");


//loop3 for the middle parts of the numbers
	for(i=0;i<5;i++){
		if(x[i]>=2&&x[i]<=6||x[i]>=8&&x[i]<=9){
			printf(" ");
	for(h=0;h<e;h++)
			printf("-");
			printf(" ");}
		else 
			{
			printf(" ");
			for(h=0;h<e;h++)
			printf(" ");
			printf(" ");}
	}

			printf("\n");

//loop4 for the down middle part of the numbers
	for(p=0;p<e;p++){
			for(i=0;i<5;i++){
		if(x[i]==1||x[i]==2||x[i]==6||x[i]==8||x[i]==0)
			printf("|");
		else 
			printf(" ");

		if(x[i]>=3&&x[i]<=9||x[i]==0){
			for(h=0;h<e;h++)
			printf(" ");
			printf("|");}
		else {
			for(h=0;h<e;h++)
			printf(" ");
			printf(" ");
		}

	}
printf("\n");
	}


			//printf("\n");
//loop5 for the lower down part of the numbers
	for(i=0;i<5;i++){
		if(x[i]>=2&&x[i]<=3||x[i]>=5&&x[i]<=6||x[i]==8||x[i]==0){
			printf(" ");
		for(h=0;h<e;h++)
			printf("-");
			printf(" ");}
		else {
			printf(" ");
			for(h=0;h<e;h++)
			printf(" ");
			printf(" ");}
	}



			printf("\n");
	}
system("pause");


	return 0;

}