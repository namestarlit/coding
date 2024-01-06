#!/usr/bin/python3

from random import randint;


def random(x, y):
    return(x[y][randint(0, len(x[y])-1)])


def menuprint():
    men=['study', 'paint', 'sing', 'watch movies', 'sleep']
    for i in range(5):
        print(i+1, men[i])

#************************
def menu(n):
    n=n-1
    men=['study', 'paint', 'sing', 'watch movies', 'sleep']
    print(men[n])
#***********************

#$$$$$$$$$$$$$
def study():
    print('So you wanna study, nerd!!\nCool though')
    n=eval(input('1. traditional\n2. SE\n:'))
    stud=['traditional', 'SE']
    n-=1
    print(stud[n])
    if n==0:
        print('lol\n null for now')
    else:
        liz=['python', 'java', 'C', 'javascript', 'linux']
        liz=liz[randint(0, 4)]
        print("Oh well, seems you have to learn", liz)
        #$$$$$$$$$$$$$$


#&&&&&&&&&&
def charac():

        x=['male', 'female']
        x=x[randint(0, 1)]
        print(x)

        activity=('running', 'sitting', 'sleeping', 'yawning', 'drawing', 'singing', 'fighting', 'flying', 'crouching', 'standing', 'eating', 'drinking', 'falling')
        activity=activity[randint(0, len(activity)-1)]

        stature={'female':('girly', 'tomboy', 'very young', 'muscly girl', 'mature girl'), 'male':('big boy','slim boy', 'bearded', 'very young')}
        stature=random(stature, x)


        mood=('sad', 'happy', 'playful', 'numb', 'sleepy', 'scared', 'terrified', 'funny', 'serious', 'pissed', 'vengeful', 'jealous', 'spooky')
        mood=mood[randint(0, len(mood)-1)]


        setting=('fire', 'water', 'air', 'earth', 'lightning', 'light', 'sparkles', 'nature', 'undead', 'godly', 'angel', 'charging', 'null')
        setting=setting[randint(0, len(setting)-1)]

        background=('plain', 'mountain landscape', 'temple', 'dungeon', 'forest', 'cyberpunk', 'cloud', 'winter place', 'grassy', 'river', 'sea', 'seaside', 'underbridge')
        background=background[randint(0, len(background)-1)]

        clothings={'female':('shorts and long sleeves', 'shorts and short sleeves', 'panties and bra', 'hoodie and skirt', 'spacy shirt and skirt', 'african native dress', 'corporate'), 'male':('shorts and long sleeves', 'boxers and handlet', 'trunks designers and designers sleeves',  'hoodie and trunks', 'spacy shirt and trunks', 'african native set')}
        clothings=random(clothings, x)

        clothemes1=['red', 'blue', 'black', 'white', 'yellow', 'lemon', 'brown', 'gray', 'skyblue']
        clothemes1=clothemes1[randint(0, len(clothemes1)-1)]

        clothemes2=['red', 'blue', 'black', 'white', 'yellow', 'lemon', 'brown', 'gray', 'skyblue']
        clothemes2=clothemes2[randint(0, len(clothemes2)-1)]

        aesthetics={'female':('necklaces', 'bracelet', 'gauntlets', 'chains', 'cap', 'berret', 'knuckles', 'beads', 'waistbeads', 'hair tie'), 'male':('necklaces', 'bracelet', 'gauntlets', 'chains', 'cap', 'berret', 'knuckles', 'beads')}
        aesthetics=random(aesthetics, x)

        attatchments=('wings', 'horns', 'claws', 'smoke', 'halo', 'void galaxy', 'sword', 'staff', 'fire warp', 'water warp', 'fleshy', 'null')
        attatchments=attatchments[randint(0, len(attatchments)-1)]

        complexion=('very dark', 'dark', 'chocolate', 'white', 'pale')
        complexion=complexion[randint(0, len(complexion)-1)]

        perspective=('full drawing', 'portrait')
        perspective=perspective[randint(0, 1)]

        perspectif=('side view', 'down view', 'front view', '3-quarter view', 'up view')
        perspectif=perspectif[randint(0, 4)]

        compiled=[mood, complexion, stature, activity, background, clothemes1, clothemes2, aesthetics, attatchments, clothings, setting, perspective,perspectif]
        print(mood, complexion, stature, activity, 'in a ', background, 'wearing a', clothemes1, clothemes2, clothings, 'and wearing, ', aesthetics, attatchments, 'on', setting, perspective, perspectif)
        for i in range(len(compiled)):
            print(compiled[i])



        #&&&&

#!!!!!!!!!!!!!!!!!
def paint():
    n=eval(input('1. Realistic\n2. Abstract\n3. Landscape\n4. 2D Art'))
    if n==1:
        charac()
        #!!!!!!!!!!!








print('\nHi, Welcome to Virtual Calender Bullshit\nLol... um')
choice=input('Choose from available options? ')
if choice=='yes':
        menuprint()
        n=eval(input(':'))
        menu(n)
        if n==1:
            study()
        elif n==2:
            #draw something
            paint()
