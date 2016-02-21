#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inputFile;

    inputFile.open(argv[1]);

    if(inputFile.is_open())
    {
        string line;
        
        while(getline(inputFile,line))
        {
            stringstream lineStream;
            string temp;

            vector<string> words;

            //cout << line << endl;

            lineStream << line;

            while(getline(lineStream,temp,' '))
            {
                words.push_back(temp);
            }

            cout << *(words.end()-2) << endl;
        }

    }

    return 0;
}
