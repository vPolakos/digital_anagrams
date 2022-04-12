#include <iostream>
bool fun_is_anagram(int x, int y){
    /*  The function takes two integers as arguments
        and returns the bool value whether
        given integers are anagrams or not */
    bool is_anagram = true;
    int left[10]={};    //table containing the number of each digits occurring in first integer
    int right[10]={};   //table containing the number of each digits occurring in second integer

    while(x%10 != 0)    //factoring first number to digits
    {
        left[x%10]+=1;
        x/=10;
    }
    while(y%10 != 0)    //factoring second number to digits
    {
        right[y%10]+=1;
        y/=10;
    }
    for (int i=0; i<10; i++)
        {
        if (left[i]!=right[i])  //checking if the distribution of digits coincide
        {
            is_anagram=false;
            break;
        }
    }
    return(is_anagram);
}
using namespace std;
int main() {
    int x=0;    //first number
    int y=0;    //second number
    int k=0;    //how many pairs we have
    int counts=0;   //counting numbers of anagrams
    cout<<"Enter the number of pairs:"<<endl;
    cin>>k;
    for (int i=1; i<=k; i++){
        cout<<"Enter "<<i<<" pair:"<<endl;
        cin>>x>>y;
        if (fun_is_anagram(x,y)==true){
            counts+=1;
        }
    }
    cout<<"The number of anagrams found: "<<counts<<endl;
    return 0;
}