/*
 * Learning Structures in C.
 * File bookinfo.h
 *
 * This header file defines a structure for information about a book
 */

struct bookInfo {
	char title[40];
	char author[25];
	float price;
	int pages;
};
