require "./libcowgol.lua"

local args = {...}
local midcodetab = args[2]
local archpat = args[3]

local midcodes = loadmidcodes(midcodetab)
