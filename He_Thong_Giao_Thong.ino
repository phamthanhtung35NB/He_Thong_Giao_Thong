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
#define ledXanhDai 9
#define ledVangDai 8
#define ledDoDai 7

#define ledXanhNgan 12
#define ledVangNgan 11
#define ledDoNgan 10
//nut den led
#define nutThemTimeDuongDai 6
#define nutThemTimeDuongNgan 5

#define batDoDuongDai 4
#define batDoDuongNgan 3
//bao error
#define error 13
void setup() {
  Serial.begin(9600);

  //nut
  pinMode(nutThemTimeDuongDai,INPUT);
  pinMode(nutThemTimeDuongNgan,INPUT);
  //led
  pinMode(ledXanhDai, OUTPUT);
  pinMode(ledVangDai, OUTPUT);
  pinMode(ledDoDai, OUTPUT);
  pinMode(ledXanhNgan, OUTPUT);
  pinMode(ledVangNgan, OUTPUT);
  pinMode(ledDoNgan, OUTPUT);
  //off all
  digitalWrite(ledXanhDai,0);
  digitalWrite(ledVangDai,0);
  digitalWrite(ledDoDai,0);
  digitalWrite(ledXanhNgan,0);
  digitalWrite(ledVangNgan,0);
  digitalWrite(ledDoNgan,0);
  //error
  digitalWrite(error, 0);
}
void buttonDuongDai(){
  //xanh1 on
  digitalWrite( ledXanhDai, HIGH); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeXanh1+timecong);
  //vang1 on                       
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,HIGH); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeVang);
  //xanh2 on                       
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, HIGH); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan,LOW); 
  delay(timeXanh2);
  //vang2 on
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, HIGH); 
  digitalWrite( ledDoNgan, LOW);
  delay(timeVang);
}
void buttonDuongNgan(){
  //xanh1 on
  digitalWrite( ledXanhDai, HIGH); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeXanh1);
  //vang1 on                       
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,HIGH); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeVang);
  //xanh2 on                       
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, HIGH); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan,LOW); 
  delay(timeXanh2+timecong);
  //vang2 on
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, HIGH); 
  digitalWrite( ledDoNgan, LOW);
  delay(timeVang);
}
 void binhthuong(){
  //xanh dai on-đỏ ngắn on
  Serial.println("xanh1");
  digitalWrite( ledXanhDai, HIGH); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeXanh1);
  //vang dài on- dỏ ngắn on    
  Serial.println("vang1");                   
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,HIGH); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
  delay(timeVang);
  //xanh2 on      
  Serial.println("xanh2");                 
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, HIGH); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan,LOW); 
  delay(timeXanh2);
  //vang2 on
  Serial.println("vang 2");
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, HIGH); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, HIGH); 
  digitalWrite( ledDoNgan, LOW);
  delay(timeVang);
 }
void buttonbatDoDuongDai(){
  Serial.println("den do duong dai");
  digitalWrite( ledXanhDai, LOW); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, 1); 
  digitalWrite( ledXanhNgan, 1); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, 0);
}
void buttonbatDoDuongNgan(){
  Serial.println("den do duong ngan");
  digitalWrite( ledXanhDai, HIGH); 
  digitalWrite( ledVangDai,LOW); 
  digitalWrite( ledDoDai, LOW); 
  digitalWrite( ledXanhNgan, LOW); 
  digitalWrite( ledVangNgan, LOW); 
  digitalWrite( ledDoNgan, HIGH);
}
void loop() {
  // tăng tg đường dài
  if (digitalRead(nutThemTimeDuongDai)==1&&digitalRead(nutThemTimeDuongNgan)==0&&digitalRead(batDoDuongDai)==0&&digitalRead(batDoDuongNgan)==0)
  {
    buttonDuongDai();
  }
  // tăng tg ggường ngắn
  else if (digitalRead(nutThemTimeDuongNgan)==1&&digitalRead(nutThemTimeDuongDai)==0&&digitalRead(batDoDuongDai)==0&&digitalRead(batDoDuongNgan)==0)
  {
    buttonDuongNgan();  
  }
  // bật đèn đỏ đường dài
  else if (digitalRead(batDoDuongDai)==1&&digitalRead(batDoDuongNgan)==0&&digitalRead(nutThemTimeDuongDai)==0&&digitalRead(nutThemTimeDuongNgan)==0)
  {
    buttonbatDoDuongDai();
  }
  // bật đèn đỏ đường ngắn
  else if (digitalRead(batDoDuongNgan)==1&&digitalRead(batDoDuongDai)==0&&digitalRead(nutThemTimeDuongDai)==0&&digitalRead(nutThemTimeDuongNgan)==0)
  {
    buttonbatDoDuongNgan;
  }
  //binh thường
  else if (digitalRead(batDoDuongNgan)==0&&digitalRead(batDoDuongDai)==0&&digitalRead(nutThemTimeDuongDai)==0&&digitalRead(nutThemTimeDuongNgan)==0){  
    binhthuong();                  
  }
}
