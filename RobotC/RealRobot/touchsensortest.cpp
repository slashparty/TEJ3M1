#pragma config(Sensor, S2,     touch,          sensorTouch)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true) {
		bool tvalue = SensorValue[S2];
		if (tvalue == true) 
		{
			displayTextLine(1, "True");
		}
		else 
		{
			displayTextLine(1, "False");
		}
		delay(50);
	}
}
