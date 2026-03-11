#include <iostream>
using namespace std;

class LibraryBook
{
private:
	string book_title;
	int copies_available;
public:
	LibraryBook()
	{
		book_title = "C++ Basics";
		copies_available = 3;
	}
	void set_title(string new_title)
	{
		if (new_title.size() > 0)
		{
			book_title = new_title;
		}

	}
	string get_title()
	{

		return book_title;
	}

	int get_copies()
	{
		return copies_available;
	}

	void borrow_book()
	{
		if (copies_available > 0)
		{
			copies_available -= 1;
		}
		else
		{
			cout << "Book is unavailable, check again later!\n";
		}
	}
};





int main()
{
	LibraryBook book;

	string input_title;
	int borrow_count;

	cout << "Enter book title: ";
	cin >> input_title;
	cout << "Enter how many books you want to borrow: ";
	cin >> borrow_count;

	book.set_title(input_title);

	for (int index = 0; index < borrow_count; index++)
	{
		book.borrow_book();
	}

	cout << "Title: " << book.get_title() << endl;
	cout << "Copies left: " << book.get_copies() << endl;
	return 0;
}

