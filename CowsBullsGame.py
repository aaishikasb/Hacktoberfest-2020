import random

def game(num_digits):
    # generating a list of random integers of length num_digits
    listnum = [random.randint(0,9) for n in range(num_digits)]
    print("Solution key = " + str(listnum))

    count=0
    while True:
        count+=1
        print("~~~ Guess: " + str(count) + " ~~~")

        print("Please guess " + str(num_digits) + "-digit number: ")

        guess = [int(i) for i in str(input())]

        if guess == listnum:
            print("You won.")
            print("It took you "+str(count)+" guess(es).")
            break

        else:
            cow=0
            bull=0

            for x in range(0,num_digits):
                if guess[x]==listnum[x]:
                    cow += 1
                elif guess[x] in listnum: # (might already be a cow)
                    bull += 1

        print("Cows: "+str(cow)+" Bulls: "+str(bull))

game(4)
