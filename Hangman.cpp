#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void hangman() {
    // List of words
    string words[] = {"CHINA", "JAPAN", "INDIA", "BRAZIL", "GERMANY", "FRANCE", "ITALY", "SPAIN", "UNITED STATES"};
    // Choose a random word from the list
    string word = words[rand() % (sizeof(words) / sizeof(words[0]))];
    int word_length = word.length();
    // Display string with underscores
    string display(word_length, '_');
    int chances = 11;
    int guessed_letters[26] = {0}; // Tracks guessed letters

    while (chances > 0) {
        // Clear screen
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        cout << "HANGMAN" << endl;
        cout << display << endl;
        cout << "Chances left: " << chances << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;
        guess = toupper(guess); // Convert guess to uppercase

        int index = guess - 'A'; // Calculate index (0-25)
        if (guessed_letters[index] == 1) {
            cout << "You already guessed that letter. Try again." << endl;
            cin.ignore();
            cin.get();
            continue;
        }

        guessed_letters[index] = 1; // Mark the letter as guessed

        bool correct_guess = false;
        for (int i = 0; i < word_length; ++i) {
            if (word[i] == guess) {
                display[i] = guess;
                correct_guess = true;
            }
        }

        if (correct_guess) {
            bool word_guessed = true;
            for (int i = 0; i < word_length; ++i) {
                if (display[i] == '_') {
                    word_guessed = false;
                    break;
                }
            }
            if (word_guessed) {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif

                cout << "HANGMAN" << endl;
                cout << display << endl;
                cout << "You win! The word was: " << word << endl;
                break;
            }
        } else {
            --chances;
            if (chances == 0) {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif

                cout << "HANGMAN" << endl;
                cout << display << endl;
                cout << "You lose! The word was: " << word << endl;
            } else {
                cout << "Incorrect! Hangman's body part is drawn." << endl;
            }
        }

        cin.ignore();
        cin.get();
    }

    char play_again;
    cout << "Play again? (y/n): ";
    cin >> play_again;

    if (play_again == 'y' || play_again == 'Y') {
        hangman();
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    hangman();

    return 0;
}
