//
// Created by arias on 11/25/2019.
//

#ifndef BOOKSTORE_01_LIBRARY_H
#define BOOKSTORE_01_LIBRARY_H

#include "book.h"
#include <string>
using std::string;

const int MAX_BOOKS = 3;

class Library {
    Book* _books[MAX_BOOKS];
    unsigned int _bookCount;
public:
    Library();
    ~Library();
    unsigned int GetCount()const;
    bool AddBook(const Book&);
    bool AddBook(const string&, double);
    int FindBook(const string&)const;
    Book* Get(unsigned int)const;


};


#endif //BOOKSTORE_01_LIBRARY_H
