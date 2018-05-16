#pragma once
#include "builtinbase/common.h"

namespace cultlang {
namespace builtinbase 
{
	extern craft::lisp::BuiltinModuleDescription BuiltinBase;

	CULTLANG_BUILTINBASE_EXPORTED craft::instance<craft::lisp::Module> make_builtinbase_bindings(craft::instance<craft::lisp::Namespace> ns, craft::instance<> loader);
}}
