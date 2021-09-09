#include "helper.h"
int main(){
char test_string[15];
char test_set[10];
char *p; // pointer to the return character
strcpy(test_string, "Hi Everyone!");
strcpy(test_set, "e");
char x = 'h';
if ( is_the_char_in_the_set(x, test_string) )
    cout << x << " appears in the following string: " << test_string << endl;
else
    cout << x << " does not appear in the following string: " << test_string << endl;
//the output is h does not appear in the following string: Hi Everyone!
p = find_first_in_the_string_that_is_in_the_set(test_string, test_set);
cout << *p << endl;
// the above output should e and *(p-1) is v and *(p+1) is r
p = find_first_in_the_string_that_is_not_in_the_set(test_string, test_set);
cout << *p << endl; // the output should be H
}