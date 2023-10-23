#include <iostream>

#include <sc-memory/sc_memory.hpp>
#include <sc-memory/sc_stream.hpp>

#include <sc-agents-common/utils/IteratorUtils.hpp>
#include <sc-agents-common/utils/AgentUtils.hpp>
#include "SimpleAgent.hpp"
using namespace std;
using namespace utils;

namespace exampleModule
{
SC_AGENT_IMPLEMENTATION(SimpleAgent)
{
SC_LOG_DEBUG("Hello World!");
return SC_RESULT_OK;
}
}

