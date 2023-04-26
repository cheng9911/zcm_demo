/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcm.types;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class example4_t implements zcm.zcm.ZCMEncodable
{
    public long timestamp;
    public javazcm.types.test_package.example3_t p;
 
    public example4_t()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x4541e0c6b43d6b19L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcm.types.example4_t.class))
            return 0L;
 
        classes.add(javazcm.types.example4_t.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcm.types.test_package.example3_t._hashRecursive(classes)
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
        outs.writeLong(this.timestamp);
 
        this.p._encodeRecursive(outs);
 
    }
 
    public example4_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public example4_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcm.types.example4_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcm.types.example4_t o = new javazcm.types.example4_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.timestamp = ins.readLong();
 
        this.p = javazcm.types.test_package.example3_t._decodeRecursiveFactory(ins);
 
    }
 
    public javazcm.types.example4_t copy()
    {
        javazcm.types.example4_t outobj = new javazcm.types.example4_t();
        outobj.timestamp = this.timestamp;
 
        outobj.p = this.p.copy();
 
        return outobj;
    }
 
}

