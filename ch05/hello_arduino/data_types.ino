// = = = = = = = = = =
//      DATA TYPES
// = = = = = = = = = =
void helloDataTypes() {                         // Main code which will run forever
    Serial.print("--- Data Types - START ---\n");

    int myInt = 10;                             // An integer has 16bit (-32,768 to 32,767) or (0 to 65,535)(unsigned)
    long myLongInt = 1000;                      // A long integer has 32bit (–2,147,483,648 to 2,147,483,647)
    float myFloat = 10.1;                       // A decimal has 32bit (–3.4028235E+38 to 3.4028235E+38)
    char aChar = 74;                            // A character ASCII numeric value ('J')

                                                // - - - - Strings - - - -
    char aStrA[10];                             // A C traditional array of strings declaration

                                                // A C traditional string of characters requires explicit \0 null for end of string
    char aStrB[10] = {'S','t','r','A','\n','\0'};
    
    char aStrC[] = "String B\n";                // A C traditional string of characters

    String myStrA;                              // A String object declaration
    myStrA = "My String A\n";
    String myStrB = "My String B\n";            // A String object definition

                                                // - - - - Arrays - - - -

    int myIntArrayUndefined[5];
    int myIntArray[5] = {1,2,3,4,5};
    int myInt2 = myIntArray[4];
    myIntArray[1] = 10;
/*
    Serial.print(aChar);
    Serial.print(aStrA);
    Serial.print(aStrB);
    Serial.print(aStrC);
    Serial.print(myStrA);
    Serial.print(myStrB);
    Serial.print(myInt); Serial.print("\n");
    Serial.print(myLongInt);
    Serial.print(myFloat);
    printArray(myIntArray, 5);
*/
    Serial.print("--- Data Types - END ---\n");
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        Serial.print(arr[i]);
    }
    Serial.print("\n");
}