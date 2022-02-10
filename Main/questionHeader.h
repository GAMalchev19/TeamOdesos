// This header file is for the data that will keep the questions and answers in linked lists

#pragma once
#include <iostream>
#include <string>

using namespace std;


// Array of strings for the questions that will be implemented in linked lists
string questionData[15] = {
	"The United States bought Alaska from which country?",
	"Who was the fourth president of the United States?",
	"World War I began in which year?"
};

// The answers which will be also implemented in linked lists
string answerData[15][4] = {
	"Russia", "Canada", "Bulgaria", "Australia"
};

// The index of the right answer in the array
int indexOfRightA[15];

// The structure of a linked list
struct node {

	string question;
	string answers[4];
	int indexRightAnswer;

	node* next;
};



node* head = NULL;

node* questionsList;

// Function for implementing the data in linked lists
void implementQuestions()
{
	for (int i = 0; i < 4; i++)
	{
		questionsList->question = questionData[i];

		for (int j = 0; j < 4; j++)
		{
			questionsList->answers[j] = answerData[i][j];
		}

		questionsList->indexRightAnswer = indexOfRightA[i];

		questionsList->next;
	}
}