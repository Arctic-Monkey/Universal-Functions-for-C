// This file will contain some universal functions that can be used in multiple projects.



/**
 * Description:    Returns a positive integer from the user. On non-positive
 *                 input, gives an error and reprompts the user
 *
 * Parameters:     -
 *
 * Return:         Positive integer entered by the user
 */
int GetPositiveInt(void)
{
    while (1)
	{
		int userInput;
		scanf("%d", &userInput);
		if (userInput > 0)
		{
			return userInput;
		}
		printf("Retry! Must be > 0\n>");
	}
}





// Under this section will be functions related to time calculations and printing time intervals, etc.

/**
 * Description:    Finds the hour value when adding period to current time.
 *
 * Parameters:     cMin - current minute value
 *                 cHour - current hour value
 *                 interval - number of minutes to add to current time
 *
 * Return:         Hour value after adding the period
 */
int CalcNextHour(int cMin, int cHour, int interval)
{
    return (cHour + (cMin + interval) / 60) % 24;
}


/**
 * Description:    Finds the minute value when adding period to current time.
 *
 * Parameters:     cMin - current minute value
 *                 interval - number of minutes to add to current time
 *
 * Return:         Minute value after adding the period
 */
int CalcNextMin(int cMin, int interval)
{   
    return (cMin + interval) % 60;
}



/**
 * Description:    Prints the time passed using hh:mm format. Hour values below
 *                 10 are space-padded and minue values below 10 are zero-padded
 *
 * Parameters:     hour - current hour value
 *                 min - current minute value
 *                 
 * Return:         -
 */
void PrintTime(int hour, int min)
{
    printf("%2d:%02d", hour, min);
}


/**
 * Description:    Prints a time interval using hh:mm - hh:mm format.
 *
 * Parameters:     startHour - Starting hour value
 *                 startMin - Starting minute value
 *                 endHour - End hour value
 *                 endMin - End minute value
 *                 
 * Return:         -
 */
void PrintTimeInterval(int startHour, int startMin, int endHour, int endMin)
{
    
    PrintTime(startHour, startMin);
    printf(" - ");
    PrintTime(endHour, endMin);
    
}

// END OF TIME SECTION
// END OF TIME SECTION
// END OF TIME SECTION
// END OF TIME SECTION