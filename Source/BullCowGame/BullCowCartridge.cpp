// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    InitGame();

    //PrintLine(FString::Printf(TEXT("The HiddenWord is: %s.\nIt is %i characters long"), *HiddenWord,HiddenWord.Len()));




    //set lives
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
   
    if (bGameOver)
    {
        ClearScreen();
        InitGame();
    }
    else
    {
		FString Guess = (Input);
		if (Guess == HiddenWord)
		{
			PrintLine(TEXT("Correct, insect"));
			EndGame();
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
			EndGame();
		}
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
	PrintLine(TEXT("Look at you hacker..."));
	bGameOver = false;
	HiddenWord = TEXT("SHODAN");
	Lives = 5;

	PrintLine(TEXT("Do you know my name, insect? prompt..%i letter name "), HiddenWord.Len());
	PrintLine(TEXT("Answer me! "));


}

void UBullCowCartridge::EndGame()
{
	bGameOver = true;
	PrintLine(TEXT("Press Enter to Play Again."));
}
