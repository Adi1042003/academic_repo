#include <stdio.h>
#include <stdlib.h>
void deleteComments(const char *fileName) {
	FILE *file = fopen(fileName, "r");
	FILE *tempFile = fopen("temp.txt", "w");
	int c, prev,prv;

	if (file == NULL || tempFile == NULL) {
		perror("Error opening file");
		exit(0);
	}

	while ((c = fgetc(file)) != EOF) {
		prv = c;
		if(c=='"')
		{	
			fputc(prv,tempFile);
			while ((c = fgetc(file)) != '"'){

				fputc(c,tempFile);
			}
		}
		if (c == '/') {
			prev = c;
			c = fgetc(file);
			if (c == '/') { // Single-line comment
				while ((c = fgetc(file)) != EOF && c != '\n');
			} else if (c == '*') { // Multi-line comment
				while ((c = fgetc(file)) != EOF) {
					if (c == '*' && (c = fgetc(file)) == '/') {
						break;
					}
				}
			} else { // Not a comment
				fputc(prev, tempFile);
				fputc(c, tempFile);
			}
		} else {
			fputc(c, tempFile);
		}
	}

	fclose(file);
	fclose(tempFile);

	// Delete the original file
	if (remove(fileName) != 0) {
		printf("Error deleting the file");
		exit(0);
	}

	// Rename the temporary file to the original file name
	if (rename("temp.txt", fileName) != 0) {
		printf("Error renaming the file");
		exit(0);
	}
}


int main(int ac, char *av[]) {
	const char *fileName = av[1];
	printf("%s",av[1]);
	if (ac < 1 || ac >2) {
		fprintf(stderr, "Enter proper arguments in command line\n");
	} else {   
		deleteComments(fileName);

		printf("Comments deleted successfully from %s.\n", fileName);}
	return 0;
}
