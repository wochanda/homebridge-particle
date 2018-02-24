int relay1 = D3;

void setup() {
    pinMode(relay1, OUTPUT);
    Particle.function("fire",fireToggle);
    digitalWrite(relay1, LOW);
}

void loop() {

}

int fireToggle(String command) {
    /* Particle.functions always take a string as an argument and return an integer.
    Since we can pass a string, it means that we can give the program commands on how the function should be used.
    In this case, telling the function "on" will turn the LED on and telling it "off" will turn the LED off.
    Then, the function returns a value to us to let us know what happened.
    In this case, it will return 1 for the LEDs turning on, 0 for the LEDs turning off,
    and -1 if we received a totally bogus command that didn't do anything to the LEDs.
    */

    if (command=="on") {
        digitalWrite(relay1,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(relay1,LOW);
        return 0;
    }
    else {
        return -1;
    }
}
