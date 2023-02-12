//------------------------------------------------//
//thoi gian mac dinh                              //
const int timeXanh1=10000;   //1s=1000mls         //
const int timeXanh2=10000;  //10000mls=10s        // chi sua o day
                                                  //
//thoi gian cong                                  //
const int timecong=10000;                         //
//------------------------------------------------//
//time vang
const int timeVang=3000;
//time do
int timeDo1=timeXanh2+3000;
int timeDo2=timeXanh1+3000;
//chan den led
#define ledXanh1 9
#define ledVang1 8
#define ledDo1 7

#define ledXanh2 12
#define ledVang2 11
#define ledDo2 10
//nut den led
#define nutDuongDai 6
#define nutDuongNgan 5
//bao error
#define error 13
void setup() {
  Serial.begin(9600);

  //nut
  pinMode(nutDuongDai,INPUT);
  pinMode(nutDuongNgan,INPUT);
  //led
  pinMode(ledXanh1, OUTPUT);
  pinMode(ledVang1, OUTPUT);
  pinMode(ledDo1, OUTPUT);
  pinMode(ledXanh2, OUTPUT);
  pinMode(ledVang2, OUTPUT);
  pinMode(ledDo2, OUTPUT);
  //off all
  digitalWrite(ledXanh1,0);
  digitalWrite(ledVang1,0);
  digitalWrite(ledDo1,0);
  digitalWrite(ledXanh2,0);
  digitalWrite(ledVang2,0);
  digitalWrite(ledDo2,0);
  //error
  digitalWrite(error, 0);
}
void buttonDuongDai(){
  //xanh1 on
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeXanh1+timecong);
  //vang1 on                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeVang);
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
  delay(timeVang);
}
void buttonDuongNgan(){
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
  delay(timeVang);
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
  delay(timeVang);
}
void loop() {
  if (digitalRead(nutDuongDai)==1&&digitalRead(nutDuongNgan)==0)
  {
    buttonDuongDai();
  }
  else if (digitalRead(nutDuongNgan)==1&&digitalRead(nutDuongDai)==0)
  {
    buttonDuongNgan();  
  }
  else{  
  //xanh1 on
  Serial.println("xanh1");
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeXanh1);
  //vang1 on    
  Serial.println("vang1");                   
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(timeVang);
  //xanh2 on      
  Serial.println("xanh2");                 
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, HIGH); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2,LOW); 
  delay(timeXanh2);
  //vang2 on
  Serial.println("vang 2");
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, HIGH); 
  digitalWrite( ledDo2, LOW);
  delay(timeVang);                        
  }
}
