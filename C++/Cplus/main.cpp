#include <iostream>
#include <cmath>

using namespace std;

<<<<<<< HEAD
//Build a better calculator:
int main() {

    int num1,num2;
    char op;

    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter operator: ";
    cin>> op;
    cout<<"Enter the second number: ";
    cin>> num2;
    int result;
    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else if(op == '/') {
        result = num1 / num2;
    } else {
        cout<< "Invalid operator";
    };
    cout<<result;

    return 0;
}

/*
int getMax(int num1, int num2, int num3) {
    int result;
    //Or if(num1>=num2 && num1>=num3) {result=num1}
=======
int getMax(int num1, int num2, int num3) {
    int result;
>>>>>>> 2024dcdbb869159ebb8223e530b5885ac72d8f3f
    if(num1>num2) {
        result = num1;
        if(result>num3) {
            result = result;
        } else {
            result = num3;
        }
    } else {
        result = num2;
        if(result>num3) {
            result = result;
        } else {
            result = num3;
        }
    }

    return result;
    }



int main() {
    cout<< getMax(25,20,15);

return 0;
}

<<<<<<< HEAD
=======
/*
>>>>>>> 2024dcdbb869159ebb8223e530b5885ac72d8f3f
//If statements

int main()
{
    bool isMale = false;
    bool isTall = true;

    if(isMale && isTall) {
        cout <<"You are a tall male";
    } else if(isMale && !isTall) {
        cout <<"You are not a tall male";

    } else if(!isMale && isTall) {
        cout <<"You are tall but not male";
    } else{
        cout <<"You are not male and not tall";
    }


    return 0;
}

//Return statement:
double cube(double num) {
    cout<< "Hello"<<endl;
    return num * num *num;
}

int main() {
    cout<< cube(2);
return 0;
}

//Function must declared before using.
void sayHi(string name,int age) {
cout <<"Hello "<< name<< ", you're " <<age<<" years old"<<endl;
}

int main()
{
    //Function:
    sayHi("Vy", 30);
    sayHi("Su",32);
    sayHi("Ha", 4);

    //Arrays:
    int fibbo[] = {0,1,3,4,7,11,18};
    cout<< fibbo[2]<<endl; // 3
    fibbo[2] = 15;
    cout<<fibbo[2]; //15

    int luckyNum[20]; //Create an empty Array with the range of 20
    luckyNum[0] = 100; //Assign the value of array at pos 1

    //Build a Mad Libs Game:
    string color,pluralNoun,celebrity;
    cout<<"Enter a color: ";
    getline(cin,color);
    cout<<"Enter a plural noun: ";
    getline(cin,pluralNoun);
    cout<<"Enter a celebrity: ";
    getline(cin,celebrity);

    cout<< "Roses are " <<color <<endl;
    cout<<pluralNoun<< " are blue"<<endl;
    cout<<"I love " <<celebrity<<endl;


    //Add two input numbers:
    int num1,num2;
    cout<< "Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<< num1+num2;

    string name;
    cout << "Enter your name: ";
    getline(cin,name); //Use to get string of text

    cout<< "You are "<< name ;


    int age;
    cout<< "Enter your age: ";
    cin>> age; //cin to receiver number and character

    cout << "You are " << age << "years old";
    //Working with Number:
    cout << 5; //return 5
    cout << 5+7; //return 12
    cout << 10 % 3; //return 1 (remainder)
    cout << (4+5)*10; //return 90

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    wnum--;
    wnum+=80; // "*"
    cout<<wnum<<endl;
    cout<< wnum+dnum;

    cout<< pow(3,3)<<endl; // 3^3
    cout<<sqrt(36)<<endl; //return 6
    cout<<round(4.3)<<endl; //return 4 if <4.5
    cout<<ceil(4.1);//round up
    cout<<floor(4.8); //round down
    cout<< fmax(3,10); //return the bigger num
    cout<<fmin(3,10); //return the smaller


    //Working with String:
    string phrase = "HCMUT";
    cout << phrase.length()<<endl; //Return 5
    cout << phrase[0]<<endl; // return H
    //Assign value: phrase[0]=B;
    cout << phrase.find("MU",0)<<endl;//return 2
    string phrasesub;
    phrasesub = phrase.substr(2,3);
    cout << phrasesub; //Return MUT


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
    cout << "But "<<friendName<<" does not look like "<<friendAge<<" !" << endl;
}
    */
