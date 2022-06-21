int Serit1[] = {13,12,11}; // Kırmızı = 13 , Sarı=12 Yeşil = 11
int Serit2[] = {10,9,8}; // Kırmızı = 10 , Sarı=9 Yeşil = 8
int Serit3[] = {7,6,5}; // Kırmızı = 7 , Sarı=6 Yeşil = 5
int Serit4[] = {4,3,2}; // Kırmızı = 4 , Sarı=3 Yeşil = 2
int Seritler[] = {13,12,11,10,9,8,7,6,5,4,3,2};
int IRSensorler[] = {A0,A1,A2,A3}; // IRSerit1 = A0 , IRSerit2 = A1 IRSerit3 = A2 , IRSerit4 = A3
int i;


void setup()
{
  for (i=0;i<3; i++)
  {
    pinMode(Serit1[i],OUTPUT);
    pinMode(Serit2[i],OUTPUT);
    pinMode(Serit3[i],OUTPUT);
    pinMode(Serit4[i],OUTPUT);
  }

  for (i=0;i<3; i++)
  {
    pinMode(IRSensorler[i],INPUT);
   
  }
/*
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(Serit1[i], LOW); 
    digitalWrite(Serit2[i], LOW);
    digitalWrite(Serit3[i], LOW);
    digitalWrite(Serit4[i], LOW);
  }*/
  Serial.begin(9600);
  


  
}






void Kirmizi()
{
  digitalWrite(Serit1[0],HIGH);
  digitalWrite(Serit2[0],HIGH);
  digitalWrite(Serit3[0],HIGH);
  digitalWrite(Serit4[0],HIGH);
  
  
}





void loop()

{
  Kirmizi();
/*
digitalWrite(Serit3[0], HIGH); // kırmızı ledimizi yaktık.
delay(5000); // 5 saniye kırmızı ledimiz yanar (buradaki 1000 degeri milisaniye cinsindendir. 1000milisaniye=1saniye).
digitalWrite(Serit3[0], LOW); // kırmızı ledimizi söndürdük.
digitalWrite(Serit3[1], HIGH); // sarı ledimizi yaktık.
delay(3000); // 3 saniye sarı led yanar.
digitalWrite(Serit3[1], LOW); // sarı ledimizi söndürdük.
digitalWrite(Serit3[2], HIGH); // yeşil ledimizi yaktık.
delay(3000); // 3 saniye yesil led yanar.
digitalWrite(Serit3[2], LOW); // yeşil ledimizi söndürdük.
  /*
  
  Serial.println(analogRead(IRSensorler[1]));
  //Serial.println(analogRead(IRSensorler[0]));
   // Serial.println(analogRead(IRSensorler[2]));
   // Serial.println(analogRead(IRSensorler[3]));
   //digitalWrite(Serit4[0],HIGH);
  //digitalWrite(Serit4[1],HIGH);
   //digitalWrite(Serit4[2],HIGH);
  /*digitalWrite(Serit2[0],HIGH);
  digitalWrite(Serit2[1],HIGH);
digitalWrite(Serit2[2],HIGH);
  digitalWrite(Serit1[0],HIGH);
  digitalWrite(Serit1[1],HIGH);
digitalWrite(Serit1[2],HIGH);
  digitalWrite(Serit3[0],HIGH);
  digitalWrite(Serit3[1],HIGH);
digitalWrite(Serit3[2],HIGH);
 digitalWrite(Serit4[0],HIGH);
  digitalWrite(Serit4[1],HIGH);
digitalWrite(Serit4[2],HIGH);
*/




 Serial.println(analogRead(IRSensorler[0]));

 Serial.println(analogRead(IRSensorler[1]));

 Serial.println(analogRead(IRSensorler[2]));
  Serial.println(analogRead(IRSensorler[3]));

int IRSensor1=analogRead(IRSensorler[0]);

int IRSensor2=analogRead(IRSensorler[1]);

int IRSensor3=analogRead(IRSensorler[2]);

int IRSensor4=analogRead(IRSensorler[3]);

if(IRSensor1>50)
{
    
    digitalWrite(Serit1[1],LOW);
    digitalWrite(Serit1[2],LOW);
  
  
}else
{
 

 digitalWrite(Serit1[0],LOW);

 digitalWrite(Serit1[1], HIGH); // sarı ledimizi yaktık.
delay(1000); // 3 saniye sarı led yanar.
digitalWrite(Serit1[1], LOW); // sarı ledimizi söndürdük.
digitalWrite(Serit1[2],HIGH);
delay(4000);
 digitalWrite(Serit2[0],HIGH);
 digitalWrite(Serit3[0],HIGH);
 digitalWrite(Serit4[0],HIGH);



  
  }

if(IRSensor2>50)
{
    
    digitalWrite(Serit2[1],LOW);
    digitalWrite(Serit2[2],LOW);
  
  
}else
{
 

 digitalWrite(Serit2[0],LOW);

 digitalWrite(Serit2[1], HIGH); // sarı ledimizi yaktık.
delay(1000); // 3 saniye sarı led yanar.
digitalWrite(Serit2[1], LOW); // sarı ledimizi söndürdük.
digitalWrite(Serit2[2],HIGH);
delay(4000);
 digitalWrite(Serit1[0],HIGH);
 digitalWrite(Serit3[0],HIGH);
 digitalWrite(Serit4[0],HIGH);



  
  }

  if(IRSensor3>50)
{
    
    digitalWrite(Serit3[1],LOW);
    digitalWrite(Serit3[2],LOW);
  
  
}else
{
 

 digitalWrite(Serit3[0],LOW);

 digitalWrite(Serit3[1], HIGH); // sarı ledimizi yaktık.
delay(1000); // 3 saniye sarı led yanar.
digitalWrite(Serit3[1], LOW); // sarı ledimizi söndürdük.
digitalWrite(Serit3[2],HIGH);
delay(4000);
 digitalWrite(Serit1[0],HIGH);
 digitalWrite(Serit2[0],HIGH);
 digitalWrite(Serit4[0],HIGH);



  
  }

   if(IRSensor4>50)
{
    
    digitalWrite(Serit4[1],LOW);
    digitalWrite(Serit4[2],LOW);
  
  
}else
{
 

 digitalWrite(Serit4[0],LOW);

 digitalWrite(Serit4[1], HIGH); // sarı ledimizi yaktık.
delay(1000); // 3 saniye sarı led yanar.
digitalWrite(Serit4[1], LOW); // sarı ledimizi söndürdük.
digitalWrite(Serit4[2],HIGH);
delay(4000);
 digitalWrite(Serit1[0],HIGH);
 digitalWrite(Serit2[0],HIGH);
 digitalWrite(Serit3[0],HIGH);



  
  }
  
  



}
