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

	/*
	 * Gets the number of discrete sections which the progress
	 * bar is split into.
	 *
	 * Returns:
	 * The number of sections.
	 */
	unsigned int getNumSections() const;

	/*
	 * Gets the number of discrete sections which have already
	 * been completed (filled).
	 *
	 * Returns:
	 * The number of completed sections.
	 */
	unsigned int getSectionsFilled() const;

	/*
	 * Sets the number of sections which have already been
	 * completed (filled).
	 *
	 * Params:
	 * nf -> The number of sections that have been filled.
	 */
	void setSectionsFilled(unsigned int nf);

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
