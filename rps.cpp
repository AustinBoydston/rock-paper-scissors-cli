#include <iostream>
#include <cstring> 
//you may need some additional #includes to use random


using namespace std;




char parseUserThrow(char userInput)

{

 //implement this
 //You need to throw R for rock, P for paper, or S for scissors.
switch(userInput)
{
case 'R': return 'r'; break;
case 'P': return 'p'; break;
case 'S': return 's'; break;
case 'r': return 'r'; break;
case 'p': return 'p'; break;
case 's': return 's'; break;

default: return 'X'; cout << "invalid input" << endl; break;


}




}




char getComputerThrow()

{


 //implement this needs to be random
int throwNum = (rand() % 3 ) + 1;

switch(throwNum)
{
case 1: return 'r'; break;
case 2: return 'p'; break;
case 3: return 's'; break;

default: return 'X'; cout << "computer messed up choice" << endl; break;
}
}




int compareThrows(char user, char computer)

{


 //implement this
if(user == computer)
{
    return 0;
}
else if(user == 'r' && computer == 'p')
{
    return -1;
}
else if(user == 'r' && computer == 's')
{
    return 1;
}
else if(user == 's' && computer == 'p')
{
    return 1;
}
else if(user == 's' && computer == 'r')
{
    return -1;
}
else if(user == 'p' && computer == 's')
{
    return -1;
}
else if(user == 'p' && computer == 'r')
{
    return 1;
}
else
{
    {
        cout << "something went wrong" << endl;
        return 999;
    }
}




}




int main(int argc, char ** argv)

{
    //decision structure for input validity
if(argc == 1)
    {
cout << "You need to throw R for rock, P for paper, or S for scissors." << endl;
return 9;
    }
if(argc > 2)
{
    cout << "You only need to give me R,P, or S." << endl;
    return 10;
}
if(strlen(argv[1]) > 1)
{
    cout << "You only need to give me R,P, or S." << endl;
    return 11;
}


srand(time(0));
//int num = (rand() % 3) + 1;
//cout << num << endl;
char userThrow = parseUserThrow(*argv[1]);


char computerThrow = getComputerThrow();


int result = compareThrows(userThrow, computerThrow);



 //put the rest of your code here

switch(result)
{
    case 0: cout << "You Tied!" << endl; return result; break;
    case -1: cout << "You Lose!" << endl; return result; break;
    case 1: cout << "You Win!" << endl; return result; break;

    default: cout << "Comparison failed" << endl; break;
}


return result;

}

