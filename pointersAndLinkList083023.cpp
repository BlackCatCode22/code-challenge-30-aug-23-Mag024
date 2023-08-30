#include <iostream>

using namespace std;

int main()
{
    int numOne = 4;
    cout << &numOne << endl;
    int* ptr = &numOne;
    cout << ptr << endl;

    *ptr = 15;
    cout << *ptr<< endl;
    cout << numOne << endl;

    int numTwo;
    int* ptr2 = &numTwo;
    *ptr2 = 28;
    cout << "numTwo=" << numTwo << endl;

    // giraffe academy Pointers
    int age = 19;
    int *pAge = &age;
    double gpa= 2.7;
    double *pGPA = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout <<"\n\n Age:" << &age << endl;
    cout <<"\n\n gpa:" << &gpa << endl;
    cout <<"\n\n Name:" << &name << endl;

    cout << "\n\n" << pAge << "\n\n";

    //code challenge 1124 - create a char array
    char myChars[3];

    char myCharToFillArray = 'a';

    for (int i = 0; i < 3; i++){
        myChars[i] = myCharToFillArray;
        myCharToFillArray++;
    // made this mistake,close but not right; cout << "\n\n" <<myChars[i] << endl;
}

    // use for loop to output array
     for (int i = 0; i < 3; i++){
        cout << "\n\n" <<myChars[i] << "\n\n" << endl;
     }

     char myCharLetter = 'z';
     char* pmyZPointer;
     pmyZPointer = &myCharLetter;

        //dereference the pointer and output it
     cout << " the character z should appear:" << *pmyZPointer;
     cout << "\n\n\n";

     char* pmyArrayptr;
     pmyArrayptr = myChars;

    // Output dereferenced
     cout << "\n\n This should be this first char in the array (a): " << *pmyArrayptr;
    cout << "\n\n should be a memory addres:" << &pmyArrayptr << "\n\n";

     // increment the array pointer
     pmyArrayptr++;
     // output dereferenced pointer
     cout << "\n\n This should be this second char in the array (b): " << *pmyArrayptr << "\n\n";

      // increment the array pointer
     pmyArrayptr++;
     // output dereferenced pointer
     cout << "\n\n This should be this third char in the array (c): " << *pmyArrayptr << "\n\n";

      // increment the array pointer
     pmyArrayptr++;
     // output dereferenced pointer
     cout << "\n\n This should be this fourth char in the array (d): " << *pmyArrayptr << "\n\n";
     // answer is unexpected result

     cout << "\n\n should be a memory addres:" << &pmyArrayptr << "\n\n";

     // point to the array
    // *pmyCharptr = &myChars;

     // point to the array

     // output to the pointer's value
    // cout << "should be the address" << *myCharptr;
     //cout << "\n\n"



    return 0;
}
