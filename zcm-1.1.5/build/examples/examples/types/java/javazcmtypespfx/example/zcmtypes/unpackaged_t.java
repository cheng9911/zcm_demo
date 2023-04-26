/* ZCM type definition class file
 * This file was automatically generated by zcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package javazcmtypespfx.example.zcmtypes;
 
import java.io.*;
import java.util.*;
import zcm.zcm.*;
 
public final class unpackaged_t implements zcm.zcm.ZCMEncodable
{
    public long x;
 
    public unpackaged_t()
    {
    }
 
    public static final long ZCM_FINGERPRINT;
    public static final long ZCM_FINGERPRINT_BASE = 0xc6ee746a491f75dbL;
 
    public static final boolean IS_LITTLE_ENDIAN = false;
    static {
        ZCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(javazcmtypespfx.example.zcmtypes.unpackaged_t.class))
            return 0L;
 
        classes.add(javazcmtypespfx.example.zcmtypes.unpackaged_t.class);
        long hash = ZCM_FINGERPRINT_BASE
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
        outs.writeLong(this.x);
 
    }
 
    public unpackaged_t(byte[] data) throws IOException
    {
        this(new ZCMDataInputStream(data));
    }
 
    public unpackaged_t(ZCMDataInputStream ins) throws IOException
    {
        if (ins.readLong() != ZCM_FINGERPRINT)
            throw new IOException("ZCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static javazcmtypespfx.example.zcmtypes.unpackaged_t _decodeRecursiveFactory(ZCMDataInputStream ins) throws IOException
    {
        javazcmtypespfx.example.zcmtypes.unpackaged_t o = new javazcmtypespfx.example.zcmtypes.unpackaged_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(ZCMDataInputStream ins) throws IOException
    {
        this.x = ins.readLong();
 
    }
 
    public javazcmtypespfx.example.zcmtypes.unpackaged_t copy()
    {
        javazcmtypespfx.example.zcmtypes.unpackaged_t outobj = new javazcmtypespfx.example.zcmtypes.unpackaged_t();
        outobj.x = this.x;
 
        return outobj;
    }
 
}

