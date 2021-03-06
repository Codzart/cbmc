/*******************************************************************\

Module: Language Registration

Author: Peter Schrammel

\*******************************************************************/

/// \file
/// Language Registration

#include "jdiff_languages.h"

#include <langapi/mode.h>

#include <java_bytecode/java_bytecode_language.h>

void jdiff_languagest::register_languages()
{
  register_language(new_java_bytecode_language);
}
