/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcmtypespfx.example.zcmtypes;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class recursive_t implements zcm.zcm.ZCMEncodable
{
    public javazcmtypespfx.example.zcmtypes.example_t e;
 
    public recursive_t()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0x24dfa672b5d5c433L;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcmtypespfx.example.zcmtypes.recursive_t.class))
            return 0L;
 
        classes.add(javazcmtypespfx.example.zcmtypes.recursive_t.class);
        long hash = ZCM_FINGERPRINT_BASE
             + javazcmtypespfx.example.zcmtypes.example_t._hashRecursive(classes)
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
        this.e._encodeRecursive(outs);
 
    }
 
    public recursive_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public recursive_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcmtypespfx.example.zcmtypes.recursive_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcmtypespfx.example.zcmtypes.recursive_t o = new javazcmtypespfx.example.zcmtypes.recursive_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.e = javazcmtypespfx.example.zcmtypes.example_t._decodeRecursiveFactory(ins);
 
    }
 
    public javazcmtypespfx.example.zcmtypes.recursive_t copy()
    {
        javazcmtypespfx.example.zcmtypes.recursive_t outobj = new javazcmtypespfx.example.zcmtypes.recursive_t();
        outobj.e = this.e.copy();
 
        return outobj;
    }
 
}
