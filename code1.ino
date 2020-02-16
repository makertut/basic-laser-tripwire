const int alarm_pin = 12;

const int laser_pin = 13;

const int detector_pin = 7;

void setup() {

  // put your setup code here, to run once:

    pinMode( detector_pin , INPUT);

    pinMode( laser_pin , OUTPUT);

    pinMode( alarm_pin , OUTPUT);

    digitalWrite( laser_pin , HIGH);



    Serial.begin(9600);

}



void loop() {

  // put your main code here, to run repeatedly:

    int val = digitalRead(detector_pin);

    if( val == 0 ){

        digitalWrite(alarm_pin,HIGH);

    }

    Serial.println( val);

    delay(500);

}
