/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: message.proto */

#ifndef PROTOBUF_C_message_2eproto__INCLUDED
#define PROTOBUF_C_message_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct SignMessage SignMessage;
typedef struct SpeedMessage SpeedMessage;
typedef struct SoundMessage SoundMessage;
typedef struct OverlimitSpeedMessage OverlimitSpeedMessage;


/* --- enums --- */


/* --- messages --- */

struct  SignMessage
{
  ProtobufCMessage base;
  uint32_t position_1;
  uint32_t position_2;
  uint32_t distance_2;
  uint32_t position_3;
  uint32_t distance_3;
};
#define SIGN_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sign_message__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  SpeedMessage
{
  ProtobufCMessage base;
  uint32_t speed;
};
#define SPEED_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&speed_message__descriptor) \
    , 0 }


struct  SoundMessage
{
  ProtobufCMessage base;
  uint32_t sound_id;
};
#define SOUND_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sound_message__descriptor) \
    , 0 }


struct  OverlimitSpeedMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean is_over_speed_limit;
};
#define OVERLIMIT_SPEED_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&overlimit_speed_message__descriptor) \
    , 0 }


/* SignMessage methods */
void   sign_message__init
                     (SignMessage         *message);
size_t sign_message__get_packed_size
                     (const SignMessage   *message);
size_t sign_message__pack
                     (const SignMessage   *message,
                      uint8_t             *out);
size_t sign_message__pack_to_buffer
                     (const SignMessage   *message,
                      ProtobufCBuffer     *buffer);
SignMessage *
       sign_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sign_message__free_unpacked
                     (SignMessage *message,
                      ProtobufCAllocator *allocator);
/* SpeedMessage methods */
void   speed_message__init
                     (SpeedMessage         *message);
size_t speed_message__get_packed_size
                     (const SpeedMessage   *message);
size_t speed_message__pack
                     (const SpeedMessage   *message,
                      uint8_t             *out);
size_t speed_message__pack_to_buffer
                     (const SpeedMessage   *message,
                      ProtobufCBuffer     *buffer);
SpeedMessage *
       speed_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   speed_message__free_unpacked
                     (SpeedMessage *message,
                      ProtobufCAllocator *allocator);
/* SoundMessage methods */
void   sound_message__init
                     (SoundMessage         *message);
size_t sound_message__get_packed_size
                     (const SoundMessage   *message);
size_t sound_message__pack
                     (const SoundMessage   *message,
                      uint8_t             *out);
size_t sound_message__pack_to_buffer
                     (const SoundMessage   *message,
                      ProtobufCBuffer     *buffer);
SoundMessage *
       sound_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sound_message__free_unpacked
                     (SoundMessage *message,
                      ProtobufCAllocator *allocator);
/* OverlimitSpeedMessage methods */
void   overlimit_speed_message__init
                     (OverlimitSpeedMessage         *message);
size_t overlimit_speed_message__get_packed_size
                     (const OverlimitSpeedMessage   *message);
size_t overlimit_speed_message__pack
                     (const OverlimitSpeedMessage   *message,
                      uint8_t             *out);
size_t overlimit_speed_message__pack_to_buffer
                     (const OverlimitSpeedMessage   *message,
                      ProtobufCBuffer     *buffer);
OverlimitSpeedMessage *
       overlimit_speed_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   overlimit_speed_message__free_unpacked
                     (OverlimitSpeedMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SignMessage_Closure)
                 (const SignMessage *message,
                  void *closure_data);
typedef void (*SpeedMessage_Closure)
                 (const SpeedMessage *message,
                  void *closure_data);
typedef void (*SoundMessage_Closure)
                 (const SoundMessage *message,
                  void *closure_data);
typedef void (*OverlimitSpeedMessage_Closure)
                 (const OverlimitSpeedMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor sign_message__descriptor;
extern const ProtobufCMessageDescriptor speed_message__descriptor;
extern const ProtobufCMessageDescriptor sound_message__descriptor;
extern const ProtobufCMessageDescriptor overlimit_speed_message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_message_2eproto__INCLUDED */
