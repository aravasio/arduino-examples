int led2 = 2; // middle
int led3 = 3; // top-left
int led4 = 4; // top
int led5 = 5; // top-right
int led6 = 6; // bottom-left
int led7 = 7; // bottom-right
int led8 = 8; // bottom
int led9 = 9; // period

int cd = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);

  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  
  switch(cd) {
    case 0:
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, HIGH);
    
    case 1:
      digitalWrite(led5, HIGH);
      digitalWrite(led7, HIGH);  
    break;

    case 2:
      digitalWrite(led2, HIGH); 
      digitalWrite(led4, HIGH);  
      digitalWrite(led5, HIGH);  
      digitalWrite(led6, HIGH);  
      digitalWrite(led8, HIGH);  
    break;

    case 3:
      digitalWrite(led2, HIGH);
      digitalWrite(led4, HIGH);  
      digitalWrite(led5, HIGH);  
      digitalWrite(led7, HIGH);  
      digitalWrite(led8, HIGH);  
    break;

    case 4:
      digitalWrite(led2, HIGH);  
      digitalWrite(led3, HIGH);  
      digitalWrite(led5, HIGH);  
      digitalWrite(led7, HIGH);  
    break;

    case 5:
      digitalWrite(led2, HIGH);  
      digitalWrite(led3, HIGH);  
      digitalWrite(led4, HIGH);  
      digitalWrite(led7, HIGH);  
      digitalWrite(led8, HIGH);  
    break;

    case 6:
      digitalWrite(led2, HIGH);  
      digitalWrite(led3, HIGH);  
      digitalWrite(led4, HIGH);  
      digitalWrite(led6, HIGH);  
      digitalWrite(led7, HIGH);  
      digitalWrite(led8, HIGH);  
    break;

    case 7:
      digitalWrite(led4, HIGH); 
      digitalWrite(led5, HIGH);  
      digitalWrite(led7, HIGH);  
    break;

    case 8:
      digitalWrite(led2, HIGH);  
      digitalWrite(led3, HIGH);  
      digitalWrite(led4, HIGH);  
      digitalWrite(led5, HIGH);  
      digitalWrite(led6, HIGH);  
      digitalWrite(led7, HIGH);  
      digitalWrite(led8, HIGH);
    break;

    case 9:
      digitalWrite(led2, HIGH);  
      digitalWrite(led3, HIGH);  
      digitalWrite(led4, HIGH);  
      digitalWrite(led5, HIGH);  
      digitalWrite(led7, HIGH);  
    break;

    default:
      cd = 10;
    break;
  }

cd = --cd;

1delay(1000);
}
