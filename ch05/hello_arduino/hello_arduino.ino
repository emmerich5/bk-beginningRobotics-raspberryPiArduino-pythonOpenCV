                                    
                                    // - - - - GLOBAL VARIABLES - - - -
                                    // Define PINs

void setup() {                      // Setup/Initialization code that runs once
    Serial.begin(9600);             // Initialize Serial communication with 9600 baud rate (Recommended rate)
    //pinMode(pinDOut, OUTPUT);     // Setting a PIN as OUTPUT
}

void loop() {                       // Main code which will run forever
    Serial.print("Serial Print\n"); // Sending information to serial communication
    helloControlStructures();
    helloDataTypes();

    Serial.print("---- FUNCTIONS - START ----\n");
                                    // Calling a functions that returns a value
    int myVar = myIntFunct(11, 12);

    Serial.print("---- FUNCTIONS - END ----\n");

                                    // - - - - DIGITAL OPERATIONS - - - -
    // digitalWrite(pinDOut, HIGH);    // Setting a PIN Output as HIGH/ON or LOW/OFF
    // digitalWrite(pinDOut, LOW);
                                    // Getting a PIN Input state (HIGH/LOW)
    //digitalVal = digitalRead(pinDIn);
                                    // - - - - ANALOG OPERATIONS - - - -

    //analogVal = analogRead(pinInAnalog);  // Getting a PIN Input.
                                            // PIN must be A0 to A5 which perform DAC

    // analogWrite(pinOutAnalog, myValue);  // Writing a PWM signa.
                                            // PIN must be 5,11,12,15,16,17    
    delay(1000);


}
