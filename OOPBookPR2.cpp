#include <iostream>
#include <string>
using namespace std;

class Book 
{
    string author, title, publisher;
    float price;
    int stock;

public:
    // Constructor to initialize the book details
    Book() 
	{
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter book author: ";
        cin >> author;
        cout << "Enter book publisher: ";
        cin >> publisher;
        cout << "Enter book price: ";
        cin >> price;
        cout << "Enter stock quantity: ";
        cin >> stock;
    }

    // Function to search for a book by title and author
    bool searchBook() 
	{
        string searchTitle, searchAuthor;
        cout << "Enter title of the book you are looking for: ";
        cin >> searchTitle;
        cout << "Enter author of the book: ";
        cin >> searchAuthor;

        return (title == searchTitle && author == searchAuthor);
    }

    // Function to display book details
    void showBook() 
	{
        cout << "Title: " << title 
             << "\nAuthor: " << author 
             << "\nPublisher: " << publisher
             << "\nPrice: " << price 
             << "\nStock: " << stock << endl;
    }

    // Function to check if requested copies are available
    bool checkStock() 
	{
        int reqCopies;
        cout << "Enter number of copies required: ";
        cin >> reqCopies;

        if (stock >= reqCopies) 
		{
            stock -= reqCopies; // Reduce the stock after sale
            cout << "Total cost: " << reqCopies * price << endl;
            return true;
        } 
		else 
		{
            cout << "Required copies not in stock.\n";
            return false;
        }
    }
};

int main() 
{
    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;
    
    Book *books = new Book[numBooks]; // Dynamically allocated array using 'new'
    int choice;
    char cont;

    do 
	{
        cout << "\nMenu:\n1. Search Book\n2. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                // Search for the book by title and author
                for (int i = 0; i < numBooks; i++) 
				{
                    if (books[i].searchBook()) 
					{
                        cout << "Book found!\n";
                        books[i].showBook();
                        books[i].checkStock();
                        break;
                    } 
					else if (i == numBooks - 1) 
					{
                        cout << "Book not available.\n";
                    }
                }
                break;

            case 2:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    delete[] books; // Free dynamically allocated memory

    return 0;
}
