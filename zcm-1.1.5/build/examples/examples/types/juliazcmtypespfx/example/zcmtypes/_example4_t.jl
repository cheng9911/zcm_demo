# THIS IS AN AUTOMATICALLY GENERATED FILE.
# DO NOT MODIFY BY HAND!!
#
# Generated by zcm-gen
#

begin
@static if VERSION < v"0.7.0-"
    @assert endswith(string(current_module()), "juliazcmtypespfx.example.zcmtypes") "Only import this module through its parent"
else
    @assert endswith(string(@__MODULE__), "juliazcmtypespfx.example.zcmtypes") "Only import this module through its parent"
end

import ZCM

export example4_t
mutable struct example4_t <: ZCM.AbstractZcmType

    # **********************
    # Members
    # **********************

    timestamp                     ::Int64
    p                             ::ZCM.AbstractZcmType # juliazcmtypespfx.example.zcmtypes.test_package.example3_t


    function example4_t()

        self = new()

        # **********************
        # Members
        # **********************

        self.timestamp = 0
        self.p = __basemodule.example.zcmtypes.test_package.example3_t()

        return self
    end

end

const __example_zcmtypes_example4_t_hash = Ref(Int64(0))
function ZCM._get_hash_recursive(::Type{example4_t}, parents::Array{String})
    if __example_zcmtypes_example4_t_hash[] != 0; return __example_zcmtypes_example4_t_hash[]; end
    if "example_zcmtypes_example4_t" in parents; return 0; end
    newparents::Array{String} = [parents[:]; "example_zcmtypes_example4_t"::String];
    hash::UInt64 = 0x4541e0c6b43d6b19 + reinterpret(UInt64, ZCM._get_hash_recursive(__basemodule.example.zcmtypes.test_package.example3_t, newparents))
    hash = (hash << 1) + ((hash >>> 63) & 0x01)
    __example_zcmtypes_example4_t_hash[] = reinterpret(Int64, hash)
    return __example_zcmtypes_example4_t_hash[]
end

function ZCM.getHash(::Type{example4_t})
    return ZCM._get_hash_recursive(example4_t, Array{String,1}())
end

function ZCM._encode_one(msg::example4_t, buf)
    write(buf, hton(msg.timestamp))
    @assert isa(msg.p, __basemodule.example.zcmtypes.test_package.example3_t) "Msg of type `example.zcmtypes.example4_t` requires field `p` to be of type `example.zcmtypes.test_package.example3_t`"
    ZCM._encode_one(msg.p,buf)
end

function ZCM.encode(msg::example4_t)
    buf = IOBuffer()
    write(buf, hton(ZCM.getHash(example4_t)))
    ZCM._encode_one(msg, buf)
    return ZCM.take!(buf);
end

function ZCM._decode_one(::Type{example4_t}, buf)
    msg = example4_t();
    msg.timestamp = ntoh(reinterpret(Int64, read(buf, 8))[1])
    msg.p = ZCM._decode_one(__basemodule.example.zcmtypes.test_package.example3_t,buf)
    return msg
end

function ZCM.decode(::Type{example4_t}, data::Vector{UInt8})
    buf = IOBuffer(data)
    if ntoh(reinterpret(Int64, read(buf, 8))[1]) != ZCM.getHash(example4_t)
        throw("Decode error")
    end
    return ZCM._decode_one(example4_t, buf)
end

function ZCM.fieldnames(::Type{example4_t})
    return (
        :timestamp,
        :p,
    )
end

function ZCM.constfieldnames(::Type{example4_t})
    return (
    )
end

end # `begin` block