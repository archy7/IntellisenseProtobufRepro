#pragma once

#include "messages/dummy1.pb.h"

struct MessageUser{

	void PrintIfHasAge();

	messages::Human m_human;
};