// = = = = = = = = = =
//     FUNCTIONS
// = = = = = = = = = =
int myIntFunct(int myParamA, int myParamB) {
    Serial.print(myParamA + myParamB);          // Prints to serial stream
    Serial.println("A new line");               // Prints to serial stream w/new line

    //Serial.readString();                        // It is slow. Be aware of a lag.    
}
