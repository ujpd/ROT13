#include<iostream>
using namespace std;

string filterString(string text){ //returns filtered string

    for (int i = 0; i < text.size(); i++) {

        // Finding the character whose
        // ASCII value fall under this
        // range
        if (text[i] < 'A' || text[i] > 'Z' &&
            text[i] < 'a' || text[i] > 'z')
        {
            // erase function to erase
            // the character
            text.erase(i, 1);
            i--;
        }
    }
    return text;
}

string finalString(string text,int rotNo){

    for (int i=0;i<text.length();i++){
        for(int j=0;j<rotNo;j++){
            text[i]+=1;
            if(text[i] > 'Z' && text[i] < 'a'){  //if greater than 'Z' and less than 'a' then make it 'A'
                text[i]='A';
            }
            else if(text[i] > 'z'){ //if greater than 'z' make it 'a'
                text[i]='a';
            }
        }
    }
    return text;
}

int main(){
int i;
string s;


cout<<"Enter the text: ";
cin>>s;

cout<<endl<<"Enter ROT no: ";
cin>>i;

string filteredString_ = filterString(s);

cout<<filteredString_<<endl;

cout<<finalString(filteredString_,i);

return 0;
}
