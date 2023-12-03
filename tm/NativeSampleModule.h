#pragma once

#if __has_include(<React-Codegen/AppSpecsJSI.h>)
#include <React-Codegen/AppSpecsJSI.h>
#elif __has_include("AppSpecsJSI.h")
#include "AppSpecsJSI.h"
#endif

#include <memory>
#include <string>

namespace facebook::react {
class NativeSampleModule
    : public NativeSampleModuleCxxSpec<NativeSampleModule> {
public:
  NativeSampleModule(std::shared_ptr<CallInvoker> jsInvoker);

  std::string reverseString(jsi::Runtime &rt, std::string input);
};
} // namespace facebook::react