#include<iostream>
using namespace std;

string substiString(string text,int rotNo){

    for (int i=0;i<text.length();i++){ //iterates the characters in string
        for(int j=0;j<rotNo;j++){  //iterates rotNo times

            if (text[i] < 'A' || text[i] > 'Z' &&  //if anything other than alphabets breaks the loop
            text[i] < 'a' || text[i] > 'z'){
                break;
            }

            else{
                text[i]+=1;
                if(text[i] > 'Z' && text[i] < 'a'){  //if greater than 'Z' and less than 'a' then make it 'A'
                text[i]='A';
            }
                else if(text[i] > 'z'){ //if greater than 'z' make it 'a'
                    text[i]='a';
                }
            }
        }
    }
    return text;
}

int main(){

    string str;
    int rotNo;

    cout<<"A simple letter substitution cipher program built in C++ that replaces"<<endl;
    cout<<"a letter with the nth letter after it in the alphabet."<<endl;

    cout<<endl<<"NOTE:";
    cout<<endl<<"Select and right click to copy the selected text"<<endl;
    cout<<"RIGHT CLICK to paste"<<endl;

    cout<<endl<<"Enter the text: ";
    cin>>str;

    cout<<"Enter ROT no: ";
    cin>>rotNo;

    string rotFinal= substiString(str,rotNo);


    cout<<endl<<rotFinal<<endl;

    return 0;
}
