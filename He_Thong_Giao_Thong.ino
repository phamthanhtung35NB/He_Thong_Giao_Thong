int timeXanh1=10000;   //1s=1000mls
int timeXanh2=10000;  //10000mls=10s

const int timeVang1=3000;
const int timeVang2=3000;

int timeDo1=timeXanh2+3000;
int timeDo2=timeXanh1+3000;

int ledXanh1 =10 ;
int ledVang1 =9 ;
int ledDo1 =8;

int ledXanh2 =13 ;
int ledVang2 =12 ;
int ledDo2 =11;
void setup() {
  pinMode(ledXanh1, OUTPUT);
  pinMode(ledVang1, OUTPUT);
  pinMode(ledDo1, OUTPUT);
  pinMode(ledXanh2, OUTPUT);
  pinMode(ledVang2, OUTPUT);
  pinMode(ledDo2, OUTPUT);
}
void loop() {
  digitalWrite( ledXanh1, HIGH); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(5000);                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,HIGH); 
  digitalWrite( ledDo1, LOW); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2, HIGH);
  delay(2000);                       
  digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, HIGH); 
  digitalWrite( ledVang2, LOW); 
  digitalWrite( ledDo2,LOW); 
   delay(5000);
 digitalWrite( ledXanh1, LOW); 
  digitalWrite( ledVang1,LOW); 
  digitalWrite( ledDo1, HIGH); 
  digitalWrite( ledXanh2, LOW); 
  digitalWrite( ledVang2, HIGH); 
  digitalWrite( ledDo2, LOW);
   delay(2000);                        
}