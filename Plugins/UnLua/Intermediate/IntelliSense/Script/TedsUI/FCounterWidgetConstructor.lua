---Constructor for the counter widget. The counter widget accepts a "count"-query. The query will be periodically
---run and the result is written to a textbox widget after it's been formatted using LabelText. An example for
---LabelText is "{0} {0}|plural(one=MyCounter, other=MyCounters)" which will use "MyCounter" if there's exactly one
---entry found and otherwise "MyCounters".
---@class FCounterWidgetConstructor : FTypedElementWidgetConstructor
local FCounterWidgetConstructor = {}
