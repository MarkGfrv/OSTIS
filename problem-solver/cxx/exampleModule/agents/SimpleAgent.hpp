#pragma once

#include <sc-memory/kpm/sc_agent.hpp>

#include "keynodes/keynodes.hpp"
#include "SimpleAgent.generated.hpp"

namespace exampleModule
{
class SimpleAgent : public ScAgent
{
SC_CLASS(Agent, Event(Keynodes::question_say_hello, ScEvent::Type::AddOutputEdge))
  SC_GENERATED_BODY()
};
}
