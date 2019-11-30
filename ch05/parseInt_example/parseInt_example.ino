int val;

void setup() {
    Serial.begin(9600);
}

void loop() {
    while(Serial.available() > 0){
        val = Serial.parseInt();
        Serial.println(val);
    }
}