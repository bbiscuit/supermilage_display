#pragma once

//
// A custom JUCE progress-bar JUCE widget; this will be used for lap
// progress.
//
// Author: Andrew Huffman
//

#include <JuceHeader.h>

class ProgressBar {
public:



private:

	// # PRIVATE DATA
	
	/*
	 * The number of sections which the progress bar
	 * is split up into.
	 */
	unsigned int _numSections;
	
	/*
	 * The number of completed sections in the
	 * progress bar.
	 */
	unsigned int _sectionsFilled;

	/*
	 * The position on the screen of the progress bar.
	 */
	juce::Point<int> center;
};
