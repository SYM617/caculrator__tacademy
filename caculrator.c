// caculator make example

#include<stdio.h>


int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(){
	// menu

	int ans;
	int x,y;

	printf("1. plus");
	printf("2. minus\n");
	printf("3. multiply\n");
	printf("4. divide\n");
	scanf("%d",&ans);

	
	printf("두 수를 입력하시오.\n");
	scanf("%d %d",&x,&y);	

	switch(ans){
		case1: add(x,y); // +
				break;
		case2: sub(x,y); // -
				break;
		case3: mul(x,y); // *
				break;				
		case4: div(x,y); // /
				break;
		default: printf("제대로 입력해."); 
				break;		
	}
	
	return 0;
}

int add(int x, int y){
	// 채워요.
}
int sub(int x, int y){
	// 채워요.
}
int mul(int x, int y){
	return x*y;
}
int div(int x, int y){
	// 채워요.
}