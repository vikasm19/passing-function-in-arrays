// creating a function that searches in a array for a given value;
// Value we will take from user input in our code;

#include <iostream>
using namespace std;
// Creating a function search;
//*imp! point we had created int function instead of void why?
// think and come;
int search(int array[], int size, int searchKey) {
    int found = -1;
    for(int i = 0; i<size; i++) {
        if(array[i] == searchKey) {
            found = i;
        }
    }
    return found;
}

int main() {
    const int size = 4;
    int searchKey = 3;
    int array[] = {1, 2, 3, 4};
    // so we declare all our variables now let's see the magic of our function we created above;
    cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}