/*
Talos Electronics
 8-Noviembre-2015
 Rafael lozano Rolón 
 */
//Declaración de variables 
int Lectura=7;
int Pir=0;
int Led=12;

void setup ()
{
  pinMode(Lectura,INPUT);//Definir lectura como entrada
  pinMode(Led,OUTPUT); //Definir Led como salida
}

void loop()
{
  Pir=digitalRead(Lectura);//Guardar el valor del sensor en la variable pir
  delay(10);//esperar 10 ms 
  if(Pir==HIGH)//Si el pir manda un 1
  {
    digitalWrite(Led,HIGH); //Encender el led
  }
  else//De lo contrario
  {
    digitalWrite(Led,LOW); //Apagar el Led 
  }
}

