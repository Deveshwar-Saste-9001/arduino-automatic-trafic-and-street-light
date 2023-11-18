// Way -1
int r1 = 1;
int y1 = 2;
int g1 = 3;

// Way -2
int r2 = 4;
int y2 = 5;
int g2 = 6;

// Way -3
int r3 = 7;
int y3 = 8;
int g3 = 9;

// Way -4
int r4 = 10;
int y4 = 11;
int g4 = 12;
//Eng; ALI MEKAAL
void setup() {
pinMode (r1, OUTPUT);
pinMode (y1, OUTPUT);
pinMode (g1, OUTPUT);

pinMode (r2, OUTPUT);
pinMode (y2, OUTPUT);
pinMode (g2, OUTPUT);

pinMode (r3, OUTPUT);
pinMode (y3, OUTPUT);
pinMode (g3, OUTPUT);

pinMode (r4, OUTPUT);
pinMode (y4, OUTPUT);
pinMode (g4, OUTPUT);

//ALI KARKUKI

}

void loop() { 
    
digitalWrite(g1, HIGH);
digitalWrite(r2, HIGH);
digitalWrite(r3, HIGH);
digitalWrite(r4, HIGH);
delay(5000);

digitalWrite(g1, LOW);
digitalWrite(r2, LOW);

digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(2000);

digitalWrite(y1, LOW);
digitalWrite(y2, LOW);

digitalWrite(r1, HIGH);
digitalWrite(g2, HIGH);
delay(5000);

digitalWrite(g2, LOW);
digitalWrite(r3, LOW);

digitalWrite(y2, HIGH);
digitalWrite(y3, HIGH);
delay(2000);

digitalWrite(y2, LOW);
digitalWrite(y3, LOW);

digitalWrite(r2, HIGH);
digitalWrite(g3, HIGH);
digitalWrite(r4, HIGH);
delay(5000);

digitalWrite(g3, LOW);
digitalWrite(r4, LOW);


digitalWrite(y3, HIGH);
digitalWrite(y4, HIGH);
delay(2000);

digitalWrite(y3, LOW);
digitalWrite(y4, LOW);

digitalWrite(r3, HIGH);
digitalWrite(g4, HIGH);
delay(5000);

digitalWrite(r3, LOW);
digitalWrite(g4, LOW);
digitalWrite(r1, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y4, HIGH);
delay(2000);

digitalWrite(y1, LOW);
digitalWrite(y4, LOW);


}

