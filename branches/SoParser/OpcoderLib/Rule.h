#ifndef __SO_RULE_H__
#define __SO_RULE_H__

#include "AutoPtr.h"
#include "RulesVisitor.h"

#include <string>

namespace SoParse
{
	class IRule;
	typedef SoUtil::AutoPtr<IRule> APIRule;

	class IRulesVisitor;

	class IRule
	{
	public:
		virtual ~IRule() {}

		virtual std::string getName() const = 0;
		virtual char const * getType() const = 0;

		virtual std::string	getOpcodeStart() = 0;
		virtual std::string	getOpcodeEnd() = 0;

		virtual APIRule	groupizeAND(APIRule self, APIRule r) = 0;
		virtual APIRule	groupizeOR(APIRule self, APIRule r) = 0;

		virtual void	acceptVisitor(IRulesVisitor * visitor) = 0;

		virtual bool	hasRepeater() { return false; };
	};
}

#include "Repeaters.h"

namespace SoParse
{
	inline APIRule	operator & (APIRule r1, APIRule r2)
	{
		if (!r1->hasRepeater())
			r1 = r1 << Repeat('-');
		if (!r2->hasRepeater())
			r2 = r2 << Repeat('-');

		return r1->groupizeAND(r1, r2);
	}

	inline APIRule	operator | (APIRule r1, APIRule r2)
	{
		if (!r1->hasRepeater())
			r1 = r1 << Repeat('-');
		if (!r2->hasRepeater())
			r2 = r2 << Repeat('-');

		return r1->groupizeOR(r1, r2);
	}
}

#endif  // !__SO_RULE_H__
