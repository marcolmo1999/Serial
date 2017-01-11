/***************************************************************
**                                                            **
**          Repte 5. Number Comunication Exercici 2           **
**          Repte 5. Number Comunication Exercici 2           **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
int num;
int resultat;            
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un Numero ?");
}

void loop() 
{  
   while(Serial.available() >0)
   {
    num = Serial.parseInt();
    Serial.print("El numero  ");
    Serial.print(num);
    Serial.print(" es:  ");
    //Serial.print(resultat);
  
    if (num & 0x01)
    {
      Serial.println ("Impar");
    }
     else
     {
      Serial.println ("Par");
     }
     Serial.println("Entra un Numero ?");
   }

  }

