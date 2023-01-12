#include<stdio.h>
void main(){
	int n=0,i=0,e,o,x,a[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}, t[16];
	char ch,c1;
	printf("\n-----------< I Can Read Your Mind >-----------\n");
	printf("\n Don't Believe Me...?");
	printf("\n Choose a Number between 1-16(inclusive): ");
	printf("\n Press 'Y' or 'y' when you are ready: ");
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y'){
	printf("\n Is It Even or Odd? ");
	scanf(" %c",&c1);
	do{
		printf("\n Set-1\tSet-2");
		for(i=0;i<8;i++){
			printf("\n %d\t%d",a[i],a[i+8]);
		}
		ta:
		printf("\n In Which Set is Your Element?");
		scanf("%d",&x);
		if(x==1){
		for(i=0,e=7,o=15;i<16;i++){
			if(i%2!=0){
				t[i]=a[e];
				e--;
			}
			else{
				t[i]=a[o];
				o--;
			}
		}
		for(i=0;i<16;i++){
			a[i]=t[i];
		}
		}
		else if(x==2){
		for(i=0,e=7,o=15;i<16;i++){
			if(i%2==0){
				t[i]=a[e];
				e--;
			}
			else{
				t[i]=a[o];
				o--;
			}
		}
		for(i=0;i<16;i++){
			a[i]=t[i];
		}
		}
		else{
			printf("\n Please Enter 1 or 2\n Try Again!");
			goto ta;
		}
		n++;
	}while(n<3);
	if(c1=='e'||c1=='E'){
		printf("\n The number you picked is %d",a[5]);
	}
	else if(c1=='o'||c1=='O'){
		printf("\n The number you picked is %d",a[13]);
	}
}
}
