#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int re = 0, un = 0,b,re2=0;
	char alpha[10];
	gets_s(alpha);
	b = strlen(alpha);
	for (int i = 0; i < b; i++) {
		if ((alpha[i] >= 65 && alpha[i] <= 90) || (alpha[i] >= 97 && alpha[i] <= 122)) {
			if (alpha[i] >= 65 && alpha[i] <= 90) {
				re++;
			}
			else if (alpha[i] >= 97 && alpha[i] <= 122) {
				re2++;
			}
		}
		else {
			un++;
		}
	}
	if (un == 0) {
		if (re2 == b) {
			printf("All Small Letter");
		}
		else if (re == b) {
			printf("All Capital Letter");
		}
		else {
			printf("Mix");
		}
	}
	return 0;
}