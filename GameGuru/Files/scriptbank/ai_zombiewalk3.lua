-- AI : Zombie Behavior
module_combatmelee = require "scriptbank\\ai\\module_combatmelee"
function ai_zombiewalk3_init(e)
 module_combatmelee.init(e,ai_combattype_bashmelee)
end
function ai_zombiewalk3_main(e)
 module_combatmelee.main(e,ai_combattype_bashmelee,ai_movetype_usespeed)
end
