#pragma once
#include <stdio.h>
struct Tdata
{
	char question[255];
	char answer[5][100];
	int rightAnswer;
};
typedef struct Tdata Ddata;

struct testing
{
	Ddata data;
	struct testing* next;
	struct testing* prev;
};
typedef struct testing list;
