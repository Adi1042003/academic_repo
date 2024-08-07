#include <stdio.h>

int main() {
    char c;
    int wordcount = 0;
    int chcount = 0;
    int lencount[100];
    char word[100][100];
    int i = 0;

    while (1) {
        int fe = scanf("%c", &c);
        if (EOF == fe) // Check for EOF
            break;
        if (c == ' ' || c == '\t'|| c == '\n') {
            wordcount++;
            chcount = 0;
        } else {
            word[wordcount][chcount] = c;
            chcount++;
        }
        word[wordcount][chcount] = '\0';
        lencount[wordcount] = chcount;
    }
    int count,br=0,rep=0,l=0;
   while(1){
	  count++;
	  rep=0;
    for (int j = 0; j < wordcount; j++) {
	    if (count == lencount[j]){
		    rep++;
		    br++;
        printf("%d letter word is ", lencount[j]);
        for (int k = 0; k < lencount[j]; k++) {
            printf("%c", word[j][k]);
	    
        }
	//printf("%d",rep);
        printf("\n");
    }}
   // repcount=[l++]=rep;
   if(rep>0){printf("The total number is =  %d \n\n",rep);}
   if (br == wordcount)
	   break;
   }
    
    return 0;
}
