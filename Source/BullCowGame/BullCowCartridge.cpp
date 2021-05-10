// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

	PrintLine(TEXT("Look at you hacker..."));
	PrintLine(TEXT("Do you know my name, insect?"));

    InitGame();

    //set lives
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
   
    

    FString Guess=(Input);
    if (Guess == HiddenWord )
    {
        PrintLine(TEXT("Correct, insect"));
    }
    else
    {
        if (HiddenWord.Len() == Guess.Len())
        {
            PrintLine(TEXT("So close...but.."));
        }
        else 
        {
            PrintLine(TEXT("HOW DARE YOU!"));
        }
        PrintLine(TEXT("Welcome to my mutant family!"));              
    }

    //check if isogram
    //check number of characters

    //remove lives
    
    //if lives >0
    //if Yes play again
    //show lives left
    //if NO gameove
    //Promt to Play Again
    //check User input


}

void UBullCowCartridge::InitGame()
{
	HiddenWord = TEXT("SHODAN");
    Lives = 5;

}
