/// @file remote/_build.hpp
/// @brief Unity build header for fl/control/ directory
/// Includes in dependency order: base types, transport, rpc subsystem, then remote

// begin current directory includes
#include "fl/control/remote.cpp.hpp"
#include "fl/control/types.cpp.hpp"
#include "fl/control/wled.cpp.hpp"

// begin sub directory includes
#include "fl/control/rpc/_build.cpp.hpp"
#include "fl/control/transport/_build.cpp.hpp"
#include "fl/control/wled/_build.cpp.hpp"
