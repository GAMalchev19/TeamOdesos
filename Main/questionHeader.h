#pragma once
#include <iostream>
#include <string>

using namespace std;



string questionData[15] = {
	"The United States bought Alaska from which country?",
	"Who was the fourth president of the United States?",
	"World War I began in which year?"
};

string answerData[15][4] = {
	"Russia", "Canada", "Bulgaria", "Australia"
};

int indexOfRightA[15];

struct node {

	string question;
	string answers[4];
	int indexRightAnswer;

	node* next;
};



node* head = NULL;

node* questionsList;

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