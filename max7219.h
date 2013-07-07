#ifndef MAX_7219_H
#define MAX_7219_H

#include <Arduino.h>

#define SUPPORT_SCROLLING
#define SUPPORT_PERCENTAGE
//#undef SUPPORT_SCROLLING
//#undef SUPPORT_PERCENTAGE

class Max7219
{
public:
	explicit Max7219(byte dataInPin, byte loadPin, byte clockPin, byte numMax = 1);
	~Max7219() {}
	void maxSingle(byte reg, byte col);
	void maxOne(byte maxNr, byte reg, byte col);
	void maxAll(byte reg, byte col);
	void setIntensity(byte intensity); // range 0..15
	void fill(byte pattern = 0xff);
	void clear()
	{
		fill(0);
	}

#ifdef SUPPORT_PERCENTAGE
	void resetPercentage(unsigned int maxValue);
	void showPercentage(unsigned int current);
#endif

#ifdef SUPPORT_SCROLLING
	void resetScrollText(byte *text, boolean inverse = false);
	void doScrollLeft();
	void doScrollUp();
	void setToCharacter(byte character, boolean inverse = false);
#endif

private:
	void putByte(byte data);
	byte m_dataInPin;
	byte m_loadPin;
	byte m_clockPin;
	// specifies how many MAX7219's you'll use
	byte m_numMax;
#ifdef SUPPORT_PERCENTAGE
	unsigned int m_percentMaxValue;
	byte m_percentLastValue;
#endif

#ifdef SUPPORT_SCROLLING
	word getCharOffset(byte theChar);
	void scrollNextPixRowCol();

	byte* m_scrollText;
	word m_scrollIndex;
	byte m_currScrollPixRowCol;
	boolean m_inverseScroll;
#endif
};

#endif
