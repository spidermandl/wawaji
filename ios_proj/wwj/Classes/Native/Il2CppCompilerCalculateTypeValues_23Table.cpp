#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Request2032498015.h"
#include "AssemblyU2DCSharp_Request_Response998287943.h"
#include "AssemblyU2DCSharp_Request_Error2783916960.h"
#include "AssemblyU2DCSharp_Request_Error_Data862910835.h"
#include "AssemblyU2DCSharp_Request_Exception2103181915.h"
#include "AssemblyU2DCSharp_BaseProxy1490705299.h"
#include "AssemblyU2DCSharp_DeviceInfoProxy1172231466.h"
#include "AssemblyU2DCSharp_GameBallProxy2168316623.h"
#include "AssemblyU2DCSharp_GameBallProxy_BallsItem1160354485.h"
#include "AssemblyU2DCSharp_GameBallProxy_Answer3120038084.h"
#include "AssemblyU2DCSharp_MachineInfoProxy2135355597.h"
#include "AssemblyU2DCSharp_MachineInfoProxy_MachineItem4170467010.h"
#include "AssemblyU2DCSharp_MachineInfoProxy_MachineType1905218931.h"
#include "AssemblyU2DCSharp_MachineInfoProxy_TypeAndItem923707302.h"
#include "AssemblyU2DCSharp_MachinePrizeProxy3854276471.h"
#include "AssemblyU2DCSharp_MachinePrizeProxy_PrizeItem1808412913.h"
#include "AssemblyU2DCSharp_ByteBuffer1012950836.h"
#include "AssemblyU2DCSharp_Converter3013945708.h"
#include "AssemblyU2DCSharp_HttpClient517229427.h"
#include "AssemblyU2DCSharp_HttpClient_U3CpostU3Ec__Iterator2112091183.h"
#include "AssemblyU2DCSharp_HttpClient_U3CpostU3Ec__Iterator2112091184.h"
#include "AssemblyU2DCSharp_HttpClient_U3CgetU3Ec__Iterator24051872395.h"
#include "AssemblyU2DCSharp_NetworkManager226491143.h"
#include "AssemblyU2DCSharp_Protocal3625308218.h"
#include "AssemblyU2DCSharp_DisType1929133216.h"
#include "AssemblyU2DCSharp_SocketClient718412134.h"
#include "AssemblyU2DCSharp_NewsProxy3148915873.h"
#include "AssemblyU2DCSharp_NewsProxy_NewsItem343110230.h"
#include "AssemblyU2DCSharp_PrizeSetProxy1017147588.h"
#include "AssemblyU2DCSharp_PrizeSetProxy_PrizeItem1113795488.h"
#include "AssemblyU2DCSharp_UpdatesProxy1779614422.h"
#include "AssemblyU2DCSharp_UpdatesProxy_ResVersion4240498085.h"
#include "AssemblyU2DCSharp_UpdatesProxy_ResVersion_Data2615592746.h"
#include "AssemblyU2DCSharp_UpdatesProxy_ResVersion_Entry2618311950.h"
#include "AssemblyU2DCSharp_UpdatesProxy_MemoryVersion663582980.h"
#include "AssemblyU2DCSharp_UpdatesProxy_MemoryVersion_RES_TY438878190.h"
#include "AssemblyU2DCSharp_UpdatesProxy_MemoryVersion_Entry1644304703.h"
#include "AssemblyU2DCSharp_UpdatesProxy_U3CloadIconU3Ec__An2147472459.h"
#include "AssemblyU2DCSharp_UserPrizeInfoProxy2183279781.h"
#include "AssemblyU2DCSharp_UserPrizeInfoProxy_PrizeItem2884668051.h"
#include "AssemblyU2DCSharp_UserPrizeListsProxy1516881806.h"
#include "AssemblyU2DCSharp_UserPrizeListsProxy_RecordsItem323127944.h"
#include "AssemblyU2DCSharp_UserPrizeStringProxy3415935004.h"
#include "AssemblyU2DCSharp_PhysicsMove3293281028.h"
#include "AssemblyU2DCSharp_PhysicsMove_ForceType3609499072.h"
#include "AssemblyU2DCSharp_UnityFacade1495732005.h"
#include "AssemblyU2DCSharp_JsonHelper3639118950.h"
#include "AssemblyU2DCSharp_TXTReader4273255191.h"
#include "AssemblyU2DCSharp_Util4006552276.h"
#include "AssemblyU2DCSharp_VerificationCode2796477182.h"
#include "AssemblyU2DCSharp_BaseMediator1205744884.h"
#include "AssemblyU2DCSharp_EnterMediator2848704643.h"
#include "AssemblyU2DCSharp_ExchangeMediator2393535248.h"
#include "AssemblyU2DCSharp_GameMediator1085250441.h"
#include "AssemblyU2DCSharp_HomeMediator2857743882.h"
#include "AssemblyU2DCSharp_NoticeMediator2431129697.h"
#include "AssemblyU2DCSharp_PrizeMediator621181455.h"
#include "AssemblyU2DCSharp_RewardsMediator1871400415.h"
#include "AssemblyU2DCSharp_UIBaseVerifyWin1601586792.h"
#include "AssemblyU2DCSharp_UIDocWin987352490.h"
#include "AssemblyU2DCSharp_UIEnterMain4133042741.h"
#include "AssemblyU2DCSharp_UIEnterMain_U3CcountDownU3Ec__It2305451882.h"
#include "AssemblyU2DCSharp_UIForgetWin743046687.h"
#include "AssemblyU2DCSharp_UILoginWin3226644389.h"
#include "AssemblyU2DCSharp_UIRegisterWin3648869375.h"
#include "AssemblyU2DCSharp_UIExchangeMain4038730646.h"
#include "AssemblyU2DCSharp_UIExchangeMain_U3CRenderListItem4006177201.h"
#include "AssemblyU2DCSharp_AutoPlay4276994045.h"
#include "AssemblyU2DCSharp_Footer1265171471.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameManager_States3290631248.h"
#include "AssemblyU2DCSharp_GameManager_DIRECTION3800231233.h"
#include "AssemblyU2DCSharp_GameManager_LEFT_SIDE876365547.h"
#include "AssemblyU2DCSharp_GameManager_FORWARD_SIDE4225270531.h"
#include "AssemblyU2DCSharp_GameManager_RIGHT_SIDE4173767830.h"
#include "AssemblyU2DCSharp_PassChecker4191111040.h"
#include "AssemblyU2DCSharp_Picker1889162310.h"
#include "AssemblyU2DCSharp_Picker_States3937462819.h"
#include "AssemblyU2DCSharp_Picker_CheckDropBall64179887.h"
#include "AssemblyU2DCSharp_Picker_CheckResultBall1920898355.h"
#include "AssemblyU2DCSharp_Picker_CheckRemainingBall967539078.h"
#include "AssemblyU2DCSharp_Picker_BallBundle477928566.h"
#include "AssemblyU2DCSharp_Picker_BallCompare823901083.h"
#include "AssemblyU2DCSharp_Picker_U3CPick_EnterU3Ec__Iterat2148422326.h"
#include "AssemblyU2DCSharp_Picker_U3CPick_ExitU3Ec__Iterato3555992051.h"
#include "AssemblyU2DCSharp_Picker_U3CRecoverJoint_EnterU3Ec2642841245.h"
#include "AssemblyU2DCSharp_Picker_U3CRelease_ExitU3Ec__Iter2432520365.h"
#include "AssemblyU2DCSharp_Picker_U3CdropExcessBallU3Ec__It1292005257.h"
#include "AssemblyU2DCSharp_Picker_U3CdropBallByTypeU3Ec__It2109145870.h"
#include "AssemblyU2DCSharp_Picker_U3CdropBallByResultU3Ec__2359527312.h"
#include "AssemblyU2DCSharp_Picker_U3CdropBallByOddsU3Ec__It1147633298.h"
#include "AssemblyU2DCSharp_Picker_U3CconfirmDropsU3Ec__Itera779393892.h"
#include "AssemblyU2DCSharp_RangeSphere800699816.h"
#include "AssemblyU2DCSharp_RangeSphere_SelectingBall3956942226.h"
#include "AssemblyU2DCSharp_RingFence3382043263.h"
#include "AssemblyU2DCSharp_UICoinPrize4037221321.h"
#include "AssemblyU2DCSharp_UIConfirm2687705270.h"
#include "AssemblyU2DCSharp_UIFailure2343955704.h"
#include "AssemblyU2DCSharp_UIGameMain2266978667.h"
#include "AssemblyU2DCSharp_UIGameMain_U3CGameOverU3Ec__AnonS389770329.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (Request_t2032498015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[7] = 
{
	0,
	Request_t2032498015::get_offset_of__api_1(),
	Request_t2032498015::get_offset_of__form_2(),
	Request_t2032498015::get_offset_of__response_3(),
	Request_t2032498015::get_offset_of_userId_4(),
	Request_t2032498015::get_offset_of_token_5(),
	Request_t2032498015::get_offset_of_mId_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (Response_t998287943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[3] = 
{
	Response_t998287943::get_offset_of_request_0(),
	Response_t998287943::get_offset_of_ret_1(),
	Response_t998287943::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (Error_t2783916960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[1] = 
{
	Error_t2783916960::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (Data_t862910835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[2] = 
{
	Data_t862910835::get_offset_of_code_0(),
	Data_t862910835::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (Exception_t2103181915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (BaseProxy_t1490705299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (DeviceInfoProxy_t1172231466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[3] = 
{
	0,
	DeviceInfoProxy_t1172231466::get_offset_of_type_7(),
	DeviceInfoProxy_t1172231466::get_offset_of_uuid_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (GameBallProxy_t2168316623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[7] = 
{
	0,
	GameBallProxy_t2168316623::get_offset_of_num_7(),
	GameBallProxy_t2168316623::get_offset_of_countDown_8(),
	GameBallProxy_t2168316623::get_offset_of_items_9(),
	GameBallProxy_t2168316623::get_offset_of_game_id_10(),
	GameBallProxy_t2168316623::get_offset_of_ball_arr_11(),
	GameBallProxy_t2168316623::get_offset_of_result_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (BallsItem_t1160354485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[10] = 
{
	BallsItem_t1160354485::get_offset_of_prize_id_0(),
	BallsItem_t1160354485::get_offset_of_ball_id_1(),
	BallsItem_t1160354485::get_offset_of_name_2(),
	BallsItem_t1160354485::get_offset_of_price_3(),
	BallsItem_t1160354485::get_offset_of_coin_4(),
	BallsItem_t1160354485::get_offset_of_p_pic_5(),
	BallsItem_t1160354485::get_offset_of_b_pic_6(),
	BallsItem_t1160354485::get_offset_of_is_matter_7(),
	BallsItem_t1160354485::get_offset_of_ball_num_8(),
	BallsItem_t1160354485::get_offset_of_refresh_time_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (Answer_t3120038084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[3] = 
{
	Answer_t3120038084::get_offset_of_prizes_0(),
	Answer_t3120038084::get_offset_of_coin_1(),
	Answer_t3120038084::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (MachineInfoProxy_t2135355597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[3] = 
{
	0,
	MachineInfoProxy_t2135355597::get_offset_of_items_7(),
	MachineInfoProxy_t2135355597::get_offset_of_selection_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (MachineItem_t4170467010), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[2] = 
{
	MachineItem_t4170467010::get_offset_of_coin_0(),
	MachineItem_t4170467010::get_offset_of_machine_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (MachineType_t1905218931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[3] = 
{
	MachineType_t1905218931::get_offset_of_name_0(),
	MachineType_t1905218931::get_offset_of_machine_type_id_1(),
	MachineType_t1905218931::get_offset_of_machine_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (TypeAndItem_t923707302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[4] = 
{
	TypeAndItem_t923707302::get_offset_of_name_0(),
	TypeAndItem_t923707302::get_offset_of_machine_type_id_1(),
	TypeAndItem_t923707302::get_offset_of_coin_2(),
	TypeAndItem_t923707302::get_offset_of_machine_id_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (MachinePrizeProxy_t3854276471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[2] = 
{
	0,
	MachinePrizeProxy_t3854276471::get_offset_of_items_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (PrizeItem_t1808412913), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[9] = 
{
	PrizeItem_t1808412913::get_offset_of_machine_type_id_0(),
	PrizeItem_t1808412913::get_offset_of_machine_id_1(),
	PrizeItem_t1808412913::get_offset_of_prize_id_2(),
	PrizeItem_t1808412913::get_offset_of_ball_id_3(),
	PrizeItem_t1808412913::get_offset_of_name_4(),
	PrizeItem_t1808412913::get_offset_of_price_5(),
	PrizeItem_t1808412913::get_offset_of_coin_6(),
	PrizeItem_t1808412913::get_offset_of_p_pic_7(),
	PrizeItem_t1808412913::get_offset_of_b_pic_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (ByteBuffer_t1012950836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[3] = 
{
	ByteBuffer_t1012950836::get_offset_of_stream_0(),
	ByteBuffer_t1012950836::get_offset_of_writer_1(),
	ByteBuffer_t1012950836::get_offset_of_reader_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (Converter_t3013945708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (HttpClient_t517229427), -1, sizeof(HttpClient_t517229427_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2318[1] = 
{
	HttpClient_t517229427_StaticFields::get_offset_of_NAME_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (U3CpostU3Ec__Iterator0_t2112091183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[17] = 
{
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CencodingU3E__0_0(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_jsonString_1(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CwordU3E__0_2(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CstrArrayU3E__0_3(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CheadU3E__0_4(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CbodyU3E__0_5(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CiU3E__0_6(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U24locvar0_7(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U24locvar1_8(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CheadersU3E__0_9(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3Cb_bodyU3E__0_10(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CcredentialsU3E__0_11(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_api_12(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U3CwwwU3E__0_13(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U24current_14(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U24disposing_15(),
	U3CpostU3Ec__Iterator0_t2112091183::get_offset_of_U24PC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (U3CpostU3Ec__Iterator1_t2112091184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[5] = 
{
	U3CpostU3Ec__Iterator1_t2112091184::get_offset_of_req_0(),
	U3CpostU3Ec__Iterator1_t2112091184::get_offset_of_U3CwwwU3E__0_1(),
	U3CpostU3Ec__Iterator1_t2112091184::get_offset_of_U24current_2(),
	U3CpostU3Ec__Iterator1_t2112091184::get_offset_of_U24disposing_3(),
	U3CpostU3Ec__Iterator1_t2112091184::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (U3CgetU3Ec__Iterator2_t4051872395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[6] = 
{
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_api_0(),
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_param_1(),
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_U3CwwwU3E__0_2(),
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_U24current_3(),
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_U24disposing_4(),
	U3CgetU3Ec__Iterator2_t4051872395::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (NetworkManager_t226491143), -1, sizeof(NetworkManager_t226491143_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2322[4] = 
{
	NetworkManager_t226491143::get_offset_of_socket_2(),
	NetworkManager_t226491143::get_offset_of_http_3(),
	NetworkManager_t226491143_StaticFields::get_offset_of_sEvents_4(),
	NetworkManager_t226491143_StaticFields::get_offset_of_hEvents_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (Protocal_t3625308218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (DisType_t1929133216)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2324[3] = 
{
	DisType_t1929133216::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (SocketClient_t718412134), -1, sizeof(SocketClient_t718412134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2325[7] = 
{
	SocketClient_t718412134::get_offset_of_client_0(),
	SocketClient_t718412134::get_offset_of_outStream_1(),
	SocketClient_t718412134::get_offset_of_memStream_2(),
	SocketClient_t718412134::get_offset_of_reader_3(),
	0,
	SocketClient_t718412134::get_offset_of_byteBuffer_5(),
	SocketClient_t718412134_StaticFields::get_offset_of_loggedIn_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (NewsProxy_t3148915873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2326[2] = 
{
	0,
	NewsProxy_t3148915873::get_offset_of_items_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (NewsItem_t343110230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2327[5] = 
{
	NewsItem_t343110230::get_offset_of_id_0(),
	NewsItem_t343110230::get_offset_of_type_title_1(),
	NewsItem_t343110230::get_offset_of_title_2(),
	NewsItem_t343110230::get_offset_of_cont_3(),
	NewsItem_t343110230::get_offset_of_date_time_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (PrizeSetProxy_t1017147588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[2] = 
{
	0,
	PrizeSetProxy_t1017147588::get_offset_of_items_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (PrizeItem_t1113795488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2329[6] = 
{
	PrizeItem_t1113795488::get_offset_of_id_0(),
	PrizeItem_t1113795488::get_offset_of_name_1(),
	PrizeItem_t1113795488::get_offset_of_price_2(),
	PrizeItem_t1113795488::get_offset_of_coin_3(),
	PrizeItem_t1113795488::get_offset_of_pic_4(),
	PrizeItem_t1113795488::get_offset_of_desc_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (UpdatesProxy_t1779614422), -1, sizeof(UpdatesProxy_t1779614422_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2330[6] = 
{
	0,
	0,
	UpdatesProxy_t1779614422::get_offset_of_localVersion_8(),
	UpdatesProxy_t1779614422::get_offset_of_memVersion_9(),
	UpdatesProxy_t1779614422::get_offset_of_serverVersion_10(),
	UpdatesProxy_t1779614422_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (ResVersion_t4240498085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[2] = 
{
	ResVersion_t4240498085::get_offset_of_version_0(),
	ResVersion_t4240498085::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (Data_t2615592746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[3] = 
{
	Data_t2615592746::get_offset_of_prize_0(),
	Data_t2615592746::get_offset_of_ball_1(),
	Data_t2615592746::get_offset_of_raw_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (Entry_t2618311950), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2333[5] = 
{
	Entry_t2618311950::get_offset_of_id_0(),
	Entry_t2618311950::get_offset_of_pic_1(),
	Entry_t2618311950::get_offset_of_pic_path_2(),
	Entry_t2618311950::get_offset_of_local_path_3(),
	Entry_t2618311950::get_offset_of_is_new_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (MemoryVersion_t663582980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2334[3] = 
{
	MemoryVersion_t663582980::get_offset_of_prize_0(),
	MemoryVersion_t663582980::get_offset_of_ball_1(),
	MemoryVersion_t663582980::get_offset_of_raw_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (RES_TYPE_t438878190)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2335[4] = 
{
	RES_TYPE_t438878190::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (Entry_t1644304703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[5] = 
{
	Entry_t1644304703::get_offset_of_pic_0(),
	Entry_t1644304703::get_offset_of_pic_path_1(),
	Entry_t1644304703::get_offset_of_local_path_2(),
	Entry_t1644304703::get_offset_of_is_new_3(),
	Entry_t1644304703::get_offset_of_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (U3CloadIconU3Ec__AnonStorey0_t2147472459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[3] = 
{
	U3CloadIconU3Ec__AnonStorey0_t2147472459::get_offset_of_loader_0(),
	U3CloadIconU3Ec__AnonStorey0_t2147472459::get_offset_of_entry_1(),
	U3CloadIconU3Ec__AnonStorey0_t2147472459::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (UserPrizeInfoProxy_t2183279781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[3] = 
{
	0,
	UserPrizeInfoProxy_t2183279781::get_offset_of_items_7(),
	UserPrizeInfoProxy_t2183279781::get_offset_of_selectedItem_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (PrizeItem_t2884668051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2339[8] = 
{
	PrizeItem_t2884668051::get_offset_of_id_0(),
	PrizeItem_t2884668051::get_offset_of_prize_id_1(),
	PrizeItem_t2884668051::get_offset_of_name_2(),
	PrizeItem_t2884668051::get_offset_of_price_3(),
	PrizeItem_t2884668051::get_offset_of_coin_4(),
	PrizeItem_t2884668051::get_offset_of_pic_5(),
	PrizeItem_t2884668051::get_offset_of_desc_6(),
	PrizeItem_t2884668051::get_offset_of_status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (UserPrizeListsProxy_t1516881806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[2] = 
{
	0,
	UserPrizeListsProxy_t1516881806::get_offset_of_items_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (RecordsItem_t323127944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[7] = 
{
	RecordsItem_t323127944::get_offset_of_user_id_0(),
	RecordsItem_t323127944::get_offset_of_pic_1(),
	RecordsItem_t323127944::get_offset_of_phone_2(),
	RecordsItem_t323127944::get_offset_of_type_3(),
	RecordsItem_t323127944::get_offset_of_user_name_4(),
	RecordsItem_t323127944::get_offset_of_prize_id_5(),
	RecordsItem_t323127944::get_offset_of_name_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (UserPrizeStringProxy_t3415935004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[2] = 
{
	0,
	UserPrizeStringProxy_t3415935004::get_offset_of_items_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (PhysicsMove_t3293281028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2343[5] = 
{
	PhysicsMove_t3293281028::get_offset_of_forceType_2(),
	PhysicsMove_t3293281028::get_offset_of_forceMode_3(),
	PhysicsMove_t3293281028::get_offset_of_speed_4(),
	PhysicsMove_t3293281028::get_offset_of_rigid_5(),
	PhysicsMove_t3293281028::get_offset_of_inputMove_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (ForceType_t3609499072)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2344[5] = 
{
	ForceType_t3609499072::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (UnityFacade_t1495732005), -1, sizeof(UnityFacade_t1495732005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2345[3] = 
{
	UnityFacade_t1495732005::get_offset_of_network_6(),
	UnityFacade_t1495732005_StaticFields::get_offset_of_m_instance_7(),
	UnityFacade_t1495732005_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (JsonHelper_t3639118950), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (TXTReader_t4273255191), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (Util_t4006552276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (VerificationCode_t2796477182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (BaseMediator_t1205744884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (EnterMediator_t2848704643), -1, sizeof(EnterMediator_t2848704643_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2351[2] = 
{
	0,
	EnterMediator_t2848704643_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (ExchangeMediator_t2393535248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2352[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (GameMediator_t1085250441), -1, sizeof(GameMediator_t1085250441_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2353[2] = 
{
	0,
	GameMediator_t1085250441_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (HomeMediator_t2857743882), -1, sizeof(HomeMediator_t2857743882_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2354[2] = 
{
	0,
	HomeMediator_t2857743882_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (NoticeMediator_t2431129697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { sizeof (PrizeMediator_t621181455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2356[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { sizeof (RewardsMediator_t1871400415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2357[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (UIBaseVerifyWin_t1601586792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[3] = 
{
	UIBaseVerifyWin_t1601586792::get_offset_of_code_104(),
	UIBaseVerifyWin_t1601586792::get_offset_of_isProcessing_105(),
	UIBaseVerifyWin_t1601586792::get_offset_of_isVerifying_106(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (UIDocWin_t987352490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (UIEnterMain_t4133042741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2360[6] = 
{
	UIEnterMain_t4133042741::get_offset_of__loginWin_7(),
	UIEnterMain_t4133042741::get_offset_of__registerWin_8(),
	UIEnterMain_t4133042741::get_offset_of__forgetWin_9(),
	UIEnterMain_t4133042741::get_offset_of__docWin_10(),
	UIEnterMain_t4133042741::get_offset_of__list_11(),
	UIEnterMain_t4133042741::get_offset_of_records_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (U3CcountDownU3Ec__Iterator0_t2305451882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2361[5] = 
{
	U3CcountDownU3Ec__Iterator0_t2305451882::get_offset_of_U3CiU3E__1_0(),
	U3CcountDownU3Ec__Iterator0_t2305451882::get_offset_of__win_1(),
	U3CcountDownU3Ec__Iterator0_t2305451882::get_offset_of_U24current_2(),
	U3CcountDownU3Ec__Iterator0_t2305451882::get_offset_of_U24disposing_3(),
	U3CcountDownU3Ec__Iterator0_t2305451882::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { sizeof (UIForgetWin_t743046687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { sizeof (UILoginWin_t3226644389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2363[1] = 
{
	UILoginWin_t3226644389::get_offset_of_isLogining_104(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { sizeof (UIRegisterWin_t3648869375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (UIExchangeMain_t4038730646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2365[6] = 
{
	UIExchangeMain_t4038730646::get_offset_of__uiTopup_7(),
	UIExchangeMain_t4038730646::get_offset_of__uiTip_8(),
	UIExchangeMain_t4038730646::get_offset_of__uiConfirm_9(),
	UIExchangeMain_t4038730646::get_offset_of_toolbar_10(),
	UIExchangeMain_t4038730646::get_offset_of__list_11(),
	UIExchangeMain_t4038730646::get_offset_of_items_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (U3CRenderListItemU3Ec__AnonStorey0_t4006177201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2366[2] = 
{
	U3CRenderListItemU3Ec__AnonStorey0_t4006177201::get_offset_of_index_0(),
	U3CRenderListItemU3Ec__AnonStorey0_t4006177201::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (AutoPlay_t4276994045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2367[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (Footer_t1265171471), -1, sizeof(Footer_t1265171471_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2368[7] = 
{
	Footer_t1265171471::get_offset_of_radius_2(),
	Footer_t1265171471::get_offset_of_angle_3(),
	Footer_t1265171471::get_offset_of_divide_4(),
	Footer_t1265171471::get_offset_of_initRotate_5(),
	Footer_t1265171471::get_offset_of_footFactor_6(),
	Footer_t1265171471_StaticFields::get_offset_of_initFootPos_7(),
	Footer_t1265171471::get_offset_of_quads_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (GameManager_t2252321495), -1, sizeof(GameManager_t2252321495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2369[15] = 
{
	GameManager_t2252321495::get_offset_of_pool_2(),
	GameManager_t2252321495::get_offset_of_balls_3(),
	GameManager_t2252321495_StaticFields::get_offset_of_BALL_TOTAL_4(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GameManager_t2252321495::get_offset_of_picker_12(),
	GameManager_t2252321495::get_offset_of__3dCamera_13(),
	0,
	0,
	GameManager_t2252321495::get_offset_of_cameraStateMachine_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (States_t3290631248)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2370[4] = 
{
	States_t3290631248::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (DIRECTION_t3800231233)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2371[5] = 
{
	DIRECTION_t3800231233::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { sizeof (LEFT_SIDE_t876365547), -1, sizeof(LEFT_SIDE_t876365547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2372[4] = 
{
	LEFT_SIDE_t876365547_StaticFields::get_offset_of_LEFT_0(),
	LEFT_SIDE_t876365547_StaticFields::get_offset_of_RIGHT_1(),
	LEFT_SIDE_t876365547_StaticFields::get_offset_of_FORWORD_2(),
	LEFT_SIDE_t876365547_StaticFields::get_offset_of_BACK_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { sizeof (FORWARD_SIDE_t4225270531), -1, sizeof(FORWARD_SIDE_t4225270531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2373[4] = 
{
	FORWARD_SIDE_t4225270531_StaticFields::get_offset_of_LEFT_0(),
	FORWARD_SIDE_t4225270531_StaticFields::get_offset_of_RIGHT_1(),
	FORWARD_SIDE_t4225270531_StaticFields::get_offset_of_FORWORD_2(),
	FORWARD_SIDE_t4225270531_StaticFields::get_offset_of_BACK_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { sizeof (RIGHT_SIDE_t4173767830), -1, sizeof(RIGHT_SIDE_t4173767830_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2374[4] = 
{
	RIGHT_SIDE_t4173767830_StaticFields::get_offset_of_LEFT_0(),
	RIGHT_SIDE_t4173767830_StaticFields::get_offset_of_RIGHT_1(),
	RIGHT_SIDE_t4173767830_StaticFields::get_offset_of_FORWORD_2(),
	RIGHT_SIDE_t4173767830_StaticFields::get_offset_of_BACK_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { sizeof (PassChecker_t4191111040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2375[3] = 
{
	PassChecker_t4191111040::get_offset_of_pool_2(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { sizeof (Picker_t1889162310), -1, sizeof(Picker_t1889162310_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2376[27] = 
{
	Picker_t1889162310::get_offset_of_pool_2(),
	Picker_t1889162310_StaticFields::get_offset_of_initPos_3(),
	Picker_t1889162310_StaticFields::get_offset_of_clawPos_4(),
	Picker_t1889162310_StaticFields::get_offset_of_jointPos_5(),
	Picker_t1889162310_StaticFields::get_offset_of_ground_Y_6(),
	Picker_t1889162310_StaticFields::get_offset_of_dropPos_7(),
	Picker_t1889162310::get_offset_of_handler_8(),
	Picker_t1889162310::get_offset_of_joint_9(),
	Picker_t1889162310::get_offset_of_physics_10(),
	Picker_t1889162310::get_offset_of_claw_11(),
	Picker_t1889162310::get_offset_of_rootFoot_12(),
	Picker_t1889162310::get_offset_of_pickRange_13(),
	Picker_t1889162310::get_offset_of_foots_14(),
	Picker_t1889162310::get_offset_of_legs_15(),
	Picker_t1889162310::get_offset_of_fence_16(),
	Picker_t1889162310::get_offset_of_ball_container_17(),
	Picker_t1889162310::get_offset_of_pickerStateMachine_18(),
	Picker_t1889162310::get_offset_of_moveDiretion_19(),
	0,
	0,
	0,
	Picker_t1889162310::get_offset_of_releaseDirection_23(),
	Picker_t1889162310::get_offset_of__checkDropBall_24(),
	Picker_t1889162310::get_offset_of__checkResultBall_25(),
	Picker_t1889162310::get_offset_of__checkRemainingBall_26(),
	Picker_t1889162310::get_offset_of_ball_objs_27(),
	Picker_t1889162310::get_offset_of_picked_balls_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { sizeof (States_t3937462819)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2377[11] = 
{
	States_t3937462819::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { sizeof (CheckDropBall_t64179887), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { sizeof (CheckResultBall_t1920898355), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (CheckRemainingBall_t967539078), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (BallBundle_t477928566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[2] = 
{
	BallBundle_t477928566::get_offset_of_dis_0(),
	BallBundle_t477928566::get_offset_of_ball_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (BallCompare_t823901083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (U3CPick_EnterU3Ec__Iterator0_t2148422326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2383[5] = 
{
	U3CPick_EnterU3Ec__Iterator0_t2148422326::get_offset_of_U3CanimU3E__0_0(),
	U3CPick_EnterU3Ec__Iterator0_t2148422326::get_offset_of_U24this_1(),
	U3CPick_EnterU3Ec__Iterator0_t2148422326::get_offset_of_U24current_2(),
	U3CPick_EnterU3Ec__Iterator0_t2148422326::get_offset_of_U24disposing_3(),
	U3CPick_EnterU3Ec__Iterator0_t2148422326::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (U3CPick_ExitU3Ec__Iterator1_t3555992051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2384[4] = 
{
	U3CPick_ExitU3Ec__Iterator1_t3555992051::get_offset_of_U24this_0(),
	U3CPick_ExitU3Ec__Iterator1_t3555992051::get_offset_of_U24current_1(),
	U3CPick_ExitU3Ec__Iterator1_t3555992051::get_offset_of_U24disposing_2(),
	U3CPick_ExitU3Ec__Iterator1_t3555992051::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (U3CRecoverJoint_EnterU3Ec__Iterator2_t2642841245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2385[4] = 
{
	U3CRecoverJoint_EnterU3Ec__Iterator2_t2642841245::get_offset_of_U24this_0(),
	U3CRecoverJoint_EnterU3Ec__Iterator2_t2642841245::get_offset_of_U24current_1(),
	U3CRecoverJoint_EnterU3Ec__Iterator2_t2642841245::get_offset_of_U24disposing_2(),
	U3CRecoverJoint_EnterU3Ec__Iterator2_t2642841245::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (U3CRelease_ExitU3Ec__Iterator3_t2432520365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2386[3] = 
{
	U3CRelease_ExitU3Ec__Iterator3_t2432520365::get_offset_of_U24current_0(),
	U3CRelease_ExitU3Ec__Iterator3_t2432520365::get_offset_of_U24disposing_1(),
	U3CRelease_ExitU3Ec__Iterator3_t2432520365::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (U3CdropExcessBallU3Ec__Iterator4_t1292005257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2387[4] = 
{
	U3CdropExcessBallU3Ec__Iterator4_t1292005257::get_offset_of_U24this_0(),
	U3CdropExcessBallU3Ec__Iterator4_t1292005257::get_offset_of_U24current_1(),
	U3CdropExcessBallU3Ec__Iterator4_t1292005257::get_offset_of_U24disposing_2(),
	U3CdropExcessBallU3Ec__Iterator4_t1292005257::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (U3CdropBallByTypeU3Ec__Iterator5_t2109145870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2388[7] = 
{
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U3CproxyU3E__0_0(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U3CiU3E__1_1(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U3CballU3E__2_2(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U24this_3(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U24current_4(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U24disposing_5(),
	U3CdropBallByTypeU3Ec__Iterator5_t2109145870::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (U3CdropBallByResultU3Ec__Iterator6_t2359527312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2389[10] = 
{
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3CproxyU3E__0_0(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3CbsU3E__1_1(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3CdropsU3E__1_2(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3Cdrop_ballsU3E__1_3(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3CiU3E__2_4(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U3CbU3E__3_5(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U24this_6(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U24current_7(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U24disposing_8(),
	U3CdropBallByResultU3Ec__Iterator6_t2359527312::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (U3CdropBallByOddsU3Ec__Iterator7_t1147633298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2390[5] = 
{
	U3CdropBallByOddsU3Ec__Iterator7_t1147633298::get_offset_of_U3CnoDropU3E__1_0(),
	U3CdropBallByOddsU3Ec__Iterator7_t1147633298::get_offset_of_U24this_1(),
	U3CdropBallByOddsU3Ec__Iterator7_t1147633298::get_offset_of_U24current_2(),
	U3CdropBallByOddsU3Ec__Iterator7_t1147633298::get_offset_of_U24disposing_3(),
	U3CdropBallByOddsU3Ec__Iterator7_t1147633298::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (U3CconfirmDropsU3Ec__Iterator8_t779393892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[4] = 
{
	U3CconfirmDropsU3Ec__Iterator8_t779393892::get_offset_of_U24this_0(),
	U3CconfirmDropsU3Ec__Iterator8_t779393892::get_offset_of_U24current_1(),
	U3CconfirmDropsU3Ec__Iterator8_t779393892::get_offset_of_U24disposing_2(),
	U3CconfirmDropsU3Ec__Iterator8_t779393892::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (RangeSphere_t800699816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2392[1] = 
{
	RangeSphere_t800699816::get_offset_of__picking_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (SelectingBall_t3956942226), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (RingFence_t3382043263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2394[2] = 
{
	RingFence_t3382043263::get_offset_of_radius_2(),
	RingFence_t3382043263::get_offset_of_divide_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (UICoinPrize_t4037221321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2395[1] = 
{
	UICoinPrize_t4037221321::get_offset_of__onConfirm_104(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (UIConfirm_t2687705270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2396[2] = 
{
	UIConfirm_t2687705270::get_offset_of__onConfirm_104(),
	UIConfirm_t2687705270::get_offset_of__onCancel_105(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (UIFailure_t2343955704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[1] = 
{
	UIFailure_t2343955704::get_offset_of__onConfirm_104(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (UIGameMain_t2266978667), -1, sizeof(UIGameMain_t2266978667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2398[12] = 
{
	UIGameMain_t2266978667::get_offset_of__confirmWin_7(),
	UIGameMain_t2266978667::get_offset_of__coinWin_8(),
	UIGameMain_t2266978667::get_offset_of__failWin_9(),
	UIGameMain_t2266978667::get_offset_of__topupWin_10(),
	UIGameMain_t2266978667::get_offset_of__commonWin_11(),
	UIGameMain_t2266978667::get_offset_of_root_12(),
	UIGameMain_t2266978667::get_offset_of_gameManager_13(),
	UIGameMain_t2266978667::get_offset_of_toolbar_14(),
	UIGameMain_t2266978667::get_offset_of__list_15(),
	UIGameMain_t2266978667::get_offset_of_items_16(),
	UIGameMain_t2266978667::get_offset_of__gesture_17(),
	UIGameMain_t2266978667_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (U3CGameOverU3Ec__AnonStorey0_t389770329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2399[2] = 
{
	U3CGameOverU3Ec__AnonStorey0_t389770329::get_offset_of_proxy_0(),
	U3CGameOverU3Ec__AnonStorey0_t389770329::get_offset_of_U24this_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
