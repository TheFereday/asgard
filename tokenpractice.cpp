#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void tokenize(const string& str, vector<string>& tokens);

int main()
{
    // assigning value to string s
    const string s = "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY";

    const string studentData[] =
    {   
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Theron,Fereday,tfereda@wgu.edu,31,10,20,30,SOFTWARE"
    };

    int strLength = s.length();

    // keeps position of tokens for find
    int startingPos = 0;
    string strDelimiter = ",";
    string parsedData[5];
    
    //size_t found = s.find(strDelimiter);

    for(int i = 0; i < 5; i++)
    {
        size_t found = studentData[i].find(strDelimiter);
        cout << studentData[i].length() << endl;

        do
        {
            parsedData[i] = studentData[i].substr(startingPos, found-startingPos);
                
            cout << parsedData[i] << " is located at " << "[" << i << "]" << endl;
            cout << found << "  " << startingPos << endl;
            startingPos = found+1;
            cout << "incrementing startingPos to " << startingPos << endl;
            found = studentData[i].find(strDelimiter, startingPos);
            cout << found << endl;
            

        } while(found < studentData[i].length());

        cout << endl;
    }

// print array
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 9; j++)
    //     {
    //             cout << i << "    " << j << endl;
    //     }
        
    //     cout << endl;
    // }

    return 0;
}