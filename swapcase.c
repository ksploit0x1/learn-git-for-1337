#include <unistd.h>
#include <stdio.h>
// swap char if lower chaange to upper and vice versa
char swap(char);
int len(char *tx){
	int i = 0;
	while(tx[i] != '\0'){
		i++;
	}
	return i;
}
int main(){
	char *text = "HellLo World";
	int size = len(text);
	char output[size];
	int i=0;
	while (text[i]!='\0'){
		output[i]=swap(text[i]);
		i++;
	}
	write(1,output,size);
}
char swap(char c){
	if (c >= 65 && c <= 90){
		// this mean char is upper
		return c+32;
	}if (c >= 97 && c <= 122){
		// this mean char is lower
		return c-32;
	}
	return c;
}
