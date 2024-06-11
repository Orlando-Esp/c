int A = 0;
int B = 1;
int C = 2;
int F1 = 5;

void setup() {
 pinMode(A,INPUT);
 pinMode(B,INPUT);
 pinMode(C,INPUT);
 pinMode(F1,OUTPUT);

}
void loop() {
  if(A == false && B == true && C== false)
  {
    digitalWrite(F1,HIGH);
  }
  else{
    digitalWrite(F1,LOW);
  }


  if(A == true && B == false && C == false)
  {
    digitalWrite(F1,HIGH);
  }
  else{
    digitalWrite(F1,LOW);
  }

    
  if(A == true && B == false && C == true)
  {
    digitalWrite(F1,HIGH);
  }
  else{
    digitalWrite(F1,LOW);
  }

  if(A == true && B == true && C == false)
  {
    digitalWrite(F1,HIGH);
  }
  else{
    digitalWrite(F1,LOW);
  }
}
