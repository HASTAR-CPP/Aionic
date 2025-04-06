#include <Servo.h>

// servo objects
Servo servo1, servo2, servo3, servo4;

// EMG sensor input pin
const int emgPin = A0;

// Servo control pins
const int servoPin1 = 9;
const int servoPin2 = 10;
const int servoPin3 = 11;
const int servoPin4 = 12;

// EMG threshold for movement
const int threshold = 650;  

void setup() {
    Serial.begin(9600);  // Serial Monitor rate
    pinMode(emgPin, INPUT);

    // Attaching servos to their pins
    servo1.attach(servoPin1);
    servo2.attach(servoPin2);
    servo3.attach(servoPin3);
    servo4.attach(servoPin4);

    // Initializing servos at neutral position initially
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
}

void loop() {
    int emgValue = analogRead(emgPin); 
    Serial.println(emgValue); // to print EMG value to Serial Monitor
    delay(200);
    
    // int servoAngle = map(emgValue, 100, 500, 0, 180);
    // low-pass filter
    emgFiltered = (alpha * emgValue) + ((1 - alpha) * emgFiltered);
    // Move servos if signal exceeds threshold
    if (emgValue > threshold) {
        servo1.write(90);
        servo2.write(90);
        servo3.write(90);
        servo4.write(90);
    } else {
        // Reset servos to starting position when no muscle activity detected
        servo1.write(30);
        servo2.write(30);
        servo3.write(30);
        servo4.write(30);
    }

    delay(50); // Small delay to stabilize readings 
}
