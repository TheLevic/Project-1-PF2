#include "helper.h"
int main(){
    char test_string[15];
    char test_set[10];
    char *p; // pointer to the return character
    strcpy(test_string, "hot");
    strcpy(test_set, "big");
    char x = 'h';
    if ( is_the_char_in_the_set(x, test_string) )
        cout << x << " appears in the following string: " << test_string << endl;
    else
        cout << x << " does not appear in the following string: " << test_string << endl;
    //the output is h does not appear in the following string: Hi Everyone!
    p = find_first_in_the_string_that_is_in_the_set(test_string, test_set);
    if (p != NULL){
        cout << "The first char that is in the set is: " << *p << endl;
        // the above output should e and *(p-1) is v and *(p+1) is r
    }
    else if (p == NULL){
        cout << "NULL" << endl;
    }

    p = find_first_in_the_string_that_is_not_in_the_set(test_string, test_set);
    if (p != NULL){
    cout << "The first char that is not in the set is: " <<  *p << endl; // the output should be H
    }
    else if (p == NULL){
        cout << "NULL" << endl;
    }
}