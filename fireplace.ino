int relay1 = D3;

void setup() {
    pinMode(relay1, OUTPUT);
    Particle.function("fire",fireToggle);
    digitalWrite(relay1, LOW);
}

void loop() {

}

int fireToggle(String command) {
    if (command=="on") {
        digitalWrite(relay1,HIGH);
        Particle.publish("fire", "on");
        return 1;
    }
    else if (command=="off") {
        digitalWrite(relay1,LOW);
        Particle.publish("fire", "off");
        return 0;
    }
    else {
        return -1;
    }
}
