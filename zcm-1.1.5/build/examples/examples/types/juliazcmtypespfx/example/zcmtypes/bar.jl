"""
THIS IS AN AUTOMATICALLY GENERATED FILE.
DO NOT MODIFY BY HAND!!
Generated by zcm-gen

This module should only be imported by it's parent, zcmtypes

"""
module bar
@static if VERSION < v"0.7.0-"
    parentmodule = module_parent
    pushfirst! = unshift!
    popfirst! = shift!
end

@static if VERSION < v"0.7.0-"
    @assert endswith(string(current_module()), "juliazcmtypespfx.example.zcmtypes.bar") "Only import this module through its parent"
    __basemodule = parentmodule(current_module()).__basemodule
else
    @assert endswith(string(@__MODULE__), "juliazcmtypespfx.example.zcmtypes.bar") "Only import this module through its parent"
    __basemodule = parentmodule(@__MODULE__).__basemodule
end

__modulepath = joinpath(dirname(@__FILE__), "bar")

function __init__()
end

try
    # Submodules

    # Types
    include(joinpath(__modulepath, "_t4.jl"))

finally
end

end # module bar;
export bar