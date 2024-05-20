
#include <LiquidCrystal.h>


const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int buttonPin = 9;
int buttonState = 0;


int x = 0;
int y = 0;
int z = 0;
int s = 0;
//////////////

char tag[] ="0B006D729F8B";
char tag1[] ="0B006CFC0992"; 
char tag2[] ="0B006D2AECA0";
char tag3[] ="0B006D3BA5F8";


char input[12];      
int count = 0;       

const int buz = 11;


void setup()
{
  
     Serial.begin(9600); 

    
     pinMode(buttonPin, INPUT);
     
     pinMode (buz, OUTPUT);
     digitalWrite(buz, LOW); 


     for(int i=0;i<6;i++)
   {  
   digitalWrite(buz, HIGH); 
   delay(70);
   digitalWrite(buz, LOW); 
   delay(70);
   
   }
     lcd.begin(16, 2);
     lcd.setCursor(0, 0);
     lcd.print(" Smart Shopping ");
     lcd.setCursor(0, 1);
     lcd.print("   trolly ");
     delay(2000);
     lcd.begin(16, 2);
     lcd.print(" Bill amount: ");
     lcd.setCursor(0, 1);
     lcd.print("  0 Rs ");
     delay(2000);
}
void loop()
{

 

  if(Serial.available())//
  {  
    
    
    count = 0; // Reset the counter to zero
   
    while(Serial.available() && count < 12) 
    {
      input[count] = Serial.read(); 
      count++; // increment counter
      delay(5);
    }
  
      // for(int i=0;i<12;i++)
       
   
        if(input[11]== tag[11])
       {
         for(int i=0;i<6;i++)
   {  
   digitalWrite(buz, HIGH); 
   delay(70);
   digitalWrite(buz, LOW); 
   delay(70);
   
   }
         lcd.clear();
        
         lcd.print("Product Rs.10 ");
         lcd.setCursor(0, 1);
         lcd.print("  addded ");
         delay(1000);
       //  Serial.println("Product Rs. 10 addded");
         x=10;
        }
        else
         if(input[11]== tag1[11])
       {

         for(int i=0;i<6;i++)
   {  
   digitalWrite(buz, HIGH); 
   delay(70);
   digitalWrite(buz, LOW); 
   delay(70);
   
   }
         lcd.clear();
        
         lcd.print("Product Rs.20 ");
         lcd.setCursor(0, 1);
         lcd.print("  addded ");
          delay(1000);
        // Serial.println("Product Rs. 20 addded");
        y=20;
        }
        else
         if(input[11]== tag2[11])
       {

         for(int i=0;i<6;i++)
   {  
   digitalWrite(buz, HIGH); 
   delay(70);
   digitalWrite(buz, LOW); 
   delay(70);
   
   }
         lcd.clear();
         
         lcd.print("Product Rs.30 ");
         lcd.setCursor(0, 1);
         lcd.print("  addded ");
         delay(1000);
         //Serial.println("Product Rs. 30 addded");
          z=30;
        }


        else
         if(input[11]== tag3[11])
 
  {  
     for(int i=0;i<6;i++)
   {  
   digitalWrite(buz, HIGH); 
   delay(70);
   digitalWrite(buz, LOW); 
   delay(70);
   
   }
     
    x=0;
    y=0;
    z=0;
    s=0;
    
         lcd.clear();
         lcd.setCursor(0, 0);
         lcd.print("  Bill Paid ");
         delay(2000);
         lcd.clear();
         lcd.setCursor(0, 0);
         lcd.print(" Thankyou for ");
         lcd.setCursor(0, 1);
         lcd.print("  shopping");
          delay(2000);
          delay(2000);
    //Serial.println("Bill Paid thankyou for shopping ");
     lcd.setCursor(0, 0);
     lcd.print(" Smart Shopping ");
     lcd.setCursor(0, 1);
     lcd.print("   trolly ");
     delay(200);
    
    }
    
   
   else
    { 
     // Serial.println("Access Denied");
     
    } 
        s=x+y+z;

         lcd.clear();
         lcd.setCursor(0, 0);
         lcd.print("Bill amount Rs: ");
         lcd.setCursor(0, 1);
         lcd.print(s);
         delay(100);
        
    for(count=0; count<12; count++) 
    {
      input[count]= 'F';
    }
    count = 0; 
  }


    

 }


                  
                  
                  
                  
                  
                  
                  
             
