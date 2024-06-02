# Hangman Game

Welcome to the Hangman Game! This is a classic implementation of the Hangman game in C++. In this game, the computer randomly selects a country or city name, and the player must guess the name one letter at a time. The player has a limited number of incorrect guesses before the game is lost.

## Features

- **Random Word Selection**: The game randomly selects a word from a predefined list of country and city names.
- **Guess Tracking**: Keeps track of the letters guessed by the player.
- **ASCII Art**: Displays the hangman being drawn as the player makes incorrect guesses.
- **Cross-Platform**: Compatible with both Windows and Unix-like systems for clearing the screen.
- **Replayability**: Prompts the player to play again after the game ends.

## How to Play

1. The game will display underscores representing the letters of the selected word.
2. The player enters a letter as a guess.
3. If the guessed letter is in the word, the corresponding underscores will be replaced with the guessed letter.
4. If the guessed letter is not in the word, a part of the hangman's body is drawn.
5. The player wins if they guess all the letters in the word before the hangman is fully drawn.
6. The player loses if the hangman is fully drawn before they guess all the letters in the word.
7. After the game ends, the player is prompted to play again.

## Installation and Execution

1. Clone the repository:
    ```bash
    git clone https://github.com/Maryam-Shafiq/Hangman-Cpp
    cd hangman-game
    ```

2. Compile the code:
    ```bash
    g++ -o Hangman Hangman.cpp
    ```

3. Run the executable:
    ```bash
    ./Hangman
    ```

## Example Output

HANGMAN
_ _ _ _ _ _
Chances left: 11
Enter a letter: A
Incorrect! Hangman's body part is drawn.

HANGMAN
_ _ _ A _ _
Chances left: 10
Enter a letter: E
Incorrect! Hangman's body part is drawn.

...

HANGMAN
B R A Z I L
Chances left: 9
You win! The word was: BRAZIL


## Code Overview

The main logic of the game is implemented in the `Hangman` function, which includes:

- **Random Word Selection**: The word is chosen randomly from a predefined list.
- **Display Update**: The current state of the guessed word is displayed.
- **Guess Handling**: Tracks and processes the player's guesses.
- **Hangman Drawing**: ASCII art representation of the hangman is drawn based on the number of incorrect guesses.
- **Win/Lose Condition**: Checks if the player has won or lost after each guess.
- **Replay Prompt**: Asks the player if they want to play again after the game ends.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to create a pull request or open an issue.

