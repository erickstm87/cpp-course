#include "../header/Book.h"
#include <iostream>
using namespace std;

Book::Book(string author, string title, string genre, int numPages)
{
  this->author = author;
  this->title = title;
  this->genre = genre;
  this->numPages = numPages;
}
      
string Book::getAuthor() const {
    return author;
}
string Book::getTitle() const {
    return title;
}
string Book::getGenre() const {
    return genre;
}
int Book::getNumPages() const {
    return numPages;
}
void Book::printBookDetails() {
     cout << "the book you passed in was written by " << author << ", and it's title is " << title << ". The genre is " << genre << " and it's " << numPages << " pages long." << endl;
}
