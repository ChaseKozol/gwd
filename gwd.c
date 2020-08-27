#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LINE_MAX 1024

int main(int argc, char* argv[]) {
	char buf[LINE_MAX] = {0};
	char *ifile_name = "/usr/share/dict/dict.txt";
	FILE *ifile = fopen(ifile_name, "r");

	int line_count = 1213293; // this is the number of lines in my dictionary file

	// uncommenting this will find the number of lines in the file if not already known
//	line_count = 0;
//	while (fgets(buf, LINE_MAX, ifile) != NULL) {
//		line_count++;
//	}

	srand(time(NULL));
	int line_to_read = rand() % line_count + 1;
	int i = 1;

	while (i <= line_to_read) {
		fgets(buf, LINE_MAX, ifile);
		i++;
	}
	printf("%s", buf);

	fclose(ifile);

	return 0;
}
