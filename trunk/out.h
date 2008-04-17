/*
  This file was generated using TzParser,
  which was created by salomon . brys @gmail . com
  This file is under TzLicence which is a MPL / LGPL / GPL Licence
  with some simple restrictions.
  YOU MUST NOT USE THIS FILE FOR ANY COMERCIAL USE WITHOUT THE
  PERMISSION OF IT'S GENERATOR AUTHOR.
*/

#ifndef	OUT_H__
#define	OUT_H__

#include "tzParse/tzParse.h"

using namespace tzParse;

#define BNFREPEATCHARS "?+*"

RULE_DECLARE_SIMPLE(BNFIgnore);
RULE_DECLARE_SIMPLE(BNFLIgnore);
RULE_DECLARE_SIMPLE(BNFIgnCom);
RULE_DECLARE_SIMPLE(BNFRuleCall);
RULE_DECLARE_SIMPLE(BNFRuleCallIn);
RULE_DECLARE_SIMPLE(BNFRuleCheck);
RULE_DECLARE_SIMPLE(BNFString);
RULE_DECLARE_SIMPLE(BNFTzInstruction);
RULE_DECLARE_SIMPLE(BNFTzRule);
RULE_DECLARE_SIMPLE(BNFTzModifPrec);
RULE_DECLARE_SIMPLE(BNFTzArgs);
RULE_DECLARE_SIMPLE(BNFLitteral);
RULE_DECLARE_SIMPLE(BNFConcat);
RULE_DECLARE_SIMPLE(BNFInConcat);
RULE_DECLARE_SIMPLE(BNFRepeat);
RULE_DECLARE_SIMPLE(BNFFullRepeat);
RULE_DECLARE_SIMPLE(BNFRepeatSple);
RULE_DECLARE_SIMPLE(BNFRepeatCple);
RULE_DECLARE_SIMPLE(BNFTreeSave);
RULE_DECLARE_SIMPLE(BNFTreeSaveNode);
RULE_DECLARE_SIMPLE(BNFTreeSaveAttr);
RULE_DECLARE_SIMPLE(BNFGroup);
RULE_DECLARE_SIMPLE(BNFGroupAND);
RULE_DECLARE_SIMPLE(BNFGroupOR);
RULE_DECLARE_SIMPLE(BNFGroupInOR);
RULE_DECLARE_SIMPLE(BNF);
RULE_DECLARE_SIMPLE(BNFRule);

#endif	// !OUT_H__
