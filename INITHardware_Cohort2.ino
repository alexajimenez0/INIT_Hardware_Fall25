//Variables that won't change
const int buttonPin = 2;
const int ledPin = 13;
//Variables that will change
int buttonState = 0;
int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  
  //Set up serial communication in 9600 bauds
  Serial.begin(9600);

  //We tell Arduino to read data from pin 2
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Read the value from button and store it in buttonState variable
  buttonState = digitalRead(buttonPin);

  //Print the value read from button to monitor
  Serial.println(buttonState);


  if(buttonState == HIGH) {
    
    if(ledState == 1){
    ledState = 0;
    }
    else{
      ledState = 1;
    }

    delay(200);
  } 

  digitalWrite(ledPin, ledState);

}