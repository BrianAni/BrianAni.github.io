function main() {
    // FOR -999/QUIT CASE:
    // randomNumber=9
    // input guessNumber=-999
    // output "User has left. Thank you for playing!"
    // FOR WIN CASE:
    // randomNumber=3
    // input guessNumber=3
    // output "That's correct! Congratulations!!"
    // Brian A.
    // CTI 110/0036
    var guessNumber;
    var randomNumber;

    randomNumber = Math.floor(Math.random() * 11);
    window.alert("randomNumber :" + randomNumber);
    window.alert("Please guess the number between 0 and 10");
    guessNumber = Number(window.prompt('Enter a value for guessNumber'));
    while (guessNumber != randomNumber && guessNumber != -999) {
        window.alert("Incorrect. Please try to guess the number between 0 and 10.");
        guessNumber = Number(window.prompt('Enter a value for guessNumber'));
    }
    if (guessNumber == -999) {
        window.alert("User has left. Thank you for playing!");
    } else {
        window.alert("That's correct! Congratulations!");
    }
}
