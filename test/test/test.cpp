#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	FILE *fp;
	fp = fopen(argv[1], "rb");
	string text;

	if (fp == NULL) {
		cout << "File error";
		exit(0);
	}

	if (argc > 1) {
		int ch = fgetc(fp);
		while (ch != EOF) {
			text += (char)ch;
			text += ' ';
			ch = fgetc(fp);
	}

	}

	fclose(fp);
	cout << text << endl;

	system("pause");
}