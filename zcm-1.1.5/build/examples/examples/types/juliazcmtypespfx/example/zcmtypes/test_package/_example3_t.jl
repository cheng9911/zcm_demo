# THIS IS AN AUTOMATICALLY GENERATED FILE.
# DO NOT MODIFY BY HAND!!
#
# Generated by zcm-gen
#

begin
@static if VERSION < v"0.7.0-"
    @assert endswith(string(current_module()), "juliazcmtypespfx.example.zcmtypes.test_package") "Only import this module through its parent"
else
    @assert endswith(string(@__MODULE__), "juliazcmtypespfx.example.zcmtypes.test_package") "Only import this module through its parent"
end

import ZCM

export example3_t
mutable struct example3_t <: ZCM.AbstractZcmType

    # **********************
    # Members
    # **********************

    packaged                      ::Bool


    function example3_t()

        self = new()

        # **********************
        # Members
        # **********************

        self.packaged = false

        return self
    end

end

const __example_zcmtypes_test_package_example3_t_hash = Ref(Int64(0))
function ZCM._get_hash_recursive(::Type{example3_t}, parents::Array{String})
    if __example_zcmtypes_test_package_example3_t_hash[] != 0; return __example_zcmtypes_test_package_example3_t_hash[]; end
    if "example_zcmtypes_test_package_example3_t" in parents; return 0; end
    hash::UInt64 = 0x85bbc2e90a49c894
    hash = (hash << 1) + ((hash >>> 63) & 0x01)
    __example_zcmtypes_test_package_example3_t_hash[] = reinterpret(Int64, hash)
    return __example_zcmtypes_test_package_example3_t_hash[]
end

function ZCM.getHash(::Type{example3_t})
    return ZCM._get_hash_recursive(example3_t, Array{String,1}())
end

function ZCM._encode_one(msg::example3_t, buf)
    write(buf, msg.packaged)
end

function ZCM.encode(msg::example3_t)
    buf = IOBuffer()
    write(buf, hton(ZCM.getHash(example3_t)))
    ZCM._encode_one(msg, buf)
    return ZCM.take!(buf);
end

function ZCM._decode_one(::Type{example3_t}, buf)
    msg = example3_t();
    msg.packaged = reinterpret(Bool, read(buf, 1))[1]
    return msg
end

function ZCM.decode(::Type{example3_t}, data::Vector{UInt8})
    buf = IOBuffer(data)
    if ntoh(reinterpret(Int64, read(buf, 8))[1]) != ZCM.getHash(example3_t)
        throw("Decode error")
    end
    return ZCM._decode_one(example3_t, buf)
end

function ZCM.fieldnames(::Type{example3_t})
    return (
        :packaged,
    )
end

function ZCM.constfieldnames(::Type{example3_t})
    return (
    )
end

end # `begin` block