#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	FILE *fp;
	fopen_s(&fp, "rs.txt", "r");
	string text;

	if (fp == NULL) {
		cout << "File error";
		exit(0);
	}

	int ch = fgetc(fp);
	while (ch != EOF) {
		text += (char)ch;
		text += ' ';
		ch = fgetc(fp);
	}

	fclose(fp);
	cout << text << endl;
}