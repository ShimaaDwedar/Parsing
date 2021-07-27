#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    FILE *file = fopen("annual-enterprise-survey-2020-financial-year-provisional-csv.csv", "r");
 //    FILE *file = fopen("testcase.csv", "r");

    char row [2000];
    int i = 0, j =0;
    string concat = "";
    while(fgets(row, sizeof row, file)){

        char *token;
        token = strtok(row, ",");       //split the row with comma

        while (token!= NULL){
            if (j == 2 && i%2 !=0)      //check if the column is the 3rd and the row is odd
                concat +=token;         //concatenate the values of the 3rd column
            token = strtok(NULL, ",");
            j++;
        }
        j = 0;
        i++;
    }
    cout << "result should be: " << concat<<endl;
    return 0;
}
