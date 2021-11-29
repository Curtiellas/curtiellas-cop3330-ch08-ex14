/* ch08 ex14
Can we declare a non-reference function argument const?
e.g. void f(const int)
What might that mean? Why might we want to do that?
Why don’t people do that often? 
Try it; write a couple of small programs to see what works.

idea: the year people were born in is a constant value, a function
may use a year value as parameter, and print some modification of
that year, e.g. "in what year were they 21 years old"

*/

#include <iostream>

using namespace std;

typedef struct BirthYear {
    const int GeorgeOrwell = 1903;
    const int AlbertCamus = 1913;
    const int FranzKafka = 1883;

} BirthYear;

void yearWhenTwentyOne(const int birthYear);

int main()
{
    BirthYear years;
    int choice;

    cout << "Enter a number to select an author, I will tell you in what year they were 21 years old" << endl;
    cout << "1. GeorgeOrwell" << endl << "2. AlbertCamus" << endl << "3. FranzKafka" << endl; 
    
    do {
        try {
            cin >> choice;

            if (cin.fail())
                throw "Invalid input. Enter a number.";

        } catch (const char* e) {
            cerr << e << endl;
        }
    } while (choice < 1 || choice > 3);

    switch (choice)
    {
    case 1:
        yearWhenTwentyOne(years.GeorgeOrwell);
        break;
    case 2:
        yearWhenTwentyOne(years.AlbertCamus);
        break;
    case 3:
        yearWhenTwentyOne(years.FranzKafka);
        break;
    default:
        break;
    }

}

void yearWhenTwentyOne(const int birthYear)
{
    //this function is not very useful because the +21 value may have been saved as a const variable instead
    cout << "The author would have been 21 years old in the year " << birthYear + 21 << endl;

}