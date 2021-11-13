#include "ProgressBar.h"

unsigned int ProgressBar::getNumSections() const {
	return _numSections;
}

unsigned int ProgressBar::getSectionsFilled() const {
	return _sectionsFilled;
}

void ProgressBar::setSectionsFilled(unsigned int nf) {
	_sectionsFilled = nf;
}
