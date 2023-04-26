// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _example_zcmtypes_test_package_packaged_t_h
#define _example_zcmtypes_test_package_packaged_t_h

#ifdef __cplusplus
extern "C" {
#endif

#include "types/example/zcmtypes/test_package/example_zcmtypes_test_package_packaged2_t.h"
#define EXAMPLE_ZCMTYPES_TEST_PACKAGE_PACKAGED_T_IS_LITTLE_ENDIAN 0
typedef struct _example_zcmtypes_test_package_packaged_t example_zcmtypes_test_package_packaged_t;
struct _example_zcmtypes_test_package_packaged_t
{
    int8_t     packaged;
    example_zcmtypes_test_package_packaged2_t a;
};

/**
 * Create a deep copy of a example_zcmtypes_test_package_packaged_t.
 * When no longer needed, destroy it with example_zcmtypes_test_package_packaged_t_destroy()
 */
example_zcmtypes_test_package_packaged_t* example_zcmtypes_test_package_packaged_t_copy(const example_zcmtypes_test_package_packaged_t* to_copy);

/**
 * Destroy an instance of example_zcmtypes_test_package_packaged_t created by example_zcmtypes_test_package_packaged_t_copy()
 */
void example_zcmtypes_test_package_packaged_t_destroy(example_zcmtypes_test_package_packaged_t* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _example_zcmtypes_test_package_packaged_t_subscription_t example_zcmtypes_test_package_packaged_t_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * example_zcmtypes_test_package_packaged_t is received.
 */
typedef void(*example_zcmtypes_test_package_packaged_t_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const example_zcmtypes_test_package_packaged_t* msg, void* userdata);

/**
 * Publish a message of type example_zcmtypes_test_package_packaged_t using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int example_zcmtypes_test_package_packaged_t_publish(zcm_t* zcm, const char* channel, const example_zcmtypes_test_package_packaged_t* msg);

/**
 * Subscribe to messages of type example_zcmtypes_test_package_packaged_t using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to example_zcmtypes_test_package_packaged_t_unsubscribe.
 */
example_zcmtypes_test_package_packaged_t_subscription_t* example_zcmtypes_test_package_packaged_t_subscribe(zcm_t* zcm, const char* channel, example_zcmtypes_test_package_packaged_t_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by example_zcmtypes_test_package_packaged_t_subscribe()
 */
int example_zcmtypes_test_package_packaged_t_unsubscribe(zcm_t* zcm, example_zcmtypes_test_package_packaged_t_subscription_t* hid);
/**
 * Encode a message of type example_zcmtypes_test_package_packaged_t into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to example_zcmtypes_test_package_packaged_t_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int example_zcmtypes_test_package_packaged_t_encode(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_test_package_packaged_t* p);

/**
 * Decode a message of type example_zcmtypes_test_package_packaged_t from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with example_zcmtypes_test_package_packaged_t_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int example_zcmtypes_test_package_packaged_t_decode(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_test_package_packaged_t* msg);

/**
 * Release resources allocated by example_zcmtypes_test_package_packaged_t_decode()
 * @return 0
 */
int example_zcmtypes_test_package_packaged_t_decode_cleanup(example_zcmtypes_test_package_packaged_t* p);

/**
 * Check how many bytes are required to encode a message of type example_zcmtypes_test_package_packaged_t
 */
uint32_t example_zcmtypes_test_package_packaged_t_encoded_size(const example_zcmtypes_test_package_packaged_t* p);
uint32_t example_zcmtypes_test_package_packaged_t_struct_size(void);
uint32_t example_zcmtypes_test_package_packaged_t_num_fields(void);
int      example_zcmtypes_test_package_packaged_t_get_field(const example_zcmtypes_test_package_packaged_t* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* example_zcmtypes_test_package_packaged_t_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __example_zcmtypes_test_package_packaged_t_get_hash(void);
uint64_t __example_zcmtypes_test_package_packaged_t_hash_recursive(const __zcm_hash_ptr* p);
int      __example_zcmtypes_test_package_packaged_t_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const example_zcmtypes_test_package_packaged_t* p, uint32_t elements);
int      __example_zcmtypes_test_package_packaged_t_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, example_zcmtypes_test_package_packaged_t* p, uint32_t elements);
int      __example_zcmtypes_test_package_packaged_t_decode_array_cleanup(example_zcmtypes_test_package_packaged_t* p, uint32_t elements);
uint32_t __example_zcmtypes_test_package_packaged_t_encoded_array_size(const example_zcmtypes_test_package_packaged_t* p, uint32_t elements);
uint32_t __example_zcmtypes_test_package_packaged_t_clone_array(const example_zcmtypes_test_package_packaged_t* p, example_zcmtypes_test_package_packaged_t* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
