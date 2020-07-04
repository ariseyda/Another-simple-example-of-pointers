#include<stdio.h>

//Write a program to count vowels and consonants in string by using pointer. 

int main(){
	
	char word[20];
	char *p;
	printf("Enter a word:");
	scanf("%s",word);
	p=word;
	int i,count1=0,count2=0;
	for(i=0;p[i]!='\0';i++){
		if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' || p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U' ){
			count1++;
		}
		else{
			count2++;
		}
	}
	printf("\nNumber of vowels:%d",count1);
	printf("\nNumber of consonants:%d",count2);
	
	
	return 0;
}
