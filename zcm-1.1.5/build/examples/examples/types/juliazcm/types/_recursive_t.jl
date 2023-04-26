# THIS IS AN AUTOMATICALLY GENERATED FILE.
# DO NOT MODIFY BY HAND!!
#
# Generated by zcm-gen
#

begin
@static if VERSION < v"0.7.0-"
    @assert endswith(string(current_module()), "juliazcm.types") "Only import this module through its parent"
else
    @assert endswith(string(@__MODULE__), "juliazcm.types") "Only import this module through its parent"
end

import ZCM

export recursive_t
mutable struct recursive_t <: ZCM.AbstractZcmType

    # **********************
    # Members
    # **********************

    e                             ::ZCM.AbstractZcmType # juliazcm.types.example_t


    function recursive_t()

        self = new()

        # **********************
        # Members
        # **********************

        self.e = __basemodule.types.example_t()

        return self
    end

end

const __recursive_t_hash = Ref(Int64(0))
function ZCM._get_hash_recursive(::Type{recursive_t}, parents::Array{String})
    if __recursive_t_hash[] != 0; return __recursive_t_hash[]; end
    if "recursive_t" in parents; return 0; end
    newparents::Array{String} = [parents[:]; "recursive_t"::String];
    hash::UInt64 = 0x24dfa672b5d5c433 + reinterpret(UInt64, ZCM._get_hash_recursive(__basemodule.types.example_t, newparents))
    hash = (hash << 1) + ((hash >>> 63) & 0x01)
    __recursive_t_hash[] = reinterpret(Int64, hash)
    return __recursive_t_hash[]
end

function ZCM.getHash(::Type{recursive_t})
    return ZCM._get_hash_recursive(recursive_t, Array{String,1}())
end

function ZCM._encode_one(msg::recursive_t, buf)
    @assert isa(msg.e, __basemodule.types.example_t) "Msg of type `recursive_t` requires field `e` to be of type `example_t`"
    ZCM._encode_one(msg.e,buf)
end

function ZCM.encode(msg::recursive_t)
    buf = IOBuffer()
    write(buf, hton(ZCM.getHash(recursive_t)))
    ZCM._encode_one(msg, buf)
    return ZCM.take!(buf);
end

function ZCM._decode_one(::Type{recursive_t}, buf)
    msg = recursive_t();
    msg.e = ZCM._decode_one(__basemodule.types.example_t,buf)
    return msg
end

function ZCM.decode(::Type{recursive_t}, data::Vector{UInt8})
    buf = IOBuffer(data)
    if ntoh(reinterpret(Int64, read(buf, 8))[1]) != ZCM.getHash(recursive_t)
        throw("Decode error")
    end
    return ZCM._decode_one(recursive_t, buf)
end

function ZCM.fieldnames(::Type{recursive_t})
    return (
        :e,
    )
end

function ZCM.constfieldnames(::Type{recursive_t})
    return (
    )
end

end # `begin` block
