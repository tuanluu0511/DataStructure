#include <iostream>

using namespace std;

int main()
{
    //Working with String:
    string phrase = "HCMUT";
    cout << phrase.length()<<endl; //Return 5
    cout << phrase[0]<<endl; // return H
    //Assign value: phrase[0]=B;
    cout << phrase.find("MU",0)<<endl;//return 2
    string phrasesub;
    phrasesub = phrase.substr(2,3);
    cout << phrasesub;
    /*
    //Data Types:
    char first = 'A';
    string hello = "Hello there!";
    int a = 50;
    double gpa = 2.3;
    bool isMale = false;

    cout << "Hi I'm Max" <<endl ;
    return 0;


    //Variable
    string friendName = "An";
    string friendJob = "teacher";
    int friendAge;
    friendAge = 30;

    cout << "I have an old friend named " <<friendName << endl;
    cout << ""<<friendName<<" is a "<< friendJob << endl;
    cout << "He's "<< friendAge <<" years old now" << endl;
    cout << "But "<<friendName<<" does not look like "<<friendAge<<" !" << endl;*/
}
