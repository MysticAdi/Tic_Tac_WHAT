#include<iostream>
#include<string>
#include "player.h"

void Player::ask_num()
{
    string s1;
    puts("What number would you like to put?\n");
    puts("(Range of numbers: 1 to 9 ");

    gets(s1);
    if(s1!="")
    {

    }
    else
    {
        puts("Please put a number!");
    }
    
}