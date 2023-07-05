#include "messageUser.h"

#include <iostream>

void MessageUser::PrintIfHasAge() {
	if (m_human.has_age()) {
		std::cout << "Yes, has age." << std::endl;
	}
	else {
		std::cout << "No, has no age." << std::endl;
	}
};