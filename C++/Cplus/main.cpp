#include <iostream>
#include <cmath>

using namespace std;
//Inheritance:
class Chef {
public:
    void makeChiken() {
    cout<<"The chef makes yummy chicken dish"<<endl;
    }
    void makeSalad() {
    cout<<"The chef makes salad"<<endl;
    }
    void makeSpecialDish() {
    cout<<"The chef makes bbq ribs"<<endl;
    }
};

class ItalianChef: public Chef {
public:
    void makePasta() {
    cout<<"The chef makes Pasta"<<endl;
    }
    void makeSpecialDish() {
    cout<<"The chef makes shrime bbq"<<endl;
    }
};

int main() {
Chef chef;
ItalianChef italianChef;
chef.makeChiken();
italianChef.makeSpecialDish();
return 0;
}

/*
//Getters & Setter:
class Movie {
private:
    string rating;
public:
    string title;
    string director;
    Movie(string aTitle,string aDirector, string aRating) {
        title = aTitle;
        director=aDirector;
        setRating(aRating);
    }
    void setRating(string aRating) {
        if(aRating == "P" || aRating =="PG"||aRating=="PG-13"||aRating=="R")
    {
        rating = aRating;
    } else {
    rating="NR";
    }
    }
    string getRating(){
    return rating;}
};
int main() {
    Movie avenger("Avenger","Jame Hopskin","PG");
    avenger.setRating("P");
    cout<<avenger.getRating();

return 0;
}

//Object function:
class Student {
public:
    string name;
    string major;
    double gpa;
    Student(string aName,string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

        bool hasHonors() {
        if(gpa>=3.5) {
            return true;
        }
        else {
        return false;
        }
        }
};

int main() {
    Student student1("Jame","Data Science",3.9);
    Student student2("Dumb","Graphic Designer",2.5);

    cout<<student1.hasHonors()<<endl;
    cout<<student2.hasHonors()<<endl;

return 0;
}

//Constructor function:
class Book {
public:
    string title;
    string author;
    int pages;

    Book() {
    title = "No title";
    author = "No author";
    pages = 0;
    }

    Book(string aTitle,string aAuthor,int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main() {

    Book book1("Harry Porter","JK Rowling",5000);
    Book book2("Lord of the ring","Tolkein",7000);
    Book book3;
    cout<< book1.title<<endl;
    book1.title = "Harry Porter 1";
    cout<<book1.title<<endl;
    cout<<book2.title<<endl;
    cout<<book3.title<<endl;
return 0;
}

//Classes & Object:
class Book {
public:
    string title;
    string author;
    int pages;

};

int main() {
    //book1 is intances of book class
    Book book1;
    book1.title = "Harry Porter";
    book1.author = "JK Rowling";
    book1.pages = 5000;

    Book book2;
    book2.title = "Lord of the ring";
    book2.author = "Tolkein";
    book2.pages = 7000;

    cout<< book1.title<<endl;
    cout<<book2.title<<endl;
return 0;
}

//Pointer:
int main() {
int age = 19;
int *pAge = &age; //Assign value address to variable
double gpa = 4.7;
double *pGpa=&gpa;
string name = "Max";
string *pName = &name;

int agecopy = age;
cout<< &agecopy<<endl; //Return 0x28fe94
cout<< &age<<endl; //Return 0x28febc
agecopy = 20;
cout<<agecopy<<endl; //20
cout<<&agecopy<<endl; // 0x28fe94

cout<< "The memory address "<< pAge<< " contain the value of "<<*pAge;

}

//Array and nested loop:
int main() {
    int numberGrid[2][2] = {
        {1,2},
        {3,4}
    };

    for(int i= 0;i<2;i++) {
        for(int j = 0;j<2;j++) {
    cout<< numberGrid[i][j];
        }
        cout<<endl;
    }

return 0;
}

//Exponent function:
int power(int baseNum,int powerNum) {
    int result=1;
    for (int i = 0;i<powerNum;i++) {
        result=result*baseNum;
    }
    return result;
}

int main() {
    cout<< power(2,3);

return 0;
}

//For loop:
int main() {

   int nums[] = {2,3,4,5,6,7};
   for( int i = 0;i<=5;i++) {
    cout<<nums[i]<<endl;
   }

return 0;
}

//Build a guessing game:
int main() {
int secretNum = 7;
int guess;
int guessCount = 5;

while(secretNum != guess && guessCount > 0) {
    cout<< "Enter guess number: ";
    cin>>guess;
    guessCount--;
    cout<<"You have "<< guessCount << " times left"<<endl;
}
if(guessCount !=0) {
    cout<<"You win";
} else{
    cout<<"you lose";
}
return 0;
}


//While loop:
int main() {

int index = 1;
while(index <=5) {
    cout<<index<<endl;
    index++;
}

return 0;
}

//Switch statement:
string getDayOfWeek(int dayNum) {
    string dayName;

    switch(dayNum) {
case 0:
    dayName= "Sunday";
    break;
case 1:
    dayName= "Monday";
    break;
    case 2:
    dayName= "Tuesday";
    break;
    case 3:
    dayName= "Wednesday";
    break;
    case 4:
    dayName= "Thursday";
    break;
    case 5:
    dayName= "Friday";
    break;
    case 6:
    dayName= "Saturday";
    break;
    default:
        dayName = "Invalid day number";

    }

    return dayName;
}


int main() {

cout<< getDayOfWeek(1);
return 0;
}

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
