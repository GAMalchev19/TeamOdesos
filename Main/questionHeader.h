// This header file is for the data that will keep the questions and answers in linked lists

#pragma once
#include <iostream>
#include <string>

using namespace std;


// Array of strings for the questions that will be implemented in linked lists
string questionData[15] = {
	"The United States bought Alaska from which country?", //1
	"Who was the fourth president of the United States?", //2
	"World War I began in which year?", //3
	"Which U.S. president was the first to appear on television?", //4
	"In 79 A.D. which volcano erupted destroying cities such as Pompeii and Herculaneum?", //5
	"Which famous German composer lost his sense of hearing and became deaf in c. 1796?", //6
	"What was the name of the chimpanzee sent into orbit by NASA?", //7
	"What country won the FIFA World Cup in 1958, 1962, 1970, 1994, and 2002?", //8
	"The death of what person triggered World War I?", //9
	"What is the name of the American film-producer that became famous through his animation films and amusement parks?", //10
	"Along with Hiroshima, Japan, which Japanese city was hit by an atomic bomb in 1945?", //11
	"Who was the first female prime minister of Britain?", //12
	"Adolf Hitler was the leader of which party?", //13
	"Which continent was devastated by the Black Death in the 1300s?", //14
	"The Cold War was between the United States and what other world power?" //15
};

// The answers which will be also implemented in linked lists
string answerData[15][4] = {
	{"Russia", "Canada", "Bulgaria", "Australia"}, //1
	{"James Madison","Joe Biden","Richard Nixon","Ronald Reagan"}, //2
	{"1900","1980","1910","1914" }, //3
	{"Richard Nixon", "Ronald Reagan", "Franklin D. Roosevelt","Abraham Lincoln"}, //4
	{"Mt. Damavand","Koryakskaya Sopka","Mt. St. Helens","Mt. Vesuvius"}, //5
	{"Ludwig van Beethoven","Wolfgang Amadeus Mozart","Johann Sebastian Bach","Frédéric Chopin"}, //6
	{"Laika","Albert","Gordo","Belka"}, //7
	{"France","England","Brazil","Germany"}, //8
	{"Czar Nicholas II","Winston Churchill","Franz Ferdinand","Lenin"}, //9
	{"Warners","Vicher","Lord","Disney"}, //10
	{"Tokyo","Osaka", "Hiroshima", "Nagoya"}, //11 
	{"Margaret Thatcher","Florence Nightingale","Queen Elizabeth II","Jane Austen"}, //12
	{"Communist Party","Nazi Party","Republican Fascist Party","none of the above"}, //13
	{"Europe", "North America", "Africa" , "South America"}, //14
	{"Canada","China","Soviet Union","Japan"} //15
};

// The index of the right answer in the array
int indexOfRightA[15] = {0,0,3,2,3,0,1,2,2,3,2,0,1,0,2};

// The structure of a linked list
struct node {

	string question;
	string answers[4];
	int indexRightAnswer;

	node* next;
};



node* head = NULL;



// Function for implementing the data in linked lists
void implementQuestions()
{
	for (int i = 0; i < 4; i++)
	{
		node questionsList = new node;

		questionsList->question = questionData[i];

		for (int j = 0; j < 4; j++)
		{
			questionsList->answers[j] = answerData[i][j];
		}

		questionsList->indexRightAnswer = indexOfRightA[i];

		questionsList->next=head;

		head = questionsList;
	}
}

