#include <stdio.h>

struct st01{
		
 int attr1;
		
};


struct st02{
		
 int attr1;
 struct st01 attr2;
		
};


struct st03{
		
 int attr1;
 char attr2;
 int attr3;
 struct st03* attr4;
		
};


int main(){

	struct st02 teste1;
	teste1.attr1 = 10;
	teste1.attr2.attr1 = 22;
	
	printf("%d\n", &teste1);
	
	struct st03 teste;
	printf("%x\n", &teste.attr1);
	printf("%x\n", &teste.attr2);
	printf("%x\n", &teste.attr3);
	//printf("%d %d", teste.attr1, teste.attr2.attr1);
	
}


