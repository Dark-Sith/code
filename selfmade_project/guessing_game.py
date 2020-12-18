import os
import random
num=random.randint(1,100)

print("A Number Guessing Game")
print("I will randomly pick a number between 1 to 100.")
print("Guess my number!")

ask=('So, What is your guess?','Answer please!','You are slow','Believe in your intuition!')
rspwrgnum=('OUT OF BOUNDS!! Please choose a number between 1 to 100 only!','I thought I told you to pick a number between 1 to 100!?')
winrsp=('You guessed it correctly!! Congrats!','What?? Impossible, I thought no one would have got it!','Tskkk! You are just lucky!')
intlres=('Wise choice but nope!','Oopssss, bad luck!','Are you even trying??')
smlthnres=('You are getting closer!','Better than your last turn','Hmm, a better choice.')
badrsp=('You are getting further','This is worse though...','I am even disappointed with this guess')

guesses=[0]

while True:
    
    guess = int(input(f"{random.choice(ask)}\n"))
    
    if guess<1 or guess>100:
        print(f"{random.choice(rspwrgnum)}\n")
        continue

    if guess==num:
        print("My number is ",num)
        print(f"You guessed it in {len(guesses)} turns!")
        print(f"{random.choice(winrsp)}\n")
        exit()

    guesses.append(guess)

    if guesses[-2]:#startingfromsecondguess
        if abs(num-guess)<abs(num-guesses[-2]):
            print(f"{random.choice(smlthnres)}\n")
        else:
            print(f"{random.choice(badrsp)}\n")

    else:#firstguess
        print(f"{random.choice(intlres)}\n")
