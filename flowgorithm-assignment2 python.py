import random
random.seed()   #Prepare random number generator


# FOR -999/QUIT CASE:
# randomNumber=9
# input guessNumber=-999
# output "User has left. Thank you for playing!"
# FOR WIN CASE:
# randomNumber=3
# input guessNumber=3
# output "That's correct! Congratulations!!"
# Brian A.
# CTI 110/0036
randomNumber = int(random.random() * 11)
print("randomNumber :" + str(randomNumber))
print("Please guess the number between 0 and 10")
guessNumber = int(input())
while guessNumber != randomNumber and guessNumber != -999:
    print("Incorrect. Please try to guess the number between 0 and 10.")
    guessNumber = int(input())
if guessNumber == -999:
    print("User has left. Thank you for playing!")
else:
    print("That's correct! Congratulations!")
