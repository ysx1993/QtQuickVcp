// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace pb {

namespace {

const ::google::protobuf::EnumDescriptor* ValueType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* HalPinDirection_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* HalParamDirection_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ObjectType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* RCS_STATUS_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgOrigin_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgLevel_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* OriginDetail_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* OriginType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Severity_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* StatusType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ReplyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ServiceType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ServiceAPI_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* ContainerType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* OriginIndex_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* TermConditionType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* CanonDirection_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* InputType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* WaitType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_types_2eproto() {
  protobuf_AddDesc_types_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "types.proto");
  GOOGLE_CHECK(file != NULL);
  ValueType_descriptor_ = file->enum_type(0);
  HalPinDirection_descriptor_ = file->enum_type(1);
  HalParamDirection_descriptor_ = file->enum_type(2);
  ObjectType_descriptor_ = file->enum_type(3);
  RCS_STATUS_descriptor_ = file->enum_type(4);
  MsgOrigin_descriptor_ = file->enum_type(5);
  MsgLevel_descriptor_ = file->enum_type(6);
  OriginDetail_descriptor_ = file->enum_type(7);
  OriginType_descriptor_ = file->enum_type(8);
  Severity_descriptor_ = file->enum_type(9);
  StatusType_descriptor_ = file->enum_type(10);
  ReplyType_descriptor_ = file->enum_type(11);
  ServiceType_descriptor_ = file->enum_type(12);
  ServiceAPI_descriptor_ = file->enum_type(13);
  ContainerType_descriptor_ = file->enum_type(14);
  OriginIndex_descriptor_ = file->enum_type(15);
  TermConditionType_descriptor_ = file->enum_type(16);
  CanonDirection_descriptor_ = file->enum_type(17);
  InputType_descriptor_ = file->enum_type(18);
  WaitType_descriptor_ = file->enum_type(19);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_types_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_types_2eproto() {
}

void protobuf_AddDesc_types_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013types.proto\022\002pb*\335\001\n\tValueType\022\013\n\007HAL_B"
    "IT\020\001\022\r\n\tHAL_FLOAT\020\002\022\013\n\007HAL_S32\020\003\022\013\n\007HAL_"
    "U32\020\004\022\n\n\006STRING\020\005\022\t\n\005BYTES\020\006\022\t\n\005INT32\020\024\022"
    "\n\n\006UINT32\020\036\022\t\n\005INT64\020(\022\n\n\006UINT64\0202\022\n\n\006DO"
    "UBLE\020<\022\010\n\004BOOL\020P\022\r\n\tCARTESIAN\020d\022\024\n\020LEGAC"
    "Y_CARTESIAN\020n\022\010\n\004POSE\020x\022\020\n\013LEGACY_POSE\020\202"
    "\001*6\n\017HalPinDirection\022\n\n\006HAL_IN\020\020\022\013\n\007HAL_"
    "OUT\020 \022\n\n\006HAL_IO\0200*,\n\021HalParamDirection\022\n"
    "\n\006HAL_RO\020@\022\013\n\006HAL_RW\020\300\001*\344\002\n\nObjectType\022\013"
    "\n\007HAL_PIN\020\001\022\016\n\nHAL_SIGNAL\020\002\022\r\n\tHAL_PARAM"
    "\020\003\022\016\n\nHAL_THREAD\020\004\022\r\n\tHAL_FUNCT\020\005\022\r\n\tHAL"
    "_ALIAS\020\006\022\017\n\013HAL_COMP_RT\020\007\022\021\n\rHAL_COMP_US"
    "ER\020\010\022\023\n\017HAL_COMP_REMOTE\020\t\022\014\n\010HAL_RING\020\n\022"
    "\r\n\tHAL_GROUP\020\013\022\025\n\021HAL_MEMBER_SIGNAL\020\014\022\024\n"
    "\020HAL_MEMBER_GROUP\020\r\022\022\n\016HAL_MEMBER_PIN\020\016\022"
    "\017\n\013RING_RECORD\020\017\022\017\n\013RING_STREAM\020\020\022\t\n\005VAL"
    "UE\020\024\022\014\n\010INSTANCE\020\025\022\016\n\nORIGINATOR\020\026\022\017\n\013NA"
    "MED_VALUE\020\031\022\t\n\005ERROR\020\036*l\n\nRCS_STATUS\022!\n\024"
    "UNINITIALIZED_STATUS\020\377\377\377\377\377\377\377\377\377\001\022\014\n\010RCS_D"
    "ONE\020\001\022\014\n\010RCS_EXEC\020\002\022\r\n\tRCS_ERROR\020\003\022\020\n\014RC"
    "S_RECEIVED\020\004*:\n\tMsgOrigin\022\016\n\nMSG_KERNEL\020"
    "\000\022\016\n\nMSG_RTUSER\020\001\022\r\n\tMSG_ULAPI\020\002*\177\n\010MsgL"
    "evel\022\022\n\016RTAPI_MSG_NONE\020\000\022\021\n\rRTAPI_MSG_ER"
    "R\020\001\022\022\n\016RTAPI_MSG_WARN\020\002\022\022\n\016RTAPI_MSG_INF"
    "O\020\003\022\021\n\rRTAPI_MSG_DBG\020\004\022\021\n\rRTAPI_MSG_ALL\020"
    "\005*\240\001\n\014OriginDetail\022\017\n\013UNIX_SIGNAL\020\n\022\025\n\021I"
    "NSTANCE_SHUTDOWN\020\024\022\016\n\nZMQ_SOCKET\020F\022\r\n\tNM"
    "L_LAYER\020P\022\r\n\tRCS_LAYER\020Z\022\r\n\tCMS_LAYER\020d\022"
    "\014\n\010IP_LAYER\020n\022\r\n\tTCP_LAYER\020x\022\016\n\tPGM_LAYE"
    "R\020\202\001*\245\001\n\nOriginType\022\013\n\007PROCESS\020\n\022\017\n\013USER"
    "_THREAD\020\024\022\r\n\tRT_THREAD\020\036\022\r\n\tCOMPONENT\020(\022"
    "\023\n\017THREAD_FUNCTION\0202\022\022\n\016COMPONENT_INIT\020<"
    "\022\022\n\016COMPONENT_EXIT\020F\022\t\n\005GROUP\020P\022\007\n\003PIN\020Z"
    "\022\n\n\006SIGNAL\020d*:\n\010Severity\022\023\n\017S_INFORMATIO"
    "NAL\020\001\022\r\n\tS_WARNING\020\002\022\n\n\006S_FAIL\020\004*D\n\nStat"
    "usType\022\014\n\010ENQUEUED\020\001\022\016\n\nPROCESSING\020\002\022\014\n\010"
    "COMPLETE\020\003\022\n\n\006FAILED\020\004*Y\n\tReplyType\022\010\n\004N"
    "ONE\020\000\022\020\n\014ON_RECEPTION\020\001\022\r\n\tON_QUEUED\020\002\022\021"
    "\n\rON_COMPLETION\020\004\022\016\n\tALL_STEPS\020\377\001*\326\002\n\013Se"
    "rviceType\022\016\n\nST_LOGGING\020\001\022\r\n\tST_CONFIG\020\002"
    "\022\014\n\010ST_REDIS\020\003\022\013\n\007ST_HTTP\020\004\022\014\n\010ST_HTTPS\020"
    "\005\022\020\n\014ST_WEBSOCKET\020\006\022\021\n\rST_WEBSOCKETS\020\007\022\024"
    "\n\020ST_RTAPI_COMMAND\020\010\022\023\n\017ST_STP_HALGROUP\020"
    "\t\022\023\n\017ST_STP_HALRCOMP\020\n\022\021\n\rST_STP_INTERP\020"
    "\013\022\017\n\013ST_STP_TASK\020\014\022\023\n\017ST_HAL_RCOMMAND\020\r\022"
    "\023\n\017ST_TASK_COMMAND\020\016\022\025\n\021ST_INTERP_COMMAN"
    "D\020\017\022\031\n\025ST_MESSAGEBUS_COMMAND\020\020\022\032\n\026ST_MES"
    "SAGEBUS_RESPONSE\020\021*1\n\nServiceAPI\022\023\n\017SA_Z"
    "MQ_PROTOBUF\020\001\022\016\n\nSA_WS_JSON\020\002*\214@\n\rContai"
    "nerType\022\r\n\tMT_MOTCMD\020\003\022\020\n\014MT_MOTSTATUS\020\004"
    "\022\024\n\020MT_LEGACY_MOTCMD\020\005\022\027\n\023MT_LEGACY_MOTS"
    "TATUS\020\006\022\n\n\006MT_WOU\020\007\022\020\n\014MT_HALUPDATE\020\010\022\024\n"
    "\020MT_RTAPI_MESSAGE\020\t\022\022\n\016MT_LOG_MESSAGE\020\n\022"
    "\r\n\tMT_SYSLOG\020\022\022\021\n\rMT_LEGACY_NML\020\023\022\027\n\023MT_"
    "LEGACY_MOTCONFIG\020\024\022\026\n\022MT_STP_UPDATE_FULL"
    "\020\032\022\021\n\rMT_STP_UPDATE\020\013\022\022\n\016MT_STP_NOGROUP\020"
    "\033\022\014\n\010MT_OFFER\020\036\022\024\n\020MT_CONFIRM_OFFER\020#\022\026\n"
    "\022MT_DISPLAY_MESSAGE\020(\022\017\n\013MT_SHUTDOWN\020-\022\027"
    "\n\023MT_CONFIRM_SHUTDOWN\0202\022\014\n\010MT_ASCII\020d\022\016\n"
    "\nMT_UNICODE\020e\022\014\n\010MT_GCODE\020f\022\r\n\tMT_PYTHON"
    "\020g\022\r\n\tMT_PICKLE\020h\022\n\n\006MT_TCL\020i\022\n\n\006MT_XML\020"
    "j\022\013\n\007MT_JSON\020k\022\013\n\007MT_JPEG\020l\022\n\n\006MT_PNG\020m\022"
    "\013\n\007MT_TIFF\020n\022\021\n\rMT_POSTSCRIPT\020o\022\n\n\006MT_SV"
    "G\020p\022\014\n\007MT_PING\020\322\001\022\030\n\023MT_PING_ACKNOWLEDGE"
    "\020\327\001\022\016\n\tMT_REJECT\020\334\001\022\014\n\007MT_DONE\020\360\001\022\027\n\022MT_"
    "SERVICE_REQUEST\020\372\001\022\034\n\027MT_SERVICE_ANNOUNC"
    "EMENT\020\373\001\022\025\n\020MT_SERVICE_PROBE\020\374\001\022!\n\034MT_ME"
    "SSAGEBUS_NO_DESTINATION\020\377\001\022\025\n\020MT_HALRCOM"
    "P_BIND\020\200\002\022\035\n\030MT_HALRCOMP_BIND_CONFIRM\020\201\002"
    "\022\034\n\027MT_HALRCOMP_BIND_REJECT\020\202\002\022\024\n\017MT_HAL"
    "RCOMP_SET\020\203\002\022\033\n\026MT_HALRCOMP_SET_REJECT\020\204"
    "\002\022\024\n\017MT_HALRCOMP_ACK\020\207\002\022\027\n\022MT_HALRCOMMAN"
    "D_SET\020\211\002\022\036\n\031MT_HALRCOMMAND_SET_REJECT\020\212\002"
    "\022\027\n\022MT_HALRCOMMAND_GET\020\213\002\022\036\n\031MT_HALRCOMM"
    "AND_GET_REJECT\020\214\002\022\032\n\025MT_HALRCOMMAND_CREA"
    "TE\020\215\002\022!\n\034MT_HALRCOMMAND_CREATE_REJECT\020\216\002"
    "\022\032\n\025MT_HALRCOMMAND_DELETE\020\217\002\022!\n\034MT_HALRC"
    "OMMAND_DELETE_REJECT\020\220\002\022\027\n\022MT_HALRCOMMAN"
    "D_ACK\020\221\002\022\031\n\024MT_HALRCOMMAND_ERROR\020\222\002\022\034\n\027M"
    "T_HALRCOMMAND_DESCRIBE\020\224\002\022\034\n\027MT_HALRCOMP"
    "_FULL_UPDATE\020\240\002\022#\n\036MT_HALRCOMP_INCREMENT"
    "AL_UPDATE\020\241\002\022\026\n\021MT_HALRCOMP_ERROR\020\242\002\022\025\n\020"
    "MT_HALGROUP_BIND\020\246\002\022\035\n\030MT_HALGROUP_BIND_"
    "CONFIRM\020\247\002\022\034\n\027MT_HALGROUP_BIND_REJECT\020\250\002"
    "\022\034\n\027MT_HALGROUP_FULL_UPDATE\020\251\002\022#\n\036MT_HAL"
    "GROUP_INCREMENTAL_UPDATE\020\252\002\022\026\n\021MT_HALGRO"
    "UP_ERROR\020\253\002\022\026\n\021MT_RTAPI_APP_EXIT\020\254\002\022\026\n\021M"
    "T_RTAPI_APP_PING\020\255\002\022\030\n\023MT_RTAPI_APP_LOAD"
    "RT\020\256\002\022\025\n\020MT_RTAPI_APP_LOG\020\257\002\022\032\n\025MT_RTAPI"
    "_APP_UNLOADRT\020\261\002\022\031\n\024MT_RTAPI_APP_NEWINST"
    "\020\262\002\022\033\n\026MT_RTAPI_APP_NEWTHREAD\020\263\002\022\033\n\026MT_R"
    "TAPI_APP_DELTHREAD\020\264\002\022\032\n\025MT_RTAPI_APP_CA"
    "LLFUNC\020\265\002\022\027\n\022MT_RTAPI_APP_REPLY\020\266\002\022\031\n\024MT"
    "_LIST_APPLICATIONS\020\336\002\022\034\n\027MT_DESCRIBE_APP"
    "LICATION\020\337\002\022\034\n\027MT_RETRIEVE_APPLICATION\020\340"
    "\002\022\032\n\025MT_APPLICATION_DETAIL\020\341\002\022\r\n\010MT_ERRO"
    "R\020\350\002\022\022\n\rMT_TASK_REPLY\020\220\003\022\025\n\020MT_TICKET_UP"
    "DATE\020\221\003\022\025\n\020MT_CREDIT_UPDATE\020\302\003\022\024\n\017MT_EMC"
    "MOT_LOWER\020\350\007\022\024\n\017MT_EMCMOT_UPPER\020\314\010\022\024\n\017MT"
    "_EMCMOT_ABORT\020\351\007\022\031\n\024MT_EMCMOT_AXIS_ABORT"
    "\020\352\007\022\025\n\020MT_EMCMOT_ENABLE\020\353\007\022\026\n\021MT_EMCMOT_"
    "DISABLE\020\354\007\022\037\n\032MT_EMCMOT_ENABLE_AMPLIFIER"
    "\020\355\007\022 \n\033MT_EMCMOT_DISABLE_AMPLIFIER\020\356\007\022\036\n"
    "\031MT_EMCMOT_ENABLE_WATCHDOG\020\357\007\022\037\n\032MT_EMCM"
    "OT_DISABLE_WATCHDOG\020\360\007\022\035\n\030MT_EMCMOT_ACTI"
    "VATE_JOINT\020\361\007\022\037\n\032MT_EMCMOT_DEACTIVATE_JO"
    "INT\020\362\007\022\024\n\017MT_EMCMOT_PAUSE\020\363\007\022\025\n\020MT_EMCMO"
    "T_RESUME\020\364\007\022\023\n\016MT_EMCMOT_STEP\020\365\007\022\023\n\016MT_E"
    "MCMOT_FREE\020\366\007\022\024\n\017MT_EMCMOT_COORD\020\367\007\022\025\n\020M"
    "T_EMCMOT_TELEOP\020\370\007\022\034\n\027MT_EMCMOT_SPINDLE_"
    "SCALE\020\371\007\022\030\n\023MT_EMCMOT_SS_ENABLE\020\372\007\022\031\n\024MT"
    "_EMCMOT_FEED_SCALE\020\373\007\022\030\n\023MT_EMCMOT_FS_EN"
    "ABLE\020\374\007\022\030\n\023MT_EMCMOT_FH_ENABLE\020\375\007\022\030\n\023MT_"
    "EMCMOT_AF_ENABLE\020\376\007\022\036\n\031MT_EMCMOT_OVERRID"
    "E_LIMITS\020\377\007\022\023\n\016MT_EMCMOT_HOME\020\200\010\022\025\n\020MT_E"
    "MCMOT_UNHOME\020\201\010\022\027\n\022MT_EMCMOT_JOG_CONT\020\202\010"
    "\022\027\n\022MT_EMCMOT_JOG_INCR\020\203\010\022\026\n\021MT_EMCMOT_J"
    "OG_ABS\020\204\010\022\027\n\022MT_EMCMOT_SET_LINE\020\205\010\022\031\n\024MT"
    "_EMCMOT_SET_CIRCLE\020\206\010\022 \n\033MT_EMCMOT_SET_T"
    "ELEOP_VECTOR\020\207\010\022 \n\033MT_EMCMOT_CLEAR_PROBE"
    "_FLAGS\020\210\010\022\024\n\017MT_EMCMOT_PROBE\020\211\010\022\030\n\023MT_EM"
    "CMOT_RIGID_TAP\020\212\010\022\"\n\035MT_EMCMOT_SET_POSIT"
    "ION_LIMITS\020\213\010\022\033\n\026MT_EMCMOT_SET_BACKLASH\020"
    "\214\010\022\035\n\030MT_EMCMOT_SET_MIN_FERROR\020\215\010\022\035\n\030MT_"
    "EMCMOT_SET_MAX_FERROR\020\216\010\022\026\n\021MT_EMCMOT_SE"
    "T_VEL\020\217\010\022\034\n\027MT_EMCMOT_SET_VEL_LIMIT\020\220\010\022\""
    "\n\035MT_EMCMOT_SET_JOINT_VEL_LIMIT\020\221\010\022\"\n\035MT"
    "_EMCMOT_SET_JOINT_ACC_LIMIT\020\222\010\022\026\n\021MT_EMC"
    "MOT_SET_ACC\020\223\010\022\034\n\027MT_EMCMOT_SET_TERM_CON"
    "D\020\224\010\022\033\n\026MT_EMCMOT_SET_NUM_AXES\020\225\010\022\035\n\030MT_"
    "EMCMOT_SET_WORLD_HOME\020\226\010\022 \n\033MT_EMCMOT_SE"
    "T_HOMING_PARAMS\020\227\010\022\030\n\023MT_EMCMOT_SET_DEBU"
    "G\020\230\010\022\027\n\022MT_EMCMOT_SET_DOUT\020\231\010\022\027\n\022MT_EMCM"
    "OT_SET_AOUT\020\232\010\022\036\n\031MT_EMCMOT_SET_SPINDLES"
    "YNC\020\233\010\022\031\n\024MT_EMCMOT_SPINDLE_ON\020\234\010\022\032\n\025MT_"
    "EMCMOT_SPINDLE_OFF\020\235\010\022\037\n\032MT_EMCMOT_SPIND"
    "LE_INCREASE\020\236\010\022\037\n\032MT_EMCMOT_SPINDLE_DECR"
    "EASE\020\237\010\022#\n\036MT_EMCMOT_SPINDLE_BRAKE_ENGAG"
    "E\020\240\010\022$\n\037MT_EMCMOT_SPINDLE_BRAKE_RELEASE\020"
    "\241\010\022\037\n\032MT_EMCMOT_SET_MOTOR_OFFSET\020\242\010\022\035\n\030M"
    "T_EMCMOT_SET_JOINT_COMP\020\243\010\022\031\n\024MT_EMCMOT_"
    "SET_OFFSET\020\244\010\022\031\n\024MT_EMCMOT_COMMAND_OK\020\245\010"
    "\022&\n!MT_EMCMOT_COMMAND_UNKNOWN_COMMAND\020\246\010"
    "\022&\n!MT_EMCMOT_COMMAND_INVALID_COMMAND\020\247\010"
    "\022%\n MT_EMCMOT_COMMAND_INVALID_PARAMS\020\250\010\022"
    "\037\n\032MT_EMCMOT_COMMAND_BAD_EXEC\020\251\010\022\036\n\031MT_E"
    "MCMOT_MOTION_DISABLED\020\252\010\022\032\n\025MT_EMCMOT_MO"
    "TION_FREE\020\253\010\022\034\n\027MT_EMCMOT_MOTION_TELEOP\020"
    "\254\010\022\033\n\026MT_EMCMOT_MOTION_COORD\020\255\010\022\031\n\024MT_EM"
    "CMOT_JOINT_FLAG\020\256\010\022\032\n\025MT_EMCMOT_MOTION_F"
    "LAG\020\257\010\022\024\n\017MT_PRU_FIRMWARE\020\200\020\022\032\n\025MT_MESA_"
    "5I20_FIRMWARE\020\270\027\022\014\n\007MT_BLOB\020\240\037\022\r\n\010MT_TES"
    "T1\020\211\'\022\r\n\010MT_TEST2\020\212\'\022\r\n\010MT_TEST3\020\213\'\022\025\n\020M"
    "T_EMC_NML_LOWER\020\220N\022\025\n\020MT_EMC_NML_UPPER\020\310"
    "e\022\032\n\025MT_EMC_OPERATOR_ERROR\020\233N\022\031\n\024MT_EMC_"
    "OPERATOR_TEXT\020\234N\022\034\n\027MT_EMC_OPERATOR_DISP"
    "LAY\020\235N\022\020\n\013MT_EMC_NULL\020\245N\022\025\n\020MT_EMC_SET_D"
    "EBUG\020\246N\022\026\n\021MT_EMC_SYSTEM_CMD\020\256N\022\031\n\024MT_EM"
    "C_AXIS_SET_AXIS\020\365N\022\032\n\025MT_EMC_AXIS_SET_UN"
    "ITS\020\366N\022\'\n\"MT_EMC_AXIS_SET_MIN_POSITION_L"
    "IMIT\020\373N\022\'\n\"MT_EMC_AXIS_SET_MAX_POSITION_"
    "LIMIT\020\374N\022\035\n\030MT_EMC_TOOL_START_CHANGE\020\326\010\022"
    "\034\n\027MT_EMC_EXEC_PLUGIN_CALL\020\330\010\022\032\n\025MT_EMC_"
    "IO_PLUGIN_CALL\020\331\010\022\033\n\026MT_EMC_AXIS_SET_FER"
    "ROR\020\377N\022\"\n\035MT_EMC_AXIS_SET_HOMING_PARAMS\020"
    "\200O\022\037\n\032MT_EMC_AXIS_SET_MIN_FERROR\020\203O\022!\n\034M"
    "T_EMC_AXIS_SET_MAX_VELOCITY\020\204O\022\025\n\020MT_EMC"
    "_AXIS_INIT\020\206O\022\025\n\020MT_EMC_AXIS_HALT\020\207O\022\026\n\021"
    "MT_EMC_AXIS_ABORT\020\210O\022\027\n\022MT_EMC_AXIS_ENAB"
    "LE\020\211O\022\030\n\023MT_EMC_AXIS_DISABLE\020\212O\022\025\n\020MT_EM"
    "C_AXIS_HOME\020\213O\022\027\n\022MT_EMC_AXIS_UNHOME\020\227O\022"
    "\024\n\017MT_EMC_AXIS_JOG\020\214O\022\031\n\024MT_EMC_AXIS_INC"
    "R_JOG\020\215O\022\030\n\023MT_EMC_AXIS_ABS_JOG\020\216O\022\031\n\024MT"
    "_EMC_AXIS_ACTIVATE\020\217O\022\033\n\026MT_EMC_AXIS_DEA"
    "CTIVATE\020\220O\022 \n\033MT_EMC_AXIS_OVERRIDE_LIMIT"
    "S\020\221O\022\032\n\025MT_EMC_AXIS_LOAD_COMP\020\223O\022\035\n\030MT_E"
    "MC_AXIS_SET_BACKLASH\020\226O\022\025\n\020MT_EMC_AXIS_S"
    "TAT\020\327O\022\031\n\024MT_EMC_TRAJ_SET_AXES\020\331O\022\032\n\025MT_"
    "EMC_TRAJ_SET_UNITS\020\332O\022\037\n\032MT_EMC_TRAJ_SET"
    "_CYCLE_TIME\020\333O\022\031\n\024MT_EMC_TRAJ_SET_MODE\020\334"
    "O\022\035\n\030MT_EMC_TRAJ_SET_VELOCITY\020\335O\022!\n\034MT_E"
    "MC_TRAJ_SET_ACCELERATION\020\336O\022!\n\034MT_EMC_TR"
    "AJ_SET_MAX_VELOCITY\020\337O\022%\n MT_EMC_TRAJ_SE"
    "T_MAX_ACCELERATION\020\340O\022\032\n\025MT_EMC_TRAJ_SET"
    "_SCALE\020\341O\022\036\n\031MT_EMC_TRAJ_SET_MOTION_ID\020\342"
    "O\022\025\n\020MT_EMC_TRAJ_INIT\020\343O\022\025\n\020MT_EMC_TRAJ_"
    "HALT\020\344O\022\027\n\022MT_EMC_TRAJ_ENABLE\020\345O\022\030\n\023MT_E"
    "MC_TRAJ_DISABLE\020\346O\022\026\n\021MT_EMC_TRAJ_ABORT\020"
    "\347O\022\026\n\021MT_EMC_TRAJ_PAUSE\020\350O\022\025\n\020MT_EMC_TRA"
    "J_STEP\020\351O\022\027\n\022MT_EMC_TRAJ_RESUME\020\352O\022\026\n\021MT"
    "_EMC_TRAJ_DELAY\020\353O\022\034\n\027MT_EMC_TRAJ_LINEAR"
    "_MOVE\020\354O\022\036\n\031MT_EMC_TRAJ_CIRCULAR_MOVE\020\355O"
    "\022\036\n\031MT_EMC_TRAJ_SET_TERM_COND\020\356O\022\033\n\026MT_E"
    "MC_TRAJ_SET_OFFSET\020\357O\022\030\n\023MT_EMC_TRAJ_SET"
    "_G5X\020\360O\022\031\n\024MT_EMC_TRAJ_SET_HOME\020\361O\022\035\n\030MT"
    "_EMC_TRAJ_SET_ROTATION\020\362O\022\030\n\023MT_EMC_TRAJ"
    "_SET_G92\020\363O\022)\n$MT_EMC_TRAJ_CLEAR_PROBE_T"
    "RIPPED_FLAG\020\364O\022\026\n\021MT_EMC_TRAJ_PROBE\020\365O\022\""
    "\n\035MT_EMC_TRAJ_SET_TELEOP_ENABLE\020\366O\022\"\n\035MT"
    "_EMC_TRAJ_SET_TELEOP_VECTOR\020\367O\022 \n\033MT_EMC"
    "_TRAJ_SET_SPINDLESYNC\020\370O\022\"\n\035MT_EMC_TRAJ_"
    "SET_SPINDLE_SCALE\020\371O\022\036\n\031MT_EMC_TRAJ_SET_"
    "FO_ENABLE\020\372O\022\036\n\031MT_EMC_TRAJ_SET_SO_ENABL"
    "E\020\373O\022\036\n\031MT_EMC_TRAJ_SET_FH_ENABLE\020\374O\022\032\n\025"
    "MT_EMC_TRAJ_RIGID_TAP\020\375O\022\025\n\020MT_EMC_TRAJ_"
    "STAT\020\273P\022\027\n\022MT_EMC_MOTION_INIT\020\275P\022\027\n\022MT_E"
    "MC_MOTION_HALT\020\276P\022\030\n\023MT_EMC_MOTION_ABORT"
    "\020\277P\022\033\n\026MT_EMC_MOTION_SET_AOUT\020\300P\022\033\n\026MT_E"
    "MC_MOTION_SET_DOUT\020\301P\022\033\n\026MT_EMC_MOTION_A"
    "DAPTIVE\020\302P\022\032\n\025MT_EMC_SPINDLE_ORIENT\020\315P\022("
    "\n#MT_EMC_SPINDLE_WAIT_ORIENT_COMPLETE\020\316P"
    "\022\027\n\022MT_EMC_MOTION_STAT\020\237Q\022\025\n\020MT_EMC_TASK"
    "_INIT\020\205R\022\025\n\020MT_EMC_TASK_HALT\020\206R\022\026\n\021MT_EM"
    "C_TASK_ABORT\020\207R\022\031\n\024MT_EMC_TASK_SET_MODE\020"
    "\210R\022\032\n\025MT_EMC_TASK_SET_STATE\020\211R\022\032\n\025MT_EMC"
    "_TASK_PLAN_OPEN\020\212R\022\031\n\024MT_EMC_TASK_PLAN_R"
    "UN\020\213R\022\032\n\025MT_EMC_TASK_PLAN_READ\020\214R\022\035\n\030MT_"
    "EMC_TASK_PLAN_EXECUTE\020\215R\022\033\n\026MT_EMC_TASK_"
    "PLAN_PAUSE\020\216R\022\032\n\025MT_EMC_TASK_PLAN_STEP\020\217"
    "R\022\034\n\027MT_EMC_TASK_PLAN_RESUME\020\220R\022\031\n\024MT_EM"
    "C_TASK_PLAN_END\020\221R\022\033\n\026MT_EMC_TASK_PLAN_C"
    "LOSE\020\222R\022\032\n\025MT_EMC_TASK_PLAN_INIT\020\223R\022\033\n\026M"
    "T_EMC_TASK_PLAN_SYNCH\020\224R\022\'\n\"MT_EMC_TASK_"
    "PLAN_SET_OPTIONAL_STOP\020\225R\022&\n!MT_EMC_TASK"
    "_PLAN_SET_BLOCK_DELETE\020\226R\022#\n\036MT_EMC_TASK"
    "_PLAN_OPTIONAL_STOP\020\227R\022\033\n\026MT_EMC_TASK_PL"
    "AN_RESET\020\230R\022\033\n\026MT_EMC_TASK_PLAN_REPLY\020\242R"
    "\022\025\n\020MT_EMC_TASK_STAT\020\347R\022\025\n\020MT_EMC_TOOL_I"
    "NIT\020\335V\022\025\n\020MT_EMC_TOOL_HALT\020\336V\022\026\n\021MT_EMC_"
    "TOOL_ABORT\020\337V\022\030\n\023MT_EMC_TOOL_PREPARE\020\340V\022"
    "\025\n\020MT_EMC_TOOL_LOAD\020\341V\022\027\n\022MT_EMC_TOOL_UN"
    "LOAD\020\342V\022 \n\033MT_EMC_TOOL_LOAD_TOOL_TABLE\020\343"
    "V\022\033\n\026MT_EMC_TOOL_SET_OFFSET\020\344V\022\033\n\026MT_EMC"
    "_TOOL_SET_NUMBER\020\345V\022\025\n\020MT_EMC_TOOL_STAT\020"
    "\277W\022\030\n\023MT_EMC_AUX_ESTOP_ON\020\306W\022\031\n\024MT_EMC_A"
    "UX_ESTOP_OFF\020\307W\022\033\n\026MT_EMC_AUX_ESTOP_RESE"
    "T\020\310W\022\032\n\025MT_EMC_AUX_INPUT_WAIT\020\311W\022\024\n\017MT_E"
    "MC_AUX_STAT\020\243X\022\026\n\021MT_EMC_SPINDLE_ON\020\250X\022\027"
    "\n\022MT_EMC_SPINDLE_OFF\020\251X\022\034\n\027MT_EMC_SPINDL"
    "E_INCREASE\020\255X\022\034\n\027MT_EMC_SPINDLE_DECREASE"
    "\020\256X\022\034\n\027MT_EMC_SPINDLE_CONSTANT\020\257X\022!\n\034MT_"
    "EMC_SPINDLE_BRAKE_RELEASE\020\260X\022 \n\033MT_EMC_S"
    "PINDLE_BRAKE_ENGAGE\020\261X\022\031\n\024MT_EMC_SPINDLE"
    "_SPEED\020\264X\022\030\n\023MT_EMC_SPINDLE_STAT\020\207Y\022\033\n\026M"
    "T_EMC_COOLANT_MIST_ON\020\214Y\022\034\n\027MT_EMC_COOLA"
    "NT_MIST_OFF\020\215Y\022\034\n\027MT_EMC_COOLANT_FLOOD_O"
    "N\020\216Y\022\035\n\030MT_EMC_COOLANT_FLOOD_OFF\020\217Y\022\030\n\023M"
    "T_EMC_COOLANT_STAT\020\353Y\022\023\n\016MT_EMC_LUBE_ON\020"
    "\360Y\022\024\n\017MT_EMC_LUBE_OFF\020\361Y\022\025\n\020MT_EMC_LUBE_"
    "STAT\020\317Z\022\023\n\016MT_EMC_IO_INIT\020\321Z\022\023\n\016MT_EMC_I"
    "O_HALT\020\322Z\022\024\n\017MT_EMC_IO_ABORT\020\323Z\022\035\n\030MT_EM"
    "C_IO_SET_CYCLE_TIME\020\324Z\022\023\n\016MT_EMC_IO_STAT"
    "\020\263[\022\020\n\013MT_EMC_INIT\020\375\\\022\020\n\013MT_EMC_HALT\020\376\\\022"
    "\021\n\014MT_EMC_ABORT\020\377\\\022\020\n\013MT_EMC_STAT\020\337]*\243\001\n"
    "\013OriginIndex\022\016\n\nORIGIN_G54\020\001\022\016\n\nORIGIN_G"
    "55\020\002\022\016\n\nORIGIN_G56\020\003\022\016\n\nORIGIN_G57\020\004\022\016\n\n"
    "ORIGIN_G58\020\005\022\016\n\nORIGIN_G59\020\006\022\020\n\014ORIGIN_G"
    "59_1\020\007\022\020\n\014ORIGIN_G59_2\020\010\022\020\n\014ORIGIN_G59_3"
    "\020\t*N\n\021TermConditionType\022\033\n\027EMC_TRAJ_TERM"
    "_COND_STOP\020\001\022\034\n\030EMC_TRAJ_TERM_COND_BLEND"
    "\020\002*T\n\016CanonDirection\022\021\n\rCANON_STOPPED\020\001\022"
    "\023\n\017CANON_CLOCKWISE\020\002\022\032\n\026CANON_COUNTERCLO"
    "CKWISE\020\003*0\n\tInputType\022\020\n\014ANALOG_INPUT\020\000\022"
    "\021\n\rDIGITAL_INPUT\020\001*F\n\010WaitType\022\r\n\tIMMEDI"
    "ATE\020\000\022\010\n\004RISE\020\001\022\010\n\004FALL\020\002\022\013\n\007BE_HIGH\020\003\022\n"
    "\n\006BE_LOW\020\004", 10610);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "types.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_types_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_types_2eproto {
  StaticDescriptorInitializer_types_2eproto() {
    protobuf_AddDesc_types_2eproto();
  }
} static_descriptor_initializer_types_2eproto_;
const ::google::protobuf::EnumDescriptor* ValueType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ValueType_descriptor_;
}
bool ValueType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 20:
    case 30:
    case 40:
    case 50:
    case 60:
    case 80:
    case 100:
    case 110:
    case 120:
    case 130:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* HalPinDirection_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HalPinDirection_descriptor_;
}
bool HalPinDirection_IsValid(int value) {
  switch(value) {
    case 16:
    case 32:
    case 48:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* HalParamDirection_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HalParamDirection_descriptor_;
}
bool HalParamDirection_IsValid(int value) {
  switch(value) {
    case 64:
    case 192:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ObjectType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ObjectType_descriptor_;
}
bool ObjectType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 20:
    case 21:
    case 22:
    case 25:
    case 30:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* RCS_STATUS_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RCS_STATUS_descriptor_;
}
bool RCS_STATUS_IsValid(int value) {
  switch(value) {
    case -1:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MsgOrigin_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgOrigin_descriptor_;
}
bool MsgOrigin_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MsgLevel_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgLevel_descriptor_;
}
bool MsgLevel_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OriginDetail_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OriginDetail_descriptor_;
}
bool OriginDetail_IsValid(int value) {
  switch(value) {
    case 10:
    case 20:
    case 70:
    case 80:
    case 90:
    case 100:
    case 110:
    case 120:
    case 130:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OriginType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OriginType_descriptor_;
}
bool OriginType_IsValid(int value) {
  switch(value) {
    case 10:
    case 20:
    case 30:
    case 40:
    case 50:
    case 60:
    case 70:
    case 80:
    case 90:
    case 100:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Severity_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Severity_descriptor_;
}
bool Severity_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* StatusType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatusType_descriptor_;
}
bool StatusType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ReplyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReplyType_descriptor_;
}
bool ReplyType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 255:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ServiceType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServiceType_descriptor_;
}
bool ServiceType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ServiceAPI_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServiceAPI_descriptor_;
}
bool ServiceAPI_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ContainerType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ContainerType_descriptor_;
}
bool ContainerType_IsValid(int value) {
  switch(value) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 18:
    case 19:
    case 20:
    case 26:
    case 27:
    case 30:
    case 35:
    case 40:
    case 45:
    case 50:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 210:
    case 215:
    case 220:
    case 240:
    case 250:
    case 251:
    case 252:
    case 255:
    case 256:
    case 257:
    case 258:
    case 259:
    case 260:
    case 263:
    case 265:
    case 266:
    case 267:
    case 268:
    case 269:
    case 270:
    case 271:
    case 272:
    case 273:
    case 274:
    case 276:
    case 288:
    case 289:
    case 290:
    case 294:
    case 295:
    case 296:
    case 297:
    case 298:
    case 299:
    case 300:
    case 301:
    case 302:
    case 303:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 350:
    case 351:
    case 352:
    case 353:
    case 360:
    case 400:
    case 401:
    case 450:
    case 1000:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1013:
    case 1014:
    case 1015:
    case 1016:
    case 1017:
    case 1018:
    case 1019:
    case 1020:
    case 1021:
    case 1022:
    case 1023:
    case 1024:
    case 1025:
    case 1026:
    case 1027:
    case 1028:
    case 1029:
    case 1030:
    case 1031:
    case 1032:
    case 1033:
    case 1034:
    case 1035:
    case 1036:
    case 1037:
    case 1038:
    case 1039:
    case 1040:
    case 1041:
    case 1042:
    case 1043:
    case 1044:
    case 1045:
    case 1046:
    case 1047:
    case 1048:
    case 1049:
    case 1050:
    case 1051:
    case 1052:
    case 1053:
    case 1054:
    case 1055:
    case 1056:
    case 1057:
    case 1058:
    case 1059:
    case 1060:
    case 1061:
    case 1062:
    case 1063:
    case 1064:
    case 1065:
    case 1066:
    case 1067:
    case 1068:
    case 1069:
    case 1070:
    case 1071:
    case 1100:
    case 1110:
    case 1112:
    case 1113:
    case 2048:
    case 3000:
    case 4000:
    case 5001:
    case 5002:
    case 5003:
    case 10000:
    case 10011:
    case 10012:
    case 10013:
    case 10021:
    case 10022:
    case 10030:
    case 10101:
    case 10102:
    case 10107:
    case 10108:
    case 10111:
    case 10112:
    case 10115:
    case 10116:
    case 10118:
    case 10119:
    case 10120:
    case 10121:
    case 10122:
    case 10123:
    case 10124:
    case 10125:
    case 10126:
    case 10127:
    case 10128:
    case 10129:
    case 10131:
    case 10134:
    case 10135:
    case 10199:
    case 10201:
    case 10202:
    case 10203:
    case 10204:
    case 10205:
    case 10206:
    case 10207:
    case 10208:
    case 10209:
    case 10210:
    case 10211:
    case 10212:
    case 10213:
    case 10214:
    case 10215:
    case 10216:
    case 10217:
    case 10218:
    case 10219:
    case 10220:
    case 10221:
    case 10222:
    case 10223:
    case 10224:
    case 10225:
    case 10226:
    case 10227:
    case 10228:
    case 10229:
    case 10230:
    case 10231:
    case 10232:
    case 10233:
    case 10234:
    case 10235:
    case 10236:
    case 10237:
    case 10299:
    case 10301:
    case 10302:
    case 10303:
    case 10304:
    case 10305:
    case 10306:
    case 10317:
    case 10318:
    case 10399:
    case 10501:
    case 10502:
    case 10503:
    case 10504:
    case 10505:
    case 10506:
    case 10507:
    case 10508:
    case 10509:
    case 10510:
    case 10511:
    case 10512:
    case 10513:
    case 10514:
    case 10515:
    case 10516:
    case 10517:
    case 10518:
    case 10519:
    case 10520:
    case 10530:
    case 10599:
    case 11101:
    case 11102:
    case 11103:
    case 11104:
    case 11105:
    case 11106:
    case 11107:
    case 11108:
    case 11109:
    case 11199:
    case 11206:
    case 11207:
    case 11208:
    case 11209:
    case 11299:
    case 11304:
    case 11305:
    case 11309:
    case 11310:
    case 11311:
    case 11312:
    case 11313:
    case 11316:
    case 11399:
    case 11404:
    case 11405:
    case 11406:
    case 11407:
    case 11499:
    case 11504:
    case 11505:
    case 11599:
    case 11601:
    case 11602:
    case 11603:
    case 11604:
    case 11699:
    case 11901:
    case 11902:
    case 11903:
    case 11999:
    case 13000:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* OriginIndex_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OriginIndex_descriptor_;
}
bool OriginIndex_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* TermConditionType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TermConditionType_descriptor_;
}
bool TermConditionType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CanonDirection_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CanonDirection_descriptor_;
}
bool CanonDirection_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* InputType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InputType_descriptor_;
}
bool InputType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* WaitType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WaitType_descriptor_;
}
bool WaitType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)
