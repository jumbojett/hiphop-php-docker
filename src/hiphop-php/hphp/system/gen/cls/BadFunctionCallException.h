/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_BadFunctionCallException_h44e41d90__
#define __GENERATED_cls_BadFunctionCallException_h44e41d90__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/LogicException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 208 */
FORWARD_DECLARE_CLASS(BadFunctionCallException);
extern const ObjectStaticCallbacks cw_BadFunctionCallException;
class c_BadFunctionCallException : public c_LogicException {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(BadFunctionCallException, BadFunctionCallException)
  c_BadFunctionCallException(const ObjectStaticCallbacks *cb = &cw_BadFunctionCallException) : c_LogicException(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
};
ObjectData *coo_BadFunctionCallException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_BadFunctionCallException_h44e41d90__