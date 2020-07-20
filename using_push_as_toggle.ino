int led1=8;  
int button=2;   
int counter=0;    
int buttonVal=0;  
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(button,INPUT);
} 
void loop() {
  buttonVal=digitalRead(button);
  zero:
  if(buttonVal==HIGH){delay(100);counter++;}
  if(counter==2){counter=0;}
  if(counter==1){on();}
  if(counter==0){off();}   
  while(buttonVal==HIGH && (counter==0 || counter==1)){
    buttonVal = digitalRead(button);delay(100);
  if(buttonVal==LOW){goto zero;}
     }  
}
void on(){digitalWrite(led1,HIGH);}
void off(){digitalWrite(led1,LOW);}
