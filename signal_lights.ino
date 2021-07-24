#define button D8
#define led1 D7
#define led2 D6
#define led3 D4

void setup() {
  
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(button, INPUT);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    Serial.begin(9600);
}


void loop() {
 if (digitalRead(button) == HIGH){
        delay(15); // software debounce
        if (digitalRead(button) == HIGH) {
            // if the switch is HIGH, ie. pushed down - change the lights!
            changeOfLights();
            delay(12000);
        }
    }
 }

void changeOfLights(){
    //turn on second led for 8 seconds
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    Serial.println("Second LED is ON!");
    delay(8000);
    
   //turn on first led for 6 seconds
    digitalWrite(led3, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    Serial.println("First LED is ON!");
    delay(6000);

  //turn on third led for 7 seconds
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led3, HIGH);
    Serial.println("Third LED is ON!");
    delay(7000);

  //turn on first and second leds for 5 seconds
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    Serial.println("First and Second LEDs are ON!!");
    delay(5000);

 //turn on second and third leds for 5 seconds
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    Serial.println("Second and Third LEDs are ON!!");
    delay(5000);

 //all leds on for 5 seconds
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    Serial.println("All the three LEDs are ON!!!");
    delay(5000);

 //all leds off for 8 seconds
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    Serial.println("All the three LEDs are OFF!!!");
    delay(8000);
}
