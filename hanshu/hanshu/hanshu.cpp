#include<stdio.h>
#include<iostream>
using namespace std;

void Move();
void Build();
void Paint();

int main()
{
	Move();
	Build();
	Paint();

	system("Pause");
	return 0;
}


void Move()
{
	printf("this Function can move material\n");
}

void Build()
{
	printf("this Function can build a building\n");
}

void Paint()
{
	printf("This Function can paint cloth\n");
}