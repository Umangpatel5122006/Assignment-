import random
class game:
    def __init__(self,result):
        self.result=result
    def first_play(self):
        string_list = ["rock", "paper", "scissors"]
        c_choice=random.choice(string_list)
        return c_choice
    def final(self,player_choice,c_choice):
        if player_choice==c_choice:
            self.result="draw"
        elif player_choice=="rock":
            if c_choice=="scissors":
                self.result="player"
            else:
                self.result="computer"
        elif player_choice=="paper":
            if c_choice=="rock":
                self.result="player"
            else:
                self.result="computer"
        elif player_choice=="scissors":
            if c_choice=="paper":
                self.result="player"
            else:
                self.result="computer"
        return self.result
player_score=0
computer_score=0
game1=game("player")
choice = "yes"
while choice == "yes":
    player_choice=input("Enter your choice from rock, paper, scissors: ")
    com=game1.first_play()
    result = game1.final(player_choice, com)
    print("Computer choice: ", com)
    if result == "player":
        player_score += 1
    elif result == "computer":
        computer_score += 1
    choice = input("Do you want to play again? (yes/no): ")
    if choice == "no":
        print("Player score: ", player_score)
        print("Computer score: ", computer_score)
        if player_score > computer_score:
            print("Player wins")
        elif computer_score > player_score:
            print("Computer wins")
        else:
            print("Draw")
        break

   