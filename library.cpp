//
// Created by arias on 11/25/2019.
//

#include "library.h"


Library::Library(){
    _bookCount = 0;
    for (int i = 0; i < MAX_BOOKS; ++i) {
        _books[i] = nullptr;
    }
}
Library::~Library(){
    for (int i = 0; i < _bookCount; ++i) {
        if (_books[i] != nullptr)
            delete _books[i];
    }
}
unsigned int Library::GetCount()const{
    return _bookCount;
}
bool Library::AddBook(const Book& book){
    if (_bookCount == MAX_BOOKS)
        return false;
    _books[_bookCount] = new Book(book);
    _bookCount++;
    return true;
}
bool Library::AddBook(const string& name, double price){
    if (_bookCount == MAX_BOOKS)
        return false;
    _books[_bookCount] = new Book(name, price);
    _bookCount++;
    return true;
}
int Library::FindBook(const string& name)const{
    Book toFind(name, 0);
    for (int i = 0; i < _bookCount; ++i) {
//        if (toFind.Equals(*_books[i]))
        if (_books[i]->Equals(toFind))
            return i;
    }
    return -1;
}
Book* Library::Get(unsigned int index)const{
    if (index >= _bookCount)
        return nullptr;
    else
        return _books[index];
}
