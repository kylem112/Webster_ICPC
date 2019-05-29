#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() 
{

    string str("THE RAIN IN SPAIN");
    string buf; 
    stringstream ss(str);

    vector<std::string> words;

    while (ss >> buf)
        words.push_back(buf);
        
	//for(int i = 0; i < words.size(); i++)
	//{
	  //  cout << words[i] << endl;
	//}
	
	bool flag = true;
	int c = 0;
	for(c = 0; c < words.size(); c++)
	{
	    for(int j = 1; j < words.size() && flag; j++)
	    {
	        if(words[c] == words[j] && c != j)
	        {
	        flag = false;
	        break;
	        }
	    }
	}
	
	if(!flag)
	    cout << "no" << endl;
	else
	    cout << "yes!" << endl;

	return 0;
}
