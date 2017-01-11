/***************************************************************
**                                                            **
**              Repte 2. Math is fun Exercici 2               **
**              Repte 2. Math is fun Exercici 2               **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
int a = 3;
int b = 4;
int h;
int z;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Lets calculate a hypotenuse");
Serial.print("a=");
Serial.println(a);
Serial.print("b=");
Serial.println(b);
z = pow(3,2)+pow(4,2);
h=sqrt(z);
Serial.print("h=");
Serial.println(h);



void loop() {
  // put your main code here, to run repeatedly:

}

