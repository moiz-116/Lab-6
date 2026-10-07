#include<stdio.h>
#include<ctype.h>
int main(){
	char username[21];
	int i=0,vowels=0,consonants=0;
	printf("Enter username upto 20 characters: ");
	while (i < 20) {
        scanf("%c", &username[i]);
        if (username[i] == '\n') {
            break;
        }
        i++;
    }
    username[i] = '\0';
	for(i=0;username[i]!='\0';i++){
		if(username[i]=='a'||username[i]=='A'||username[i]=='e'||
		username[i]=='E'||username[i]=='i'||username[i]=='I'||username[i]=='o'||
		username[i]=='O'||username[i]=='u'||username[i]=='U'){
			vowels++;
		}
		else if(isalpha(username[i])){
			consonants++;
		}
	username[i]=toupper(username[i]);
	}
	printf("Vowels: %d\n",vowels);
	printf("Consonants: %d\n",consonants);
	printf("Uppercase username: %s\n",username);
	
}
