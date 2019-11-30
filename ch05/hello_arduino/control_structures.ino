void helloControlStructures() {
// = = = = = = = = = =
// CONTROL STRUCTURES
// = = = = = = = = = =
    Serial.print("--- Control Structures - START ---\n");

                                                // - - - - IF / ELSE - - - -
    if (true) {
        Serial.print("IF\n");
    } else {
        Serial.print("ELSE\n");
    }

                                                // - - - - FOR - - - -
    for (int i = 0; i < 10; i++) {
        Serial.print(i);
    }

                                                // - - - - WHILE - - - -
    int i = 0;
    while (i < 3) {
        Serial.print("while\n");
        i++;
    }
    
    Serial.print("--- Control Structures - END ---\n");
}
