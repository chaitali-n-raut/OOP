/* Design a Music Library System where you can manage music tracks, albums, and artists, etc.
Perform the following operations: 
1. Initilize Music library System information.
2.Accept the details.
3.Display the details.
4.Display the song/album information according to release date. */

#include<iostream>
using namespace std; 

class MusicLib 
{
    private:
        string musicT, album, artist;
        string RDate; // Change RDate to string type

    public:
        void Display(); 
        string getReleaseDate(); // Function to get release date
        MusicLib(); // Constructor
};

// Constructor definition
MusicLib::MusicLib() 
{
    cout << "\nEnter Music Track: "; 
    cin >> musicT; 
    cout << "\nEnter Music Album Name: "; 
    cin >> album; 
    cout << "\nEnter Artist Name: "; 
    cin >> artist; 
    cout << "\nEnter Release Date (YYYY-MM-DD): "; 
    cin >> RDate; // Accepting release date as string
}

// Display function to show details
void MusicLib::Display() 
{
    cout << "\n----------------- Information -------------------"; 
    cout << "\nMusic Track: " << musicT; 
    cout << "\nMusic Album: " << album; 
    cout << "\nMusic Artist: " << artist; 
    cout << "\nRelease Date: " << RDate; 
    cout << "\n-------------------------------------------------";
}

// Function to get the release date of the song
string MusicLib::getReleaseDate() 
{
    return RDate; // Now this will return the string date
}

int main() 
{
    MusicLib *library[10]; // Array to hold up to 10 music track objects
    int trackCount = 0;
    int choice;
    string searchDate;

    do 
	{
        cout << "\n\n--- Music Library Menu ---\n";
        cout << "1. Accept Music Details\n";
        cout << "2. Display All Music Details\n";
        cout << "3. Display Music by Release Date\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) 
		{
            case 1: // Accept music details
                if (trackCount < 10) {
                    library[trackCount] = new MusicLib();
                    trackCount++;
                } 
				else 
				{
                    cout << "Library is full. Cannot add more tracks.\n";
                }
                break;

            case 2: // Display all music details
                for (int i = 0; i < trackCount; i++) 
				{
                    library[i]->Display();
                }
                break;

            case 3: // Display songs by release date
                cout << "\nEnter release date (YYYY-MM-DD) to search for: ";
                cin >> searchDate;
                for (int i = 0; i < trackCount; i++) 
				{
                    if (library[i]->getReleaseDate() == searchDate) 
					{
                        library[i]->Display();
                    }
                }
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    // Clean up dynamically allocated memory
    for (int i = 0; i < trackCount; i++) 
	{
        delete library[i];
    }

    return 0;
}
