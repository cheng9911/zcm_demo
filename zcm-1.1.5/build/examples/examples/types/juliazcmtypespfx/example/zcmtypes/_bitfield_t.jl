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

export bitfield_t
mutable struct bitfield_t <: ZCM.AbstractZcmType

    # **********************
    # Members
    # **********************

    field1                        ::Int8
    field2                        ::Array{Int8,2}
    field3                        ::Int16
    field4                        ::Int16
    field5                        ::Int8
    field6                        ::Int8
    field7                        ::Int8
    field8_dim1                   ::Int8
    field8_dim2                   ::Int8
    field8                        ::Array{Int8,2}
    field9                        ::Int32
    field10                       ::Int64
    field11                       ::UInt8
    field12                       ::Array{UInt8,4}
    field13                       ::Int8
    field14                       ::Int8
    field15                       ::Int8
    field16                       ::Int8
    field17                       ::Int8
    field18                       ::UInt8
    field19                       ::UInt8
    field20                       ::UInt8
    field21                       ::Int8
    field22                       ::UInt8
    field23                       ::UInt8
    field24                       ::UInt8
    filler1                       ::Int8
    field25                       ::UInt8
    field26                       ::UInt8
    field27                       ::Int8
    field28                       ::Int8
    field29                       ::Int16
    field30                       ::Int16
    field31                       ::Int32
    field32                       ::Int32
    field33                       ::Int64
    field34                       ::Int64


    # **********************
    # Constants
    # **********************

    IS_LITTLE_ENDIAN              ::Bool
    FIELD22_TEST                  ::UInt8
    FIELD23_TEST                  ::UInt8
    FIELD24_TEST                  ::UInt8
    SIGN_TEST_0                   ::Int8
    SIGN_TEST_1                   ::Int8
    SIGN_TEST_2                   ::Int8
    SIGN_TEST_3                   ::Int8
    SIGN_TEST_4                   ::Int16
    SIGN_TEST_5                   ::Int16
    SIGN_TEST_6                   ::Int16
    SIGN_TEST_7                   ::Int16
    SIGN_TEST_8                   ::Int32
    SIGN_TEST_9                   ::Int32
    SIGN_TEST_10                  ::Int32
    SIGN_TEST_11                  ::Int32
    SIGN_TEST_12                  ::Int64
    SIGN_TEST_13                  ::Int64
    SIGN_TEST_14                  ::Int64
    SIGN_TEST_15                  ::Int64
    SIGN_TEST_16                  ::Int64
    SIGN_TEST_17                  ::UInt8
    SIGN_TEST_18                  ::UInt8
    SIGN_TEST_19                  ::Int8
    SIGN_TEST_20                  ::Int8
    SIGN_TEST_21                  ::Int16
    SIGN_TEST_22                  ::Int16
    SIGN_TEST_23                  ::Int32
    SIGN_TEST_24                  ::Int32
    SIGN_TEST_25                  ::Int64
    SIGN_TEST_26                  ::Int64
    SIGN_TEST_27                  ::Int64
    SIGN_TEST_28                  ::UInt8
    SIGN_TEST_29                  ::UInt8
    SIGN_TEST_30                  ::Int8
    SIGN_TEST_31                  ::Int8
    SIGN_TEST_32                  ::Int8
    SIGN_TEST_33                  ::Int8
    SIGN_TEST_34                  ::Int16
    SIGN_TEST_35                  ::Int16
    SIGN_TEST_36                  ::Int16
    SIGN_TEST_37                  ::Int16
    SIGN_TEST_38                  ::Int32
    SIGN_TEST_39                  ::Int32
    SIGN_TEST_40                  ::Int32
    SIGN_TEST_41                  ::Int32
    SIGN_TEST_42                  ::Int64
    SIGN_TEST_43                  ::Int64
    SIGN_TEST_44                  ::Int64
    SIGN_TEST_45                  ::Int64


    function bitfield_t()

        self = new()

        # **********************
        # Members
        # **********************

        self.field1 = 0
        self.field2 = [ 0 for dim0=1:2, dim1=1:4 ]
        self.field3 = 0
        self.field4 = 0
        self.field5 = 0
        self.field6 = 0
        self.field7 = 0
        self.field8_dim1 = 0
        self.field8_dim2 = 0
        self.field8 = [ 0 for dim0=1:self.field8_dim1, dim1=1:self.field8_dim2 ]
        self.field9 = 0
        self.field10 = 0
        self.field11 = 0
        self.field12 = [ 0 for dim0=1:3, dim1=1:2, dim2=1:2, dim3=1:2 ]
        self.field13 = 0
        self.field14 = 0
        self.field15 = 0
        self.field16 = 0
        self.field17 = 0
        self.field18 = 0
        self.field19 = 0
        self.field20 = 0
        self.field21 = 0
        self.field22 = 0
        self.field23 = 0
        self.field24 = 0
        self.filler1 = 0
        self.field25 = 0
        self.field26 = 0
        self.field27 = 0
        self.field28 = 0
        self.field29 = 0
        self.field30 = 0
        self.field31 = 0
        self.field32 = 0
        self.field33 = 0
        self.field34 = 0

        # **********************
        # Constants
        # **********************

        self.IS_LITTLE_ENDIAN = false
        self.FIELD22_TEST = reinterpret(UInt8,0xff)
        self.FIELD23_TEST = 3
        self.FIELD24_TEST = reinterpret(UInt8,0x07)
        self.SIGN_TEST_0 = reinterpret(Int8,0x0f)
        self.SIGN_TEST_1 = reinterpret(Int8,0xf0)
        self.SIGN_TEST_2 = reinterpret(Int8,0x7f)
        self.SIGN_TEST_3 = reinterpret(Int8,0x80)
        self.SIGN_TEST_4 = reinterpret(Int16,0x1fff)
        self.SIGN_TEST_5 = reinterpret(Int16,0xe000)
        self.SIGN_TEST_6 = reinterpret(Int16,0x7fff)
        self.SIGN_TEST_7 = reinterpret(Int16,0x8000)
        self.SIGN_TEST_8 = reinterpret(Int32,0x01ffffff)
        self.SIGN_TEST_9 = reinterpret(Int32,0xfe000000)
        self.SIGN_TEST_10 = reinterpret(Int32,0x7fffffff)
        self.SIGN_TEST_11 = reinterpret(Int32,0x80000000)
        self.SIGN_TEST_12 = reinterpret(Int64,0xffffffffffffffff)
        self.SIGN_TEST_13 = reinterpret(Int64,0x00ffffffffffffff)
        self.SIGN_TEST_14 = reinterpret(Int64,0xff00000000000000)
        self.SIGN_TEST_15 = reinterpret(Int64,0x7fffffffffffffff)
        self.SIGN_TEST_16 = reinterpret(Int64,0x8000000000000000)
        self.SIGN_TEST_17 = reinterpret(UInt8,0x07)
        self.SIGN_TEST_18 = reinterpret(UInt8,0x7f)
        self.SIGN_TEST_19 = reinterpret(Int8,0x07)
        self.SIGN_TEST_20 = reinterpret(Int8,0x7f)
        self.SIGN_TEST_21 = reinterpret(Int16,0x0007)
        self.SIGN_TEST_22 = reinterpret(Int16,0x7fff)
        self.SIGN_TEST_23 = reinterpret(Int32,0x00000007)
        self.SIGN_TEST_24 = reinterpret(Int32,0x7fffffff)
        self.SIGN_TEST_25 = reinterpret(Int64,0x0000000000000001)
        self.SIGN_TEST_26 = reinterpret(Int64,0x0000000000000007)
        self.SIGN_TEST_27 = reinterpret(Int64,0x7fffffffffffffff)
        self.SIGN_TEST_28 = reinterpret(UInt8,0x7f)
        self.SIGN_TEST_29 = reinterpret(UInt8,0xff)
        self.SIGN_TEST_30 = reinterpret(Int8,0x7f)
        self.SIGN_TEST_31 = reinterpret(Int8,0xff)
        self.SIGN_TEST_32 = 127
        self.SIGN_TEST_33 = -1
        self.SIGN_TEST_34 = reinterpret(Int16,0x7fff)
        self.SIGN_TEST_35 = reinterpret(Int16,0xffff)
        self.SIGN_TEST_36 = 32767
        self.SIGN_TEST_37 = -1
        self.SIGN_TEST_38 = reinterpret(Int32,0x7fffffff)
        self.SIGN_TEST_39 = reinterpret(Int32,0xffffffff)
        self.SIGN_TEST_40 = 2147483647
        self.SIGN_TEST_41 = -1
        self.SIGN_TEST_42 = reinterpret(Int64,0x7fffffffffffffff)
        self.SIGN_TEST_43 = reinterpret(Int64,0xffffffffffffffff)
        self.SIGN_TEST_44 = 9223372036854775807
        self.SIGN_TEST_45 = -1

        return self
    end

end

const __example_zcmtypes_bitfield_t_hash = Ref(Int64(0))
function ZCM._get_hash_recursive(::Type{bitfield_t}, parents::Array{String})
    if __example_zcmtypes_bitfield_t_hash[] != 0; return __example_zcmtypes_bitfield_t_hash[]; end
    if "example_zcmtypes_bitfield_t" in parents; return 0; end
    hash::UInt64 = 0x4e73ecb0ea215bc2
    hash = (hash << 1) + ((hash >>> 63) & 0x01)
    __example_zcmtypes_bitfield_t_hash[] = reinterpret(Int64, hash)
    return __example_zcmtypes_bitfield_t_hash[]
end

function ZCM.getHash(::Type{bitfield_t})
    return ZCM._get_hash_recursive(bitfield_t, Array{String,1}())
end

function ZCM._encode_one(msg::bitfield_t, buf)

    # Start of bitfield 0
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field1, 2, byte_in_progress, offset_bit)
    @assert size(msg.field2,1)==2 "Msg of type `example.zcmtypes.bitfield_t` requires field `field2` dimension `1` to be size `2`"
    @assert size(msg.field2,2)==4 "Msg of type `example.zcmtypes.bitfield_t` requires field `field2` dimension `2` to be size `4`"
    for i0=1:2
        for i1=1:4
            byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field2[i0,i1], 1, byte_in_progress, offset_bit)
        end
    end
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field3, 4, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field4, 3, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 0

    write(buf, hton(msg.field5))

    # Start of bitfield 1
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field6, 2, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field7, 3, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field8_dim1, 4, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 1

    write(buf, hton(msg.field8_dim2))

    # Start of bitfield 2
    offset_bit = 0
    byte_in_progress = UInt8(0)
    @assert size(msg.field8,1)==msg.field8_dim1 "Msg of type `example.zcmtypes.bitfield_t` requires field `field8` dimension `1` to be size `msg.field8_dim1`"
    @assert size(msg.field8,2)==msg.field8_dim2 "Msg of type `example.zcmtypes.bitfield_t` requires field `field8` dimension `2` to be size `msg.field8_dim2`"
    for i0=1:msg.field8_dim1
        for i1=1:msg.field8_dim2
            byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field8[i0,i1], 3, byte_in_progress, offset_bit)
        end
    end
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field9, 28, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field10, 55, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field11, 2, byte_in_progress, offset_bit)
    @assert size(msg.field12,1)==3 "Msg of type `example.zcmtypes.bitfield_t` requires field `field12` dimension `1` to be size `3`"
    @assert size(msg.field12,2)==2 "Msg of type `example.zcmtypes.bitfield_t` requires field `field12` dimension `2` to be size `2`"
    @assert size(msg.field12,3)==2 "Msg of type `example.zcmtypes.bitfield_t` requires field `field12` dimension `3` to be size `2`"
    @assert size(msg.field12,4)==2 "Msg of type `example.zcmtypes.bitfield_t` requires field `field12` dimension `4` to be size `2`"
    for i0=1:3
        for i1=1:2
            for i2=1:2
                for i3=1:2
                    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field12[i0,i1,i2,i3], 3, byte_in_progress, offset_bit)
                end
            end
        end
    end
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 2

    write(buf, hton(msg.field13))

    # Start of bitfield 3
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field14, 4, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field15, 7, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field16, 7, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 3

    write(buf, hton(msg.field17))

    # Start of bitfield 4
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field18, 4, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field19, 7, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field20, 7, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 4

    write(buf, hton(msg.field21))

    # Start of bitfield 5
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field22, 8, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field23, 3, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field24, 3, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 5

    write(buf, hton(msg.filler1))

    # Start of bitfield 6
    offset_bit = 0
    byte_in_progress = UInt8(0)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field25, 2, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field26, 8, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field27, 2, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field28, 7, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field29, 2, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field30, 15, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field31, 4, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field32, 31, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field33, 4, byte_in_progress, offset_bit)
    byte_in_progress, offset_bit = ZCM.write_bits(buf, msg.field34, 63, byte_in_progress, offset_bit)
    if (offset_bit != 0)
        write(buf, byte_in_progress)
    end
    # End of bitfield 6

end

function ZCM.encode(msg::bitfield_t)
    buf = IOBuffer()
    write(buf, hton(ZCM.getHash(bitfield_t)))
    ZCM._encode_one(msg, buf)
    return ZCM.take!(buf);
end

function ZCM._decode_one(::Type{bitfield_t}, buf)
    msg = bitfield_t();

    # Start of bitfield 0
    offset_bit = 0
    offset_bit, msg.field1 = ZCM.read_bits(Int8, buf, 2, offset_bit, true)
    @static if VERSION < v"0.7.0-"
        msg.field2 = Array{Int8, 2}(2, 4)
    else
        msg.field2 = Array{Int8, 2}(undef, 2, 4)
    end
    for i0=1:2
        for i1=1:4
            offset_bit, msg.field2[i0,i1] = ZCM.read_bits(Int8, buf, 1, offset_bit, true)
        end
    end
    offset_bit, msg.field3 = ZCM.read_bits(Int16, buf, 4, offset_bit, true)
    offset_bit, msg.field4 = ZCM.read_bits(Int16, buf, 3, offset_bit, true)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 0

    msg.field5 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 1
    offset_bit = 0
    offset_bit, msg.field6 = ZCM.read_bits(Int8, buf, 2, offset_bit, true)
    offset_bit, msg.field7 = ZCM.read_bits(Int8, buf, 3, offset_bit, true)
    offset_bit, msg.field8_dim1 = ZCM.read_bits(Int8, buf, 4, offset_bit, true)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 1

    msg.field8_dim2 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 2
    offset_bit = 0
    @static if VERSION < v"0.7.0-"
        msg.field8 = Array{Int8, 2}(msg.field8_dim1, msg.field8_dim2)
    else
        msg.field8 = Array{Int8, 2}(undef, msg.field8_dim1, msg.field8_dim2)
    end
    for i0=1:msg.field8_dim1
        for i1=1:msg.field8_dim2
            offset_bit, msg.field8[i0,i1] = ZCM.read_bits(Int8, buf, 3, offset_bit, true)
        end
    end
    offset_bit, msg.field9 = ZCM.read_bits(Int32, buf, 28, offset_bit, true)
    offset_bit, msg.field10 = ZCM.read_bits(Int64, buf, 55, offset_bit, true)
    offset_bit, msg.field11 = ZCM.read_bits(UInt8, buf, 2, offset_bit, false)
    @static if VERSION < v"0.7.0-"
        msg.field12 = Array{UInt8, 4}(3, 2, 2, 2)
    else
        msg.field12 = Array{UInt8, 4}(undef, 3, 2, 2, 2)
    end
    for i0=1:3
        for i1=1:2
            for i2=1:2
                for i3=1:2
                    offset_bit, msg.field12[i0,i1,i2,i3] = ZCM.read_bits(UInt8, buf, 3, offset_bit, false)
                end
            end
        end
    end
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 2

    msg.field13 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 3
    offset_bit = 0
    offset_bit, msg.field14 = ZCM.read_bits(Int8, buf, 4, offset_bit, true)
    offset_bit, msg.field15 = ZCM.read_bits(Int8, buf, 7, offset_bit, true)
    offset_bit, msg.field16 = ZCM.read_bits(Int8, buf, 7, offset_bit, true)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 3

    msg.field17 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 4
    offset_bit = 0
    offset_bit, msg.field18 = ZCM.read_bits(UInt8, buf, 4, offset_bit, false)
    offset_bit, msg.field19 = ZCM.read_bits(UInt8, buf, 7, offset_bit, false)
    offset_bit, msg.field20 = ZCM.read_bits(UInt8, buf, 7, offset_bit, false)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 4

    msg.field21 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 5
    offset_bit = 0
    offset_bit, msg.field22 = ZCM.read_bits(UInt8, buf, 8, offset_bit, false)
    offset_bit, msg.field23 = ZCM.read_bits(UInt8, buf, 3, offset_bit, false)
    offset_bit, msg.field24 = ZCM.read_bits(UInt8, buf, 3, offset_bit, false)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 5

    msg.filler1 = reinterpret(Int8, read(buf, 1))[1]

    # Start of bitfield 6
    offset_bit = 0
    offset_bit, msg.field25 = ZCM.read_bits(UInt8, buf, 2, offset_bit, false)
    offset_bit, msg.field26 = ZCM.read_bits(UInt8, buf, 8, offset_bit, false)
    offset_bit, msg.field27 = ZCM.read_bits(Int8, buf, 2, offset_bit, false)
    offset_bit, msg.field28 = ZCM.read_bits(Int8, buf, 7, offset_bit, false)
    offset_bit, msg.field29 = ZCM.read_bits(Int16, buf, 2, offset_bit, false)
    offset_bit, msg.field30 = ZCM.read_bits(Int16, buf, 15, offset_bit, false)
    offset_bit, msg.field31 = ZCM.read_bits(Int32, buf, 4, offset_bit, false)
    offset_bit, msg.field32 = ZCM.read_bits(Int32, buf, 31, offset_bit, false)
    offset_bit, msg.field33 = ZCM.read_bits(Int64, buf, 4, offset_bit, false)
    offset_bit, msg.field34 = ZCM.read_bits(Int64, buf, 63, offset_bit, false)
    if (offset_bit != 0)
        read(buf, 1)
    end
    # End of bitfield 6

    return msg
end

function ZCM.decode(::Type{bitfield_t}, data::Vector{UInt8})
    buf = IOBuffer(data)
    if ntoh(reinterpret(Int64, read(buf, 8))[1]) != ZCM.getHash(bitfield_t)
        throw("Decode error")
    end
    return ZCM._decode_one(bitfield_t, buf)
end

function ZCM.fieldnames(::Type{bitfield_t})
    return (
        :field1,
        :field2,
        :field3,
        :field4,
        :field5,
        :field6,
        :field7,
        :field8_dim1,
        :field8_dim2,
        :field8,
        :field9,
        :field10,
        :field11,
        :field12,
        :field13,
        :field14,
        :field15,
        :field16,
        :field17,
        :field18,
        :field19,
        :field20,
        :field21,
        :field22,
        :field23,
        :field24,
        :filler1,
        :field25,
        :field26,
        :field27,
        :field28,
        :field29,
        :field30,
        :field31,
        :field32,
        :field33,
        :field34,
    )
end

function ZCM.constfieldnames(::Type{bitfield_t})
    return (
        :FIELD22_TEST,
        :FIELD23_TEST,
        :FIELD24_TEST,
        :SIGN_TEST_0,
        :SIGN_TEST_1,
        :SIGN_TEST_2,
        :SIGN_TEST_3,
        :SIGN_TEST_4,
        :SIGN_TEST_5,
        :SIGN_TEST_6,
        :SIGN_TEST_7,
        :SIGN_TEST_8,
        :SIGN_TEST_9,
        :SIGN_TEST_10,
        :SIGN_TEST_11,
        :SIGN_TEST_12,
        :SIGN_TEST_13,
        :SIGN_TEST_14,
        :SIGN_TEST_15,
        :SIGN_TEST_16,
        :SIGN_TEST_17,
        :SIGN_TEST_18,
        :SIGN_TEST_19,
        :SIGN_TEST_20,
        :SIGN_TEST_21,
        :SIGN_TEST_22,
        :SIGN_TEST_23,
        :SIGN_TEST_24,
        :SIGN_TEST_25,
        :SIGN_TEST_26,
        :SIGN_TEST_27,
        :SIGN_TEST_28,
        :SIGN_TEST_29,
        :SIGN_TEST_30,
        :SIGN_TEST_31,
        :SIGN_TEST_32,
        :SIGN_TEST_33,
        :SIGN_TEST_34,
        :SIGN_TEST_35,
        :SIGN_TEST_36,
        :SIGN_TEST_37,
        :SIGN_TEST_38,
        :SIGN_TEST_39,
        :SIGN_TEST_40,
        :SIGN_TEST_41,
        :SIGN_TEST_42,
        :SIGN_TEST_43,
        :SIGN_TEST_44,
        :SIGN_TEST_45,
    )
end

end # `begin` block
