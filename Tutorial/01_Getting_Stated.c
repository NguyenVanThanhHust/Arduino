
int led = 13; // set led port

void setup()
{
    pinMode(led, OUTPUT); 
}

void loop(){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
}
