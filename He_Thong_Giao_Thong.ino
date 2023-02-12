//------------------------------------------------//
//thoi gian mac dinh                              //
const int timeXanh1=10000;   //1s=1000mls         //
const int timeXanh2=10000;  //10000mls=10s        //
                                                  //
//thoi gian cong                                  //
const int timecong=10000;                         //
//------------------------------------------------//
//time vang
const int timeVang1=3000;
const int timeVang2=3000;
//time do
int timeDo1=timeXanh2+3000;
int timeDo2=timeXanh1+3000;
//chan den led
#define ledXanh1 9
#define ledVang1 8
#define ledDo1 7

#define ledXanh2 12
#define ledVang2 12 
#define ledDo2 10
//nut den led
#define nutDo 6
#define nutDen 5
//bao error
#define error 13
void setup() {
  //nut
  pinMode(nutDo,INPUT);
  pinMode(nutDen,INPUT);
  //led
  pinMode(ledXanh1, OUTPUT);
  pinMode(ledVang1, OUTPUT);
  pinMode(ledDo1, OUTPUT);
  pinMode(ledXanh2, OUTPUT);
  pinMode(ledVang2, OUTPUT);
  pinMode(ledDo2, OUTPUT);
  //off all
  digitallWrite(ledXanh1,0);
  digitallWrite(ledVang1,0);
  digitallWrite(ledDo1,0);
  digitallWrite(ledXanh2,0);
  digitallWrite(ledVang2,0);
  digitallWrite(ledDo2,0);
  //error
  digitalWrite(error, 0);
}
void butonDo(){
  //xanh1 on
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeXanh1);
  //vang1 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeVang1);
  //xanh2 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, HIGH); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2,LOW); 
  delay(timeXanh2);
  //vang2 on
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, HIGH); 
  digitalWrite( ledDo2, LOW);
  delay(timeVang2);
}
void butonden(){
  //xanh1 on
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeXanh1);
  //vang1 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeVang1);
  //xanh2 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, HIGH); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2,LOW); 
  delay(timeXanh2);
  //vang2 on
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, HIGH); 
  digitalWrite( ledDo2, LOW);
  delay(timeVang2);
}
void loop() {
  if (digitalRead(nutDo==1))
  {
    butonDo();
  }
  else if (digitalRead(nutDen==1))
  {
    butonden();  
  }
  else{  
  //xanh1 on
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeXanh1);
  //vang1 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeVang1);
  //xanh2 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, HIGH); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2,LOW); 
  delay(timeXanh2);
  //vang2 on
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, HIGH); 
  digitalWrite( ledDo2, LOW);
  delay(timeVang2);                        
  }
}