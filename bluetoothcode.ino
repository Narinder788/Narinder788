 
int enA = 9;            
int in1 = 8;           
int in2 = 7;
int enB = 3;           
int in3 = 5;           
int in4 = 4;
char user_choice;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  Serial.begin(9600);
}

void loop() 
{
    if(Serial.available() > 0)
    {
      user_choice = Serial.read();
      switch(user_choice)
      {  
        case 'F':
          analogWrite(enA, 255);
          analogWrite(enB, 255);
          digitalWrite(in1, HIGH);
          digitalWrite(in2, LOW);
          digitalWrite(in3, HIGH);
          digitalWrite(in4, LOW);
          break;
        case 'B':
            analogWrite(enA, 255);
            analogWrite(enB, 255);
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4,HIGH);  
            break;        
        case 'L':
          analogWrite(enA, 255);
          analogWrite(enB, 255);
          digitalWrite(in1, HIGH);
          digitalWrite(in2, LOW);
          digitalWrite(in3, LOW);
          digitalWrite(in4, LOW);
          break;
        case 'R':
          analogWrite(enA, 255);
          analogWrite(enB, 255);
          digitalWrite(in1, LOW);
          digitalWrite(in2, LOW);
          digitalWrite(in3, HIGH);
          digitalWrite(in4, LOW);
          break;
        default:
          digitalWrite(in1, LOW);
          digitalWrite(in2, LOW);
          digitalWrite(in3, LOW);
          digitalWrite(in4, LOW);
          break;
      }
    }
}
