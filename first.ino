int ledpin = 13;
int reps = 0;


void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	while(reps < 3)
	{
	    digitalWrite(LED_BUILTIN, HIGH);
		delay(500);
		digitalWrite(LED_BUILTIN, LOW);
		delay(500);
		reps++;
		
	}
	if (reps > 3 )
	{
		digitalWrite(LED_BUILTIN, LOW);
	}

}