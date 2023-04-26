/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcm.types;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class example_t implements zcm.zcm.ZCMEncodable
{
    public long timestamp;
    public double position[];
    public double orientation[];
    public int num_ranges;
    public short ranges[];
    public String name;
    public boolean enabled;
    public int nExamples1;
    public int nExamples2;
    public javazcm.types.example_t subExamples[][];
    public String subStrings[][];
    public byte bitfield1;
    public byte bitfield2[];
 
    public example_t()
    {
        position = new double[3];
        orientation = new double[4];
        bitfield2 = new byte[4];
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x1939f4d104c8d2f8L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    public static final byte test_const_8_max_hex = (byte) 0xff;
    public static final short test_const_16_max_hex = (short) 0xffff;
    public static final int test_const_32_max_hex = 0xffffffff;
    public static final long test_const_64_max_hex = 0xffffffffffffffffL;
    public static final float test_const_float = 1e-20f;
    public static final double test_const_double = 12.1e200;
    public static final String test_const_string = "example";

    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcm.types.example_t.class))
            return 0L;
 
        classes.add(javazcm.types.example_t.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcm.types.example_t._hashRecursive(classes)
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>>63)&1);
    }
 
    public void encode(ZCMDataOutputStream outs) throws IOException
    {
        outs.writeLong(ZCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(ZCMDataOutputStream outs) throws IOException
    {
        char[] __strbuf = null;
        outs.writeLong(this.timestamp);
 
        for (int a = 0; a < 3; ++a) {
            outs.writeDouble(this.position[a]);
        }
 
        for (int a = 0; a < 4; ++a) {
            outs.writeDouble(this.orientation[a]);
        }
 
        outs.writeInt(this.num_ranges);
 
        for (int a = 0; a < this.num_ranges; ++a) {
            outs.writeShort(this.ranges[a]);
        }
 
        __strbuf = new char[this.name.length()]; this.name.getChars(0, this.name.length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; ++_i) outs.write(__strbuf[_i]); outs.writeByte(0);
 
        outs.writeByte( this.enabled ? 1 : 0);
 
        outs.writeInt(this.nExamples1);
 
        outs.writeInt(this.nExamples2);
 
        for (int a = 0; a < this.nExamples1; ++a) {
            for (int b = 0; b < this.nExamples2; ++b) {
                this.subExamples[a][b]._encodeRecursive(outs);
            }
        }
 
        for (int a = 0; a < this.nExamples1; ++a) {
            for (int b = 0; b < this.nExamples2; ++b) {
                __strbuf = new char[this.subStrings[a][b].length()]; this.subStrings[a][b].getChars(0, this.subStrings[a][b].length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; ++_i) outs.write(__strbuf[_i]); outs.writeByte(0);
            }
        }
 
        // Start of bitfield 0

        outs.writeBits(this.bitfield1, 2);
 
        for (int a = 0; a < 4; ++a) {
            outs.writeBits(this.bitfield2[a], 3);
        }
 
        outs.resetBits();

        // End of bitfield 0
    }
 
    public example_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public example_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcm.types.example_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcm.types.example_t o = new javazcm.types.example_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        char[] __strbuf = null;
        this.timestamp = ins.readLong();
 
        this.position = new double[(int) 3];
        for (int a = 0; a < 3; ++a) {
            this.position[a] = ins.readDouble();
        }
 
        this.orientation = new double[(int) 4];
        for (int a = 0; a < 4; ++a) {
            this.orientation[a] = ins.readDouble();
        }
 
        this.num_ranges = ins.readInt();
 
        this.ranges = new short[(int) num_ranges];
        for (int a = 0; a < this.num_ranges; ++a) {
            this.ranges[a] = ins.readShort();
        }
 
        __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; ++_i) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.name = new String(__strbuf);
 
        this.enabled = ins.readByte()!=0;
 
        this.nExamples1 = ins.readInt();
 
        this.nExamples2 = ins.readInt();
 
        this.subExamples = new javazcm.types.example_t[(int) nExamples1][(int) nExamples2];
        for (int a = 0; a < this.nExamples1; ++a) {
            for (int b = 0; b < this.nExamples2; ++b) {
                this.subExamples[a][b] = javazcm.types.example_t._decodeRecursiveFactory(ins);
            }
        }
 
        this.subStrings = new String[(int) nExamples1][(int) nExamples2];
        for (int a = 0; a < this.nExamples1; ++a) {
            for (int b = 0; b < this.nExamples2; ++b) {
                __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; ++_i) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.subStrings[a][b] = new String(__strbuf);
            }
        }
 
        // Start of bitfield 0

        this.bitfield1 = ins.readByteBits(2, false);
 
        this.bitfield2 = new byte[(int) 4];
        for (int a = 0; a < 4; ++a) {
            this.bitfield2[a] = ins.readByteBits(3, false);
        }
 
        ins.resetBits();

        // End of bitfield 0
    }
 
    public javazcm.types.example_t copy()
    {
        javazcm.types.example_t outobj = new javazcm.types.example_t();
        outobj.timestamp = this.timestamp;
 
        outobj.position = new double[(int) 3];
        System.arraycopy(this.position, 0, outobj.position, 0, 3); 
        outobj.orientation = new double[(int) 4];
        System.arraycopy(this.orientation, 0, outobj.orientation, 0, 4); 
        outobj.num_ranges = this.num_ranges;
 
        outobj.ranges = new short[(int) num_ranges];
        if (this.num_ranges > 0)
            System.arraycopy(this.ranges, 0, outobj.ranges, 0, this.num_ranges); 
        outobj.name = this.name;
 
        outobj.enabled = this.enabled;
 
        outobj.nExamples1 = this.nExamples1;
 
        outobj.nExamples2 = this.nExamples2;
 
        outobj.subExamples = new javazcm.types.example_t[(int) nExamples1][(int) nExamples2];
        for (int a = 0; a < this.nExamples1; ++a) {
            for (int b = 0; b < this.nExamples2; ++b) {
                outobj.subExamples[a][b] = this.subExamples[a][b].copy();
            }
        }
 
        outobj.subStrings = new String[(int) nExamples1][(int) nExamples2];
        for (int a = 0; a < this.nExamples1; ++a) {
            if (this.nExamples2 > 0)
                System.arraycopy(this.subStrings[a], 0, outobj.subStrings[a], 0, this.nExamples2);        }
 
        outobj.bitfield1 = this.bitfield1;
 
        outobj.bitfield2 = new byte[(int) 4];
        System.arraycopy(this.bitfield2, 0, outobj.bitfield2, 0, 4); 
        return outobj;
    }
 
}

