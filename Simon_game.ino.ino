#define r_but 3
#define g_but 4
#define b_but 5
#define y_but 6
#define r_led 7
#define g_led 8
#define b_led 9
#define y_led 10
int score=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(r_but,INPUT);
  pinMode(g_but,INPUT);
  pinMode(b_but,INPUT);
  pinMode(y_but,INPUT);
  pinMode(r_led,OUTPUT);
  pinMode(g_led,OUTPUT);
  pinMode(b_led,OUTPUT);
  pinMode(y_led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0){
    Serial.println("Choose difficulty: a)Easy b)Medium c)Hard");
    char dif=Serial.read();
    if(dif=='a'){
      easy();
    }
    else if(dif=='b'){
      medium();
    }
    else if(dif=='c'){
      hard();
    }
  }
}
void easy(){
  while (true){
    String comp_seq="";
    String my_seq="";
    unsigned long t=millis();
    while ((comp_seq).length()>=0 && (comp_seq).length()<4){
      int x =random(11, 15);

      if(comp_seq.length()==4){
        break;
      }
      switch (x){
        case 11:
        digitalWrite(r_led,HIGH);
        delay(1000);
        digitalWrite(r_led,LOW);
        comp_seq+='r';
        break;
        case 12:
        digitalWrite(g_led,HIGH);
        delay(1000);
        digitalWrite(g_led,LOW);
        comp_seq+='g';
        break;
        case 13:
        digitalWrite(b_led,HIGH);
        delay(1000);
        digitalWrite(b_led,LOW);
        comp_seq+='b';
        break;
        case 14:
        digitalWrite(y_led,HIGH);
        delay(1000);
        digitalWrite(y_led,LOW);
        comp_seq+='y';
        break;
        default:
        break;
      }
    }
    unsigned long cmp = millis();
  
    delay(1000);
    Serial.println("start");
    while((millis()-cmp)<=5000){
    if(digitalRead(r_but)==HIGH){
      digitalWrite(r_led,HIGH);
      delay(700);
      digitalWrite(r_led,LOW);
      my_seq+='r';
    }
    else if(digitalRead(g_but)==HIGH){
      digitalWrite(g_led,HIGH);
      delay(700);
      digitalWrite(g_led,LOW);
      my_seq+='g';
    }
    else if(digitalRead(b_but)==HIGH){
      digitalWrite(b_led,HIGH);
      delay(700);
      digitalWrite(b_led,LOW);
      my_seq+='b';
    }
    else if(digitalRead(y_but)==HIGH){
      digitalWrite(y_led,HIGH);
      delay(700);
      digitalWrite(y_led,LOW);
      my_seq+='y';
    }
  }
    if (comp_seq==my_seq){
      score++;
      Serial.println("your score is");
      Serial.println(score);
      comp_seq = "";
      my_seq = "";
      break;
    }
    else{
      Serial.println("GAME OVER your score is");
      Serial.println(score);
      score=0;
      comp_seq = "";
      my_seq = "";
      break;
    }
  }
}
void medium(){
  while (true){
    String comp_seq="";
    String my_seq="";
    unsigned long t=millis();
    while ((comp_seq).length()>=0 && (comp_seq).length()<4){
      int x =random(11, 15);

      if(comp_seq.length()==4){
        break;
      }
      switch (x){
        case 11:
        digitalWrite(r_led,HIGH);
        delay(500);
        digitalWrite(r_led,LOW);
        comp_seq+='r';
        break;
        case 12:
        digitalWrite(g_led,HIGH);
        delay(500);
        digitalWrite(g_led,LOW);
        comp_seq+='g';
        break;
        case 13:
        digitalWrite(b_led,HIGH);
        delay(500);
        digitalWrite(b_led,LOW);
        comp_seq+='b';
        break;
        case 14:
        digitalWrite(y_led,HIGH);
        delay(500);
        digitalWrite(y_led,LOW);
        comp_seq+='y';
        break;
        default:
        break;
      }
    }
    unsigned long cmp = millis();
  
    delay(1000);
    Serial.println("start");
    while((millis()-cmp)<=5000){
    if(digitalRead(r_but)==HIGH){
      digitalWrite(r_led,HIGH);
      delay(700);
      digitalWrite(r_led,LOW);
      my_seq+='r';
    }
    else if(digitalRead(g_but)==HIGH){
      digitalWrite(g_led,HIGH);
      delay(700);
      digitalWrite(g_led,LOW);
      my_seq+='g';
    }
    else if(digitalRead(b_but)==HIGH){
      digitalWrite(b_led,HIGH);
      delay(700);
      digitalWrite(b_led,LOW);
      my_seq+='b';
    }
    else if(digitalRead(y_but)==HIGH){
      digitalWrite(y_led,HIGH);
      delay(700);
      digitalWrite(y_led,LOW);
      my_seq+='y';
    }
  }
    if (comp_seq==my_seq){
      score++;
      Serial.println("your score is");
      Serial.println(score);
      comp_seq = "";
      my_seq = "";
      break;
    }
    else{
      Serial.println("GAME OVER your score is");
      Serial.println(score);
      score=0;
      comp_seq = "";
      my_seq = "";
      break;
    }
  }
}
void hard(){
  while (true){
    String comp_seq="";
    String my_seq="";
    unsigned long t=millis();
    while ((comp_seq).length()>=0 && (comp_seq).length()<4){
      int x =random(11, 15);

      if(comp_seq.length()==4){
        break;
      }
      switch (x){
        case 11:
        digitalWrite(r_led,HIGH);
        delay(200);
        digitalWrite(r_led,LOW);
        comp_seq+='r';
        break;
        case 12:
        digitalWrite(g_led,HIGH);
        delay(200);
        digitalWrite(g_led,LOW);
        comp_seq+='g';
        break;
        case 13:
        digitalWrite(b_led,HIGH);
        delay(200);
        digitalWrite(b_led,LOW);
        comp_seq+='b';
        break;
        case 14:
        digitalWrite(y_led,HIGH);
        delay(200);
        digitalWrite(y_led,LOW);
        comp_seq+='y';
        break;
        default:
        break;
      }
    }
    unsigned long cmp = millis();
  
    delay(1000);
    Serial.println("start");
    while((millis()-cmp)<=5000){
    if(digitalRead(r_but)==HIGH){
      digitalWrite(r_led,HIGH);
      delay(700);
      digitalWrite(r_led,LOW);
      my_seq+='r';
    }
    else if(digitalRead(g_but)==HIGH){
      digitalWrite(g_led,HIGH);
      delay(700);
      digitalWrite(g_led,LOW);
      my_seq+='g';
    }
    else if(digitalRead(b_but)==HIGH){
      digitalWrite(b_led,HIGH);
      delay(700);
      digitalWrite(b_led,LOW);
      my_seq+='b';
    }
    else if(digitalRead(y_but)==HIGH){
      digitalWrite(y_led,HIGH);
      delay(700);
      digitalWrite(y_led,LOW);
      my_seq+='y';
    }
  }
    if (comp_seq==my_seq){
      score++;
      Serial.println("your score is");
      Serial.println(score);
      comp_seq = "";
      my_seq = "";
      break;
    }
    else{
      Serial.println("GAME OVER your score is");
      Serial.println(score);
      score=0;
      comp_seq = "";
      my_seq = "";
      break;
    }
  }
}