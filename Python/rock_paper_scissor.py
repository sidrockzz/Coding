import random

comp_wins=0
player_wins=0

def choose_option():
    user_choice = input('Choose Rock, Paper or Scissors:')

    if user_choice in ['Rock','rock','r','R']:
        user_choice = 'r'

    elif user_choice in ['Paper','paper','p','P']:
        user_choice = 'p'

    elif user_choice in ['Scissors','scissors','s','S']:
        user_choice = 's'
    
    else:
        print('I dont understand!!! Please try again')
        choose_option()

    return user_choice

def comp_choose_option():
    
    comp_choice = random.randint(1,3)

    if comp_choice==1:
        comp_choice='r'

    if comp_choice==2:
        comp_choice='p'

    if comp_choice==3:
        comp_choice='s'

    return comp_choice

while True:
    user_choice=choose_option()
    comp_choice = comp_choose_option()
    if user_choice=='r':

        if comp_choice == 'r':
            print("It's a tie, since both of you choose rock")
        elif comp_choice == 'p':
            print("You lose since you chose rock, and the computer chose paper")
            comp_wins +=1
        elif comp_choice == 's':
            print("you win,since you chose rock and the computer chose scissor")
            player_wins+=1

    elif user_choice=='p':

        if comp_choice == 'r':
            print("you win,since you chose paper and the computer chose rock")
            player_wins +=1        
        elif comp_choice == 'p':
            print("It's a tie, since both of you choose paper")
        elif comp_choice == 's':
            print("You lose since you chose paper, and the computer chose scissor")
            comp_wins+=1

    elif user_choice=='s':

        if comp_choice == 'r':
            print("You lost,since you chose scissor and the computer chose rock")
            comp_wins +=1        
        elif comp_choice == 'p':
            print("you win,since you chose scissor and the computer chose paper")
            player_wins+=1
        elif comp_choice == 's':
            print("It's a tie, since both of you choose scissor")
    print('*'*50)
    print('Player Wins:',player_wins)
    print('Computer Wins:',comp_wins)
    print('*'*50)

    user_choice = input('Do you want to play again? [y/n]')
    if user_choice == 'y':
       pass
    elif user_choice =='n':
       break