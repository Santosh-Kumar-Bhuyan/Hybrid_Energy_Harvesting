#define solar 4
#define water 3
int offset=20;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int volt1=analogRead(A0);
  double voltage1= map(volt1,0,1023,0,2500) + offset;
  voltage1/=100;
  int volt2=analogRead(A1);
  double voltage2= map(volt2,0,1023,0,2500) + offset;
  voltage2/=100;

  if (voltage1>12 && voltage1>voltage2) {
    digitalWrite(solar, HIGH);
    
  }
  if(voltage2>12 && voltage2>voltage1){
    digitalWrite(water, HIGH);
  }

}
