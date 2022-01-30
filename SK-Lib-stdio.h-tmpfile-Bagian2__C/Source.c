#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char str[] = "Hello User";
	int i = 0;

	FILE* tmp = tmpfile();
	if (tmp == NULL) {
		puts("Unable to create temp file");
		return 0;
	}

	puts("Temporary file is created\n");

	while (str[i] != '\0') {
		fputc(str[i], tmp);
		i++;
	}

	// rewind() function sets the file pointer
	// at the beginning of the stream.
	rewind(tmp);

	while (!feof(tmp)) {
		putchar(fgetc(tmp));
	}
		
	_getch();
	return 0;
}
