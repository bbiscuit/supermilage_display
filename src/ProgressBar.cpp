#include "ProgressBar.h"

ProgressBar::ProgressBar(juce::Point<int> center, unsigned int numSections) {
	_center = center;
	_numSections = numSections;
	_sectionsFilled = 0;
}

void ProgressBar::draw(juce::Graphics& g) const {
	// FIXME, I don't know how to do this
}

unsigned int ProgressBar::getNumSections() const {
	return _numSections;
}

unsigned int ProgressBar::getSectionsFilled() const {
	return _sectionsFilled;
}

void ProgressBar::setSectionsFilled(unsigned int nf) {
	_sectionsFilled = nf;
}
