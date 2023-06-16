#include<stdio.h>

int main(){
	int i;
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for(i=0;i<59;i++){
		putchar(quote[i]);
	}
	return(1);
}
