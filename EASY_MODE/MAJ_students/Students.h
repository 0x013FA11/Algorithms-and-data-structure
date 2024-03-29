#ifndef STUDENTS_H
#define STUDENTS_H

#include <libc.h>
#include <stdbool.h>
#include <assert.h>
#include "./GetNextLine.h"

#define SET "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

typedef struct StudentsInfo
{
	char 	ID[10];
	char 	*name;
	char 	*email;
	char 	*phone;
	int		number_of_course;
	struct StudentsInfo *next;
}t_StudentsInfo;

typedef struct CourseInfo
{
	char StudentID[10];
	char code_course[10];
	char *name;
}t_CourseInfo;

int	ListSize(t_StudentsInfo *info);

#endif