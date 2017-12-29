#include <iostream>
using namespace std;
int addition(int x, int y);
//int subtraction();
//double multiplication();
//double division();

int main()
{
    int x;
    int y;
    cout<< " Enter in the two numbers you wish to add." << endl;
    cin >> x;
    cin >> y;
    int z;
    z = addition(x, y);
    cout << "Your answers are " << z;
}


int addition(int x, int y)
{
    int meme = x;
    int beme = y;
    int z;
    z = meme+beme;
    return z;
}

