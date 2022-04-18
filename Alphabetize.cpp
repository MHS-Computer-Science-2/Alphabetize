// Alphabetize

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> poem;
    poem.push_back("THE");
    poem.push_back("QUICK");
    poem.push_back("BROWN");
    poem.push_back("FOX");
    poem.push_back("JUMPED");
    poem.push_back("OVER");
    poem.push_back("THE");
    poem.push_back("LAZY");
    poem.push_back("DOGS");

    //BUBBLE SORT THE VECTOR IN ALPHABETICAL ORDER
    //Hint: You only have to change the vector name and 1 other word to get this to work



    //DISPLAY THE POEM
    for (int i = 0; i < poem.size(); i++) {
        cout << poem[i] << endl;
    }


    //BUBBLE SORT THE VECTOR IN REVERSE ALPHABETICAL ORDER
    //Hint: You only have to change 1 symbol from the normal alphabetical order



    //DISPLAY THE POEM
    for (int i = 0; i < poem.size(); i++) {
        cout << poem[i] << endl;
    }



    system("pause");
}