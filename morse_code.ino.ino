#define led 11

String code;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    Serial.println("enter what you want:");
    String word=Serial.readStringUntil('/n');
    for (int i=0;i<word.length();i++){
      if (word[i]==' '){
        space();
      }
      else if (word[i]=='A'){
        A();
      }
      else if(word[i]=='B'){
        B();
      }
      else if(word[i]=='C'){
        C();
      }
      else if(word[i]=='D'){
        D();
      }
      else if(word[i]=='E'){
        E();
      }
      else if(word[i]=='F'){
        FR();
      }
      else if(word[i]=='G'){
        G();
      }
      else if(word[i]=='H'){
        H();
      }
      else if(word[i]=='I'){
        I();
      }
      else if(word[i]=='J'){
        J();
      }
      else if(word[i]=='K'){
        K();
      }
      else if(word[i]=='L'){
        L();
      }
      else if(word[i]=='M'){
        M();
      }
      else if(word[i]=='N'){
        N();
      }
      else if(word[i]=='O'){
        O();
      }
      else if(word[i]=='P'){
        P();
      }
      else if(word[i]=='Q'){
        Q();
      }
      else if(word[i]=='R'){
        R();
      }
      else if(word[i]=='S'){
        S();
      }
      else if(word[i]=='T'){
        T();
      }
      else if(word[i]=='U'){
        U();
      }
      else if(word[i]=='V'){
        V();
      }
      else if(word[i]=='W'){
        W();
      }
      else if(word[i]=='X'){
        X();
      }
      else if(word[i]=='Y'){
        Y();
      }
      else if(word[i]=='Z'){
        Z();
      }
    }
  }
}

void dot(){
  delay(300);
  Serial.print('.');
  digitalWrite(led,HIGH);
  delay(300);
  digitalWrite(led,LOW);
}
void dash(){
  delay(300);
  Serial.print('-');
  digitalWrite(led,HIGH);
  delay(900);
  digitalWrite(led,LOW);
}
void space(){//in space between words led doesn't blink for 7 time periods (2100ms)
  Serial.print(' ');
  digitalWrite(led,LOW);
  delay(2100);
}
void A(){
  dot();
  dash();
  delay(900);
}
void B(){
  dash();
  dot();
  dot();
  dot();
  delay(900);
}
void C(){
  dash();
  dot();
  dash();
  dot();
  delay(900);
}
void D(){
  dash();
  dot();
  dot();
  delay(900);
}
void E(){
  dot();
  delay(900);
}
void FR(){
  dot();
  dot();
  dash();
  dot();
  delay(900);
}
void G(){
  dash();
  dash();
  dot();
  delay(900);
}
void H(){
  dot();
  dot();
  dot();
  dot();
  delay(900);
}
void I(){
  dot();
  dot();
  delay(900);
}
void J(){
  dot();
  dash();
  dash();
  dash();
  delay(900);
}
void K(){
  dash();
  dot();
  dash();
  delay(900);
}
void L(){
  dot();
  dash();
  dot();
  dot();
  delay(900);
}
void M(){
  dash();
  dash();
  delay(900);
}
void N(){
  dash();
  dot();
  delay(900);
}
void O(){
  dash();
  dash();
  dash();
  delay(900);
}
void P(){
  dot();
  dash();
  dash();
  dot();
  delay(900);
}
void Q(){
  dash();
  dash();
  dot();
  dash();
  delay(900);
}
void R(){
  dot();
  dash();
  dot();
  delay(900);
}
void S(){
  dot();
  dot();
  dot();
  delay(900);
}
void T(){
  dash();
  delay(900);
}
void U(){
  dot();
  dot();
  dash();
  delay(900);
}
void V(){
  dot();
  dot();
  dot();
  dash();
  delay(900);
}
void W(){
  dot();
  dash();
  dash();
  delay(900);
}
void X(){
  dash();
  dot();
  dot();
  dash();
  delay(900);
}
void Y(){
  dash();
  dot();
  dash();
  dash();
  delay(900);
}
void Z(){
  dash();
  dash();
  dot();
  dot();
  delay(900);
}


