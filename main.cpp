#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
    void
    bool
    int
    char
    float
    double 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    bool familiarWithJuce = false;
    bool practiceMakesPerfect = true;
    bool readyFlag = true;

    int fingers = 8;
    int thumbs = 2;
    int noteCount = 36;

    char noteClass = 'A';
    char noteAccidental = '#';
    char delimiter = ',';

    float quarter = 0.25f;
    float half = 0.5f;
    float eighth = 0.125f;

    double epsilon = 0.0000000001;
    double pi = 3.1415926535897932384626433832795028841971693;
    double third = 1/3;

    ignoreUnused(
    	familiarWithJuce, 
    	practiceMakesPerfect,
    	readyFlag, 
    	fingers, 
    	thumbs, 
    	noteCount, 
    	noteClass, 
    	noteAccidental, 
    	delimiter, 
    	quarter, 
    	half, 
    	eighth, 
    	epsilon, 
        pi, 
        third
    );
}

/*
 10 functions
 */

/*
 1)
 */
double calculatePi(double circumference, double diameter, int precision = 11)
{
    ignoreUnused(circumference, diameter, precision);
    return {};
}

/*
 2)
 */
int countDigits(int fingers, int thumbs = 2)
{
    ignoreUnused(fingers, thumbs);
    return {};
}

/*
 3)
 */
float distanceFromGreatness(bool familiarWithJuce, bool readyFlag = true)
{
    ignoreUnused(familiarWithJuce, readyFlag);
    return {};
}

/*
 4)
 */
char intToChar(int integer = 33)
{
    ignoreUnused(integer);
    return {};
}
    
/*
 5)
 */
bool isNearZero(float value)
{
    ignoreUnused(value);
    return {};
}
    
/*
 6)
 */
bool isPrime(int number = 331999)
{
    ignoreUnused(number);
    return {};
}

/*
 7)
 */
void playNote(char pitchClass, char accidental, int octave = 4, float volume = 80.f, float duration = 0.25f)
{
    ignoreUnused(pitchClass, accidental, octave, volume, duration);
}

/*
 8)
 */
void setNote(char noteClass, char noteAccidental, float duration = 0.25f)
{
    ignoreUnused(noteClass, noteAccidental, duration);
}
    
/*
 9)
 */
void thinkTooHard(int thoughts = 10) 
{
    ignoreUnused(thoughts);
}
    
/*
 10)
 */
void waitForNextTuesday(int dayOfWeek = 1, int msPollingRate = 60000)
{
    ignoreUnused(dayOfWeek, msPollingRate);
}
    
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //1)
    auto pi = calculatePi(4.71239, 1.5, 32);
    
    //2)
    auto numberOfDigits = countDigits(6, 4);
    
    //3)
    auto meters = distanceFromGreatness(false, true);
    
    //4)
    auto a = intToChar(97);
    
    //5)
    auto nearlyNothing = isNearZero(0.005f);
    
    //6)
    auto indivisible = isPrime(3);
    
    //7)
    playNote('A', '#', 3, 75.f, 0.5f);
    
    //8)
    setNote('B', 'b', 0.125f);
    
    //9)
    thinkTooHard(1000000000);
    
    //10)
    waitForNextTuesday(4, 3600000);
    
    ignoreUnused(
        pi, 
        numberOfDigits,
        meters,
        a,
        nearlyNothing,
        indivisible
    );
    std::cout << "good to go!" << std::endl;
    return 0;    
}
