#include <cstdio>

struct book
{
	const char* Title;
	const char* Author;
	const char* Publisher;
	int Year_Published;
	int Qty;
};

void pull(book pulled_book)
{
	printf("Title: %s\nAuthor: %s\nPublisher: %s\nYear Published: %d\nQty: %d\n \n", pulled_book.Title, pulled_book.Author, pulled_book.Publisher,
	pulled_book.Year_Published, pulled_book.Qty);
}

int main()
{
	book book1 = { "The Little Things", "Mike Lee", "PUBCO", 2021, 3 };
	book book2 = { "The Some Things", "Sarah Johnson", "PUBLISH", 2011, 1 };
	book book3 = { "The Hard Things", "John Smtih", "PAPERCO", 2018, 5 };

	pull(book1);
	pull(book2);
	pull(book3);

	return 0;
}