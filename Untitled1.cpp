#include <stdio.h>
#include <conio.h>
#include <math.h> 
int main(){
	/*
	int a,b,c;
	printf("Nhap a va b: ");
	scanf("%d %d",&a,&b);
		c = a + b;
	printf("%d\n",c);
		c = a- b;
	printf("%d\n",c);
		c = a*b;
	printf("%d\n",c);
		c = a/b;
	printf("%d\n",c);
	
	
	int c;
	printf("Nhap c: ");
	scanf("%d",&c);
	printf("\nputch c = "); putch(c);

	// Tinh dien tich hinh cn 
	float a,b,dt,cv;
	printf("Nhap do dai canh a: ");
	scanf("%f",&a);
	printf("Nhap do dai cach b: ");
	scanf("%f",&b);
	dt =a*b;
	cv = 2*(a+b);
	printf("Dien tich hinh cn la: %5.2f",dt);
	printf("\n");
	printf("Chu vi hinh chu nhat la: %5.2f",cv);
	
	float a,b,c,p,s,q;
	printf("Nhap a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
		p = a+b+c;
		q = p/2; 
		s = sqrt(q*(q-a) *(q-b)*(q-c));
		printf("Chu vi cua tam giac %5.2f, Dien tich cua tam giac %5.2f",s,p);
		*/
		
		
		}
	int a,b; 
		printf("Nhap so thu 1: ");
		scanf("%d",&a);
		printf("Nhap so thu 2: ");
		scanf("%d",&b);
		if(a < b){
			printf("So lon nhat la: %d",b);
		}
		else if (a == b){
		
		printf("Ca hai so bang nhau");
	}
	else 
	printf("So lon nhat la: %d", a);
	} 
int a,b;
char tt;
printf("nhap bieu thuc don gian: ");
scanf("%d%c%d", &a,&tt,&b);
switch(tt){
	case '+': 
	printf("%d %c %d = %d",a,tt,b,a+b);
		break; 
	case '-':
		printf("%d %c %d = %d",a,tt,b,a-b);
			break; 
		case '*':
			printf("%d %c %d = %d",a,tt,b,a*b);
				break; 
			case '/':
				if (b!=0)
					printf("%d %c %d = %d",a,tt,b,a/b);
			
				else 
					printf("Khong chia dc cho 0");

					break; 
					default:
		printf("Key cua ban sai roi"); 
}
	
}
