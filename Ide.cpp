#include <iostream>
using namespace std;

int main() 
{
	
	int numCorrect = 6;
	string myAnswers = "ttftfftftf",
	       friendAnswers = "ttttfftttt";
	       
    int numSimilar = 0;
	
    //find similarites
    for(int i = 0; i < myAnswers.length(); i++)
        if( myAnswers[i] == friendAnswers[i] )
            numSimilar += 1;
            
    int diffCorrect = myAnswers.length() - numCorrect;
    int diffSimilar = myAnswers.length() - numSimilar;
        
    //if similarites are less than friends num correct     
    if ( numSimilar < numCorrect)
        cout << numSimilar + (diffCorrect) << endl; // return sim + diff
    else
    {
        if ( diffSimilar < diffCorrect)
            cout << numCorrect + diffSimilar << endl; // return diff + correct
    }
    
    return 0;
}
