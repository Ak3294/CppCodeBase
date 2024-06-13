// strlen() inbuild Functions
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[100];
    cout<<"Enter the Name of the String:"<<endl;
    cin.getline(name,100);
    int len=strlen(name);
    cout<<"The length of the string is :"<<len<<endl;
}
*/

// strcmp() inbulild Functions
/*
#include <iostream>
#include <cstring>
using namespace std;

bool mystrcmp(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2))
        return false;
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
}

int main()
{
    char str1[10];
    char str2[10];
    cout << "Enter the String First:" << endl;
    cin >> str1;
    cout << "Enter the Second String:" << endl;
    cin >> str2;
    if (mystrcmp(str1, str2))
    {
        cout << "Both string are equal" << endl;
    }
    else
    {
        cout << "Both string are not equal" << endl;
    }
    return 0;
}
*/

// strcpy() inbulild Functions

/*
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[10] = "Akshay";
    char str2[10] = "Narendra";

    cout << "Before Copying" << endl;
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;

    strcpy(str1, str2);
    cout << "After Coping" << endl;
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;
    return 0;
}
*/
// Copy the string using n character
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
char str1[10] = "Akshay";
    char str2[10] = "Narendra";
    cout<<"Enter the Character do you want to copy"<<endl;
    cin>>n;

    cout << "Before Copying" << endl;
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;

    strncpy(str1, str2,n);
    cout << "After Coping" << endl;
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;
    return 0;  
}
*/
//strcat() inbuild function used
/*
#include<iostream>
using namespace std;

int main()
{
    char str1[10]="Akshay";
    char str2[10]="Narendra";
    strcat(str1,str2);
    
    cout<<"After concating string is "<<endl;
    cout<<str1<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int m=3,n=3,i=0;
    char str1[10]="Akshay";
    char str2[10]="Narendra";

    for(int i=0;i<=m;i++)
    {
        str1[i+1]=str2[i];
    }
    cout<<str1[i+1];
}
*/

// Print All The Prifix

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char str[] = "Akshay";
    for (int i = 0; i <= str[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
}