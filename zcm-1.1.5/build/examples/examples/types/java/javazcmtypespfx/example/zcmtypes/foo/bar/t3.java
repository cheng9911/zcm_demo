/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcmtypespfx.example.zcmtypes.foo.bar;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class t3 implements zcm.zcm.ZCMEncodable
{
    public javazcmtypespfx.example.zcmtypes.unpackaged_t x;
 
    public t3()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x1234567802743300L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcmtypespfx.example.zcmtypes.foo.bar.t3.class))
            return 0L;
 
        classes.add(javazcmtypespfx.example.zcmtypes.foo.bar.t3.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcmtypespfx.example.zcmtypes.unpackaged_t._hashRecursive(classes)
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
        this.x._encodeRecursive(outs);
 
    }
 
    public t3(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public t3(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcmtypespfx.example.zcmtypes.foo.bar.t3 _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcmtypespfx.example.zcmtypes.foo.bar.t3 o = new javazcmtypespfx.example.zcmtypes.foo.bar.t3();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.x = javazcmtypespfx.example.zcmtypes.unpackaged_t._decodeRecursiveFactory(ins);
 
    }
 
    public javazcmtypespfx.example.zcmtypes.foo.bar.t3 copy()
    {
        javazcmtypespfx.example.zcmtypes.foo.bar.t3 outobj = new javazcmtypespfx.example.zcmtypes.foo.bar.t3();
        outobj.x = this.x.copy();
 
        return outobj;
    }
 
}
