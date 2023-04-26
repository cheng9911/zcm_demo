// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _demo_t_h
#define _demo_t_h

#ifdef __cplusplus
extern "C" {
#endif

#define DEMO_T_IS_LITTLE_ENDIAN 0
typedef struct _demo_t demo_t;
struct _demo_t
{
    int64_t    timestamp;
    char*      name;
};

/**
 * Create a deep copy of a demo_t.
 * When no longer needed, destroy it with demo_t_destroy()
 */
demo_t* demo_t_copy(const demo_t* to_copy);

/**
 * Destroy an instance of demo_t created by demo_t_copy()
 */
void demo_t_destroy(demo_t* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _demo_t_subscription_t demo_t_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * demo_t is received.
 */
typedef void(*demo_t_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const demo_t* msg, void* userdata);

/**
 * Publish a message of type demo_t using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int demo_t_publish(zcm_t* zcm, const char* channel, const demo_t* msg);

/**
 * Subscribe to messages of type demo_t using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to demo_t_unsubscribe.
 */
demo_t_subscription_t* demo_t_subscribe(zcm_t* zcm, const char* channel, demo_t_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by demo_t_subscribe()
 */
int demo_t_unsubscribe(zcm_t* zcm, demo_t_subscription_t* hid);
/**
 * Encode a message of type demo_t into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to demo_t_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int demo_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const demo_t* p);

/**
 * Decode a message of type demo_t from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with demo_t_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int demo_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, demo_t* msg);

/**
 * Release resources allocated by demo_t_decode()
 * @return 0
 */
int demo_t_decode_cleanup(demo_t* p);

/**
 * Check how many bytes are required to encode a message of type demo_t
 */
uint32_t demo_t_encoded_size(const demo_t* p);
uint32_t demo_t_struct_size(void);
uint32_t demo_t_num_fields(void);
int      demo_t_get_field(const demo_t* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* demo_t_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __demo_t_get_hash(void);
uint64_t __demo_t_hash_recursive(const __zcm_hash_ptr* p);
int      __demo_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const demo_t* p, uint32_t elements);
int      __demo_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, demo_t* p, uint32_t elements);
int      __demo_t_decode_array_cleanup(demo_t* p, uint32_t elements);
uint32_t __demo_t_encoded_array_size(const demo_t* p, uint32_t elements);
uint32_t __demo_t_clone_array(const demo_t* p, demo_t* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif